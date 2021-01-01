//#include<iostream>
//#include<cstdio>
//#define N 1000
//#define INF 987654321
//using namespace std;
//int links[N + 1][N + 1], dist[N + 1];
//int dp[N + 1];
//bool visit[N + 1];
//
//int find_ans(int num, int len)
//{
//	int ans = 0;
//	if (dp[num] != -1) return dp[num];
//	for (int i = 1; i <= len; i++)
//	{
//		if (links[num][i] != INF && dist[num] > dist[i])
//		{
//			ans += find_ans(i, len);
//		}
//	}
//	dp[num] = ans;
//	return ans;
//}
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; i++)
//	{
//		dist[i] = INF, dp[i] = -1;
//		for (int j = 1; j <= n; j++)
//			links[i][j] = INF;
//	}
//
//	for (int i = 1; i <= m; i++)
//	{
//		int a, b, c;
//		scanf("%d %d %d", &a, &b, &c);
//		links[a][b] = c, links[b][a] = c;
//	}
//
//	dist[2] = 0, dp[2] = 1;
//
//	while (1)
//	{
//		int min = INF, min_index = INF;
//		for (int i = 1; i <= n; i++)
//		{
//			if (visit[i] == 0 && min > dist[i]) min = dist[i], min_index = i;
//		}
//		if (min == INF) break;
//		visit[min_index] = 1;
//		for (int i = 1; i <= n; i++)
//		{
//			if (links[min_index][i] != INF)
//			{
//				if (dist[i] > dist[min_index] + links[min_index][i]) dist[i] = dist[min_index] + links[min_index][i];
//			}
//		}
//	}
//
//	printf("%d",find_ans(1,n));
//	return 0;
//}