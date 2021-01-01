//#include<iostream>
//#include<cstdio>
//#include<vector>
//#define N 40000
//#define M 20
//using namespace std;
//int p[N + 1][M + 1], dp[N + 1][M + 1], depth[N + 1];
//vector<pair<int,int>> cost[N + 1];
//void init_tree(int now, int pare)
//{
//	depth[now] = depth[pare] + 1;
//	p[now][0] = pare;
//	for (int i = 1; i <= M; i++) p[now][i] = p[p[now][i - 1]][i - 1];
//	
//	for (int i = 0; i < cost[now].size(); i++)
//		if (cost[now][i].first != pare)
//			init_tree(cost[now][i].first, now);
//}
//
//int calc_dist(int u, int v)
//{	
//	if (u == v) return 0;
//	int sum = 0, now = u, obj = v;
//	for (int j = M; j >= 0; j--)
//	{
//		if (depth[p[now][j]] >= depth[obj])
//		{
//			sum += dp[now][j];
//			now = p[now][j];
//		}
//	}
//	return sum;
//}
//
//void init_dp(int now, int pare)
//{
//	int sum, costs = 0;
//	for (int i = 0; i < cost[now].size(); i++)
//		if (cost[now][i].first == pare)
//			costs = cost[now][i].second;
//
//	dp[now][0] = costs;
//	for (int i = M; i >= 1; i--)
//	{
//		if (p[now][i] == 0) continue;
//		sum = calc_dist(p[now][0], p[now][i]);
//		dp[now][i] = costs + sum;
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
//				 lca1 = p[u][i];
//			}
//		}	
//		lca2 = lca1;		
//		if (depth[ou] < depth[lca1]) swap(ou, lca1);
//		if (depth[ov] < depth[lca2]) swap(ov, lca2);
//		printf("%d \n", calc_dist(ou, lca1) + calc_dist(ov, lca2));
//	}
//
//	return 0;
//}