//#include<cstdio>
//#define N 400
//#define INF 987654321
//
//int links[N + 1][N + 1];
//int dp[N + 1][N + 1];
//
//
//int main()
//{
//	int v, e;
//	scanf("%d %d", &v, &e);
//
//	for (int i = 1; i <= v; i++)
//		for (int j = 1; j <= v; j++)
//			dp[i][j] = INF, links[i][j] = INF;
//
//
//	for (int i = 1; i <= e; i++)
//	{
//		int a, b, c;
//		scanf("%d %d %d", &a, &b, &c);
//		links[a][b] = c;
//	}
//
//	for (int k = 1; k <= v; k++)
//	{
//		for (int i = 1; i <= v; i++)
//		{
//			for (int j = 1; j <= v; j++)
//			{
//				if (dp[i][j] > links[i][j]) dp[i][j] = links[i][j];
//				if (dp[i][j] > dp[i][k] + dp[k][j]) dp[i][j] = dp[i][k] + dp[k][j];
//			}
//		}
//	}
//	int ans = INF;
//	for (int i = 1; i <= v; i++)
//	{
//		if (dp[i][i] < ans) ans = dp[i][i];
//	}
//	if (ans == INF) ans = -1;
//	printf("%d", ans);
//}