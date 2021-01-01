//#include<iostream>
//#include<cstdio>
//#define N 100
//#define INF 987654321
//using namespace std;
//int links[N + 1][N + 1], dp[N + 1][N + 1];
//int main()
//{
//	int n, m;
//	cin >> n;
//	cin >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int a, b, c;
//		scanf("%d %d %d", &a, &b, &c);
//		if (links[a][b] == 0 || links[a][b] > c) links[a][b] = c;
//	}
//
//	for (int k = 1; k <= n; k++)
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j <= n; j++)
//			{
//				if (i == j)
//				{
//					dp[i][j] = 0;
//					continue;
//				}
//				int min = INF;
//				if (links[i][j] != 0 && min > links[i][j]) min = links[i][j];
//				if (dp[i][k] != 0 && dp[k][j] != 0 && dp[i][k] + dp[k][j] < min) min = dp[i][k] + dp[k][j];
//
//				if (dp[i][j] == 0 && min == INF) dp[i][j] = 0;
//				else if (dp[i][j] == 0) dp[i][j] = min;
//				else if (dp[i][j] > min) dp[i][j] = min;
//			}
//	
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//			printf("%d ", dp[i][j]);
//		printf("\n");
//	}
//
//	return 0;
//}