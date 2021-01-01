//#include<iostream>
//#include<cstdio>
//
//#define N 100
//#define H 20
//#define INF 987654321
//
//using namespace std;
//int a[N + 1][H + 1];
//int dp[N + 1][H + 1];
//
//int main()
//{
//	for (int i = 0; i <= N; i++)
//			for (int k = 0; k <= H; k++)
//				dp[i][k] = INF, a[i][k] = 0;
//
//	int n, k;
//	cin >> n;
//	cin >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		int cnt;
//		cin >> cnt;
//		for (int j = 1; j <= cnt; j++)
//		{
//			int tmp;
//			cin >> tmp;
//			a[i][tmp] = 1;
//		}
//	}
//
//	dp[0][1] = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= H; j++)
//		{
//			if (a[i][j] == false) continue;
//
//			if (dp[i][j] > dp[i - 1][j]) dp[i][j] = dp[i - 1][j];
//			if (dp[i][j] > dp[i - 1][j - 1]) dp[i][j] = dp[i - 1][j - 1];
//			if (dp[i][j] > dp[i - 1][j + 1]) dp[i][j] = dp[i - 1][j + 1];
//			if (j == 20)
//			{
//				for (int k = 10; k <= H; k++)
//					if (dp[i][j] > dp[i - 1][k]) dp[i][j] = dp[i - 1][k];
//			}
//			else if (j % 2 == 0 && dp[i][j] > dp[i - 1][j / 2]) dp[i][j] = dp[i - 1][j / 2];
//
//			for (int k = 1; k <= H; k++)
//			{
//				if (dp[i][j] > dp[i - 1][k] + 1) dp[i][j] = dp[i - 1][k] + 1;
//			}
//		}
//	}
//
//	int ans = INF;
//	for (int i = 1; i <= H; i++) if (dp[n][i] < ans) ans = dp[n][i];
//	if (ans > k) ans = -1;
//	printf("%d", ans);
//	return 0;
//}