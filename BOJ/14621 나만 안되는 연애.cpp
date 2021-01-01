//#include<iostream>
//#include<cstdio>
//#define N 1000
//#define INF 987654321
//#define M 0
//#define W 1
//
//using namespace std;
//int cost[N + 1][N + 1], chk[N + 1], dist[N + 1];
//bool visit[N + 1];
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		char tmp;
//		cin >> tmp;
//		if (tmp == 'M') chk[i] = M;
//		else chk[i] = W;
//		dist[i] = INF;
//	}
//
//	for (int i = 1; i <= m; i++)
//	{
//		int a, b, c;
//		scanf("%d %d %d", &a, &b, &c);
//		if (cost[a][b] == 0 || cost[a][b] > c) cost[a][b] = c, cost[b][a] = c;
//	}
//	int ans = 0, cnt = 0;
//	dist[1] = 0;
//	while (1)
//	{
//		int min = INF, min_idx = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			if (visit[i] == 0 && min > dist[i]) min = dist[i], min_idx = i;
//		}
//		if (min == INF) break;		
//		ans += min;
//		visit[min_idx] = 1, cnt++;
//		for (int i = 1; i <= n; i++)
//		{
//			if (chk[min_idx] != chk[i] && dist[i] > cost[min_idx][i] && cost[min_idx][i] != 0) dist[i] = cost[min_idx][i];
//		}
//	}
//	if (cnt < n) printf("-1");
//	else printf("%d", ans);
//	return 0;
//}