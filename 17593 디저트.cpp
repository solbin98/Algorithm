//#include<iostream>
//#include<cstdio>
//#define N 100000
//#define M 10
//using namespace std;
//int dp[N+1][M + 1], a[M + 1][N + 1];
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//		for (int j = 1; j <= n; j++)
//			scanf("%d", &a[i][j]);
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			int max = 0;
//			for (int k = 1; k <= m; k++)
//			{
//				if (j == k && i != 1)
//					if (max < dp[i - 1][k] + a[j][i] / 2) max = dp[i - 1][k] + a[j][i] / 2;
//				else
//					if (max < dp[i - 1][k] + a[j][i]) max = dp[i - 1][k] + a[j][i];
//			}
//			dp[i][j] = max;
//		}
//	}
//	int ans = 0;
//
//	for (int i = 1; i <= m; i++)
//		if (dp[n][i] > ans) ans = dp[n][i];
//
//	printf("%d", ans);
//	return 0;
//}