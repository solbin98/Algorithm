//#include<iostream>
//#include<cstdio>
//#include<vector>
//#define N 100000
//#define M 20
//using namespace std;
//int p[N + 1][M + 1], d[N + 1];
//vector<int> link[N + 1];
//
//void init_tree(int now, int pre)
//{
//	d[now] = d[pre] + 1;
//	p[now][0] = pre;
//	for (int i = 1; i <= M; i++) p[now][i] = p[p[now][i - 1]][i - 1];
//	for (int i = 0; i < link[now].size(); i++)
//		if (link[now][i] != pre)
//			init_tree(link[now][i], now);
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i < n; i++)
//	{
//		int u,v;
//		scanf("%d %d", &u, &v);
//		link[u].push_back(v);
//		link[v].push_back(u);
//	}
//	init_tree(1, 0);
//	int m;
//	cin >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int u, v;
//		scanf("%d %d", &u, &v);
//		if (d[u] != d[v])
//		{
//			if (d[u] < d[v])
//			{
//				int tmp = u;
//				u = v;
//				v = tmp;
//			}
//			for (int i = M; i >= 0; i--)
//				if (d[p[u][i]] >= d[v]) u = p[u][i];
//		}
//
//		int lca = u;
//		if (u != v)
//		{
//			for (int i = M; i >= 0; i--)
//			{
//				if (p[u][i] != p[v][i])
//				{
//					u = p[u][i];
//					v = p[v][i];
//				}
//				lca = p[u][i];
//			}
//		}
//		printf("%d\n", lca);
//	}
//
//
//	return 0;
//}