//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<vector>
//#define N 200000
//#define INF 1500000000
//using namespace std;
//typedef struct
//{
//	int vetex, cost;
//}info;
//
//int dp[N + 1], pre[N + 1], cost[N + 1] = { 0 }, path[N + 1];
//int n, e;
//
//vector<info> link[N + 1];
//
//int max(int a, int b)
//{
//	if (a > b) return a;
//	else return b;
//}
//int solve(int now)
//{		
//	int& ref = dp[now];
//	if (ref != -INF) return ref;
//	ref = cost[now];
//	int prev = now;
//	for (int i = 0; i < link[now].size(); i++)
//	{
//			int compare = solve(link[now][i].vetex) - link[now][i].cost + cost[now];
//			if (ref < compare)
//			{
//				prev = link[now][i].vetex;
//				ref = compare;
//			}
//	}
//	pre[now] = prev;
//	return ref;
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		for (int i = 0; i <= N; i++) cost[i] = 0, dp[i] = -INF, link[i].clear();
//		cin >> n >> e;
//		for (int i = 1; i <= n; i++) scanf("%d", &cost[i]);
//		for (int i = 1; i <= e; i++)
//		{
//			int a, b, c;
//			scanf("%d %d %d", &a, &b, &c);
//			link[a].push_back({ b,c });
//		}
//		solve(1);
//		int cnt = 0, now = 1, idx = 0;
//
//		while (1)
//		{
//			path[++idx] = now, cnt++;
//			if (pre[now] == now) break;
//			now = pre[now];
//		}
//
//		printf("%d %d\n", solve(1), cnt);
//		for (int i = 1; i <= idx; i++) printf("%d ", path[i]);
//		printf("\n");
//	}
//}