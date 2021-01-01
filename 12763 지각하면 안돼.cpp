//#include<iostream>
//#include<cstdio>
//
//#define N 100
//#define INF 987654321
//
//using namespace std;
//int links[N + 1][N + 1][2], costs[N + 1][2];
//int ans = INF, n, m, time, money;
//bool visit[N + 1];
//
//void dfs(int now)
//{
//	if (now == n)
//	{
//		if (ans > costs[now][1]) ans = costs[now][1];
//		visit[now] = 0;
//		return;
//	}
//	visit[now] = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		if (links[now][i][0] != INF && visit[i] == 0)
//		{	
//				costs[i][0] = costs[now][0] + links[now][i][0];
//				costs[i][1] = costs[now][1] + links[now][i][1];
//				dfs(i);
//		}
//	}
//	visit[now] = 0;
//}
//
//int main()
//{
//	cin >> n;
//	cin >> time >> money;
//	cin >> m;
//
//	for (int i = 1; i <= n; i++)
//	{
//		costs[i][0] = INF, costs[i][1] = INF;
//		for (int j = 1; j <= n; j++) links[i][j][0] = INF, links[i][j][1] = INF;
//	}
//	costs[1][0] = 0, costs[1][1] = 0;
//	for (int i = 1; i <= m; i++)
//	{
//		int a, b, c, d;
//		scanf("%d %d %d %d", &a, &b, &c, &d);
//		links[a][b][0] = c, links[a][b][1] = d;
//		links[b][a][0] = c, links[b][a][1] = d;
//	}
//	dfs(1);
//	if (ans == INF) ans = -1;
//	printf("%d", ans);
//	return 0;
//}