//#include<iostream>
//#include<cstdio>
//#define N 1000
//#define INF 987654321
//using namespace std;
//int dp[N + 1][N + 1], c[N + 1], d[N + 1];
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) scanf("%d", &d[i]);
//	for (int i = 1; i <= m; i++) scanf("%d", &c[i]);
//
//	for (int i = 0; i <= n; i++)
//	{
//		for (int j = 0; j <= m; j++)
//		{
//			if (i > j)
//			{
//				dp[i][j] = INF;
//				continue;
//			}
//			if (i == 0) dp[i][j] = 0;
//			else
//			{
//				dp[i][j] = dp[i - 1][j - 1] + c[j]*d[i];
//				if (j >= 1 && dp[i][j] > dp[i][j - 1]) dp[i][j] = dp[i][j - 1];
//			}
//		}
//	}
//	
//	int ans = INF;
//	for (int i = 1; i <= m; i++)
//	{
//		if (dp[n][i] < ans) ans = dp[n][i];
//	}
//	cout << ans;
//	return 0;
//}