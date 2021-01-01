//#include<iostream>
//#include<cstdio>
//#include<vector>
//#define N 50000
//#define M 20
//using namespace std;
//vector<int> link[N + 1];
//int depth[N + 1], dp[N + 1][M+1];
//
//void init_dp(int now, int pre)
//{
//	depth[now] = depth[pre] + 1;
//	dp[now][0] = pre;
//	for (int i = 1; i <= M; i++) 
//		dp[now][i] = dp[dp[now][i - 1]][i - 1];
//	for (int i = 0; i < link[now].size(); i++)
//		if (pre != link[now][i]) 
//			init_dp(link[now][i], now);
//}
//
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i < n; i++)
//	{
//		int u, v;
//		scanf("%d %d", &u, &v);
//		link[u].push_back(v);
//		link[v].push_back(u);
//	}
//	init_dp(1, 0);
//	int m;
//	cin >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int u, v;
//		scanf("%d %d", &u, &v);
//		if (depth[u] != depth[v])
//		{
//			if (depth[u] > depth[v])
//			{
//				int tmp = u;
//				u = v;
//				v = tmp;
//			}
//
//			for (int i = M; i >= 0; i--)
//				if (depth[u] <= depth[dp[v][i]]) v = dp[v][i];
//		}
//
//		int lca = u;
//
//		if (u != v)
//		{
//			for (int i = M; i >= 0; i--)
//			{
//				if (dp[u][i] != dp[v][i]) u = dp[u][i], v = dp[v][i];
//				lca = dp[u][i];
//			}
//		}
//		printf("%d\n", lca);
//	}
//	return 0;
//}