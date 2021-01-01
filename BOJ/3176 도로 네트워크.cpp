//#include<iostream>
//#include<cstdio>
//#include<vector>
//#define N 100000
//#define M 20
//using namespace std;
//int p[N + 1][M + 1], dp[N + 1][M + 1][2], depth[N + 1];
//vector<pair<int, int>> cost[N + 1];
//
//int ma(int a, int b)
//{
//	if (a < b) return b;
//	else return a;
//}
//
//int mi(int a, int b)
//{
//	if (a > b) return b;
//	else return a;
//}
//
//void init_tree(int now, int pare)
//{
//	depth[now] = depth[pare] + 1;
//	p[now][0] = pare;
//	for (int i = 1; i <= M; i++) 
//		p[now][i] = p[p[now][i - 1]][i - 1];
//
//	for (int i = 0; i < cost[now].size(); i++)
//		if (cost[now][i].first != pare)
//			init_tree(cost[now][i].first, now);
//}
//
//int calc_dist1(int u, int v)
//{
//	if (u == v) return 1e9;
//	int mins = 1e9, now = u, obj = v;
//	for (int j = M; j >= 0; j--)
//	{
//		if (depth[p[now][j]] >= depth[obj])
//		{
//			mins = mi(mins, dp[now][j][0]);
//			now = p[now][j];
//		}
//	}
//	return mins;
//}
//
//int calc_dist2(int u, int v)
//{
//	if (u == v) return -1e9;
//	int maxs = -1e9, now = u, obj = v;
//	for (int j = M; j >= 0; j--)
//	{
//		if (depth[p[now][j]] >= depth[obj])
//		{
//			maxs = ma(maxs, dp[now][j][1]);
//			now = p[now][j];
//		}
//	}
//	return maxs;
//}
//
//void init_dp(int now, int pare)
//{
//	int sum, costs = 0;
//	for (int i = 0; i < cost[now].size(); i++)
//		if (cost[now][i].first == pare)
//			costs = cost[now][i].second;
//
//	int mins = costs, maxs = costs;
//	dp[now][0][1] = costs;
//	dp[now][0][0] = costs;
//	for (int i = M; i >= 1; i--)
//	{
//		if (p[now][i] == 0) continue;
//		dp[now][i][0] = mi(calc_dist1(p[now][0], p[now][i]) , costs);
//		dp[now][i][1] = ma(calc_dist2(p[now][0], p[now][i]), costs);
//	}
//
//	for (int i = 0; i < cost[now].size(); i++)
//		if (cost[now][i].first != pare)
//			init_dp(cost[now][i].first, now);
//}
//
//void swap(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i < n; i++)
//	{
//		int u, v, cos;
//		scanf("%d %d %d", &u, &v, &cos);
//		cost[u].push_back({ v,cos });
//		cost[v].push_back({ u,cos });
//	}
//
//	init_tree(1, 0);
//	init_dp(1, 0);
//
//	int m;
//	cin >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int u, v;
//		int ou, ov;
//		scanf("%d %d", &u, &v);
//		ou = u, ov = v;
//		if (depth[u] != depth[v])
//		{
//			if (depth[u] < depth[v]) swap(u, v);
//			for (int i = M; i >= 0; i--)
//				if (depth[p[u][i]] >= depth[v]) u = p[u][i];
//		}
//
//		int lca1 = u, lca2;
//		if (u != v)
//		{
//			for (int i = M; i >= 0; i--)
//			{
//				if (p[u][i] != p[v][i])
//					u = p[u][i], v = p[v][i];
//				lca1 = p[u][i];
//			}
//		}
//		lca2 = lca1;
//		if (depth[ou] < depth[lca1]) swap(ou, lca1);
//		if (depth[ov] < depth[lca2]) swap(ov, lca2);
//		printf("%d %d\n", mi(calc_dist1(ou, lca1), calc_dist1(ov, lca2)), ma(calc_dist2(ou, lca1), calc_dist2(ov, lca2)));
//	}
//
//	return 0;
//}