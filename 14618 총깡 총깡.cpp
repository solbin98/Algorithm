//#include<iostream>
//#include<cstdio>
//#define INF 987654321
//#define N 5000
//#define A 2
//#define B 3
//using namespace std;
//
//int cost[N + 1][N + 1];
//int dist[N + 1], chk[N + 1];
//bool visit[N + 1];
//
//int main()
//{
//	int n, m, start, k;
//	for (int i = 0; i <= N; i++) dist[i] = INF;
//
//	cin >> n >> m;
//	cin >> start;
//	cin >> k;
//
//	for (int i = 1; i <= k; i++)
//	{
//		int tmp;
//		scanf("%d", &tmp);
//		chk[tmp] = A;
//	}
//
//	for (int i = 1; i <= k; i++)
//	{
//		int tmp;
//		scanf("%d", &tmp);
//		chk[tmp] = B;
//	}
//
//	for (int i = 1; i <= m; i++)
//	{
//		int a, b, c;
//		scanf("%d %d %d", &a,&b,&c);
//		cost[a][b] = c, cost[b][a] = c;
//	}
//
//	dist[start] = 0;
//	while (1)
//	{
//		int min = INF, min_idx = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			if (visit[i] == 0 && dist[i] < min) min = dist[i], min_idx = i;
//		}
//		if (min == INF) break;
//		visit[min_idx] = 1;
//		for (int i = 1; i <= n; i++)
//		{
//			if (cost[min_idx][i] != 0 && cost[min_idx][i] + dist[min_idx] < dist[i]) dist[i] = cost[min_idx][i] + dist[min_idx];
//		}
//	}
//
//	int min = INF, min_set;
//	for (int i = 1; i <= n; i++)
//	{
//		if (i == start) continue;
//		if (dist[i] < min && chk[i] != 0) min = dist[i], min_set = chk[i];
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (dist[i] == INF) continue;
//		if (min == dist[i] && chk[i] == A) min_set = chk[i];
//	}
//	if (min == INF) printf("-1");
//	else
//	{
//		if (min_set == A) printf("A\n");
//		else printf("B\n");
//		printf("%d", min);
//	}
//	return 0;
//}