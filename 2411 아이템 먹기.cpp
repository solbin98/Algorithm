//#include<iostream>
//#include<cstdio>
//#define N 100
//#define ITEM 1
//#define BLOCK 2
//using namespace std;
//
//int map[N + 1][N + 1], dp[N + 1][N + 1][N * 2 + 1];
//int main()
//{
//	int n, m, a, b;
//	cin >> n >> m >> a >> b;
//	for (int i = 1; i <= a; i++)
//	{
//		int t1, t2;
//		scanf("%d %d", &t1, &t2);
//		map[t1][t2] = ITEM;
//	}
//	for (int i = 1; i <= b; i++)
//	{
//		int t1, t2;
//		scanf("%d %d", &t1, &t2);
//		map[t1][t2] = BLOCK;
//	}
//
//	dp[1][1][0] = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			if (i == 1 && j == 1) continue;
//			for (int k = 0; k <= a; k++)
//			{
//				if (map[i][j] == BLOCK) continue;
//				if (map[i][j] == ITEM) dp[i][j][k] = dp[i - 1][j][k - 1] + dp[i][j - 1][k - 1];
//				else dp[i][j][k] = dp[i - 1][j][k] + dp[i][j - 1][k];
//			}
//		}
//	}
//
//	printf("%d", dp[n][m][a]);
//	return 0;
//}
