//#include<iostream>
//#include<cstdio>
//#define N 100
//#define INF 987654321
//using namespace std;
//
//int links[N + 1][N + 1], dp[N + 1][N + 1];
//int main()
//{
//	int n, m;
//	cin >> n;
//	cin >> m;
//
//	for (int i = 1; i <= N; i++)
//		for (int j = 1; j <= N; j++)
//			links[i][j] = INF, dp[i][j] = INF;
//
//	for (int i = 1; i <= m; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		links[a][b] = 1;
//		links[b][a] = 1;
//	}
//
//	for (int k = 1; k <= n; k++)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= n; j++)
//			{
//				int min = INF;
//				if (min > links[i][j]) min = links[i][j];
//				if (min > dp[i][k] + dp[k][j]) min = dp[i][k] + dp[k][j];
//				if (dp[i][j] > min) dp[i][j] = min;
//			}
//		}
//	}
//
//	int ans = 0;
//	for (int i = 2; i <= n; i++)
//	{
//		if (dp[1][i] != INF) ans++;
//	}
//	cout << ans;
//	return 0;
//}