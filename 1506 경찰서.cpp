//#include<iostream>
//#include<cstdio>
//#define N 100
//#define INF 987654321
//
//using namespace std;
//char maps[N + 1][N + 1];
//int cost[N + 1], dp[N + 1][N + 1], set[N + 1];
//bool visit[N + 1];
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) cin >> cost[i];
//	for (int i = 0; i < n; i++) cin >> maps[i];
//	
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//				dp[i][j] = INF;
//
//	for (int k = 1; k <= n; k++)
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j <= n; j++)
//			{
//				if (dp[i][j] > dp[i][k] + dp[k][j]) dp[i][j] = dp[i][k] + dp[k][j];
//				if (maps[i - 1][j - 1] == '1' && (dp[i][j] > maps[i - 1][j - 1] - '0')) dp[i][j] = maps[i - 1][j - 1] - '0';
//			}
//	
//	int ans = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		int mins = INF;
//		if (visit[i] == 0)
//		{
//			visit[i] = 1;
//			if (cost[i] < mins) mins = cost[i];
//			for (int j = 1; j <= n; j++)
//			{
//				if (dp[i][j] != INF && dp[j][i] != INF)
//				{
//					visit[j] = 1;
//					if (cost[j] < mins) mins = cost[j];
//				}
//			}
//		}
//		set[i] = mins;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (set[i] != INF) ans += set[i];
//	}
//	printf("%d", ans);
//	return 0;
//}