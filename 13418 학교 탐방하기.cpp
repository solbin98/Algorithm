//#include<iostream>
//#include<cstdio>
//#define N 1000
//#define INF 987654321
//using namespace std;
//int link[N + 1][N + 1], dist[N + 1] = { 0 };
//int main()
//{
//	for (int i = 0; i <= N; i++)
//	{
//		dist[i] = INF;
//		for (int j = 0; j <= N; j++)
//			link[i][j] = -1;
//	}
//
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= m + 1; i++)
//	{
//		int u, v, c;
//		scanf("%d %d %d", &u, &v, &c);
//		link[u][v] = !c, link[v][u] = link[u][v];
//	}
//
//	int min_cost = 0, max_cost = 0;
//	bool visit[N + 1] = { 0 };
//	dist[0] = 0;
//	while (1)
//	{
//		int min = INF, min_idx = 0;
//		for (int i = 0; i <= n; i++)
//			if (visit[i] == 0 && dist[i] < min)
//				min = dist[i], min_idx = i;
//		if (min == INF) break;
//		visit[min_idx] = 1, min_cost += min;
//
//		for (int i = 1; i <= n; i++)
//			if (dist[i] > link[min_idx][i] && link[min_idx][i] != -1) dist[i] = link[min_idx][i];
//	}
//	for (int i = 0; i <= N; i++) dist[i] = -1, visit[i] = 0;
//	dist[0] = 0;
//	while (1)
//	{
//		int max = -1, max_idx = 0;
//		for (int i = 0; i <= n; i++)
//			if (visit[i] == 0 && dist[i] > max)
//				max = dist[i], max_idx = i;
//
//		if (max == -1) break;
//		visit[max_idx] = 1, max_cost += max;
//
//		for (int i = 1; i <= n; i++)
//			if (dist[i] < link[max_idx][i] && link[max_idx][i] != -1) dist[i] = link[max_idx][i];
//	}
//	printf("%d", max_cost*max_cost - min_cost*min_cost);
//	return 0;
//}