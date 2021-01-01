//#include<iostream>
//#include<cstdio>
//#define N 800
//#define INF 98765
//
//using namespace std;
//int links[N + 1][N + 1], dis[N + 1][N + 1];
//
//void dist(int start, int n)
//{
//	bool visit[N + 1] = { 0 };
//	int dist[N + 1] = { 0 };
//	for (int i = 1; i <= N; i++) dist[i] = INF;
//	dist[start] = 0;
//
//	int min = INF, min_index = start;
//	while (1)
//	{
//		min = INF;
//		for (int i = 1; i <= n; i++)
//		{
//			if (dist[i] < min && visit[i] == 0)
//				min = dist[i], min_index = i;
//		}
//		if (min == INF) break;
//
//		for (int i = 1; i <= n; i++)
//		{
//			if (links[min_index][i] != 0 && dist[i] > dist[min_index] + links[min_index][i])
//				dist[i] = dist[min_index] + links[min_index][i];
//		}
//		visit[min_index] = 1;
//	}
//
//	for (int i = 1; i <= n; i++) dis[start][i] = dist[i];
//}
//
//int main()
//{
//	int n, e, v1, v2;
//	cin >> n >> e;
//	for (int i = 1; i <= e; i++)
//	{
//		int a, b, c;
//		scanf("%d %d %d", &a, &b, &c);
//		links[a][b] = c, links[b][a] = c;
//	}
//	cin >> v1 >> v2;
//	dist(1, n), dist(v1, n), dist(v2, n);
//
//	int ans = 0;
//	if (dis[1][v1] + dis[v1][v2] + dis[v2][n] > dis[1][v2] + dis[v2][v1] + dis[v1][n]) ans = dis[1][v2] + dis[v2][v1] + dis[v1][n];
//	else ans = dis[1][v1] + dis[v1][v2] + dis[v2][n];
//
//	if (ans >= INF) ans = -1;
//	printf("%d", ans);
//	return 0;
//}