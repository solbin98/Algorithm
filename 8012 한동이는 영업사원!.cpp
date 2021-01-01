//#include<iostream>
//#include<cstdio>
//#include<vector>
//#define N 40000
//using namespace std;
//int dp[N + 1][16], depth[N + 1];
//vector<int> link[N + 1];
//
//void init_dp(int now, int pre, int d){
//	dp[now][0] = pre;	
//	depth[now] = d;
//	for (int i = 1; i < 16; i++) 
//		dp[now][i] = dp[dp[now][i - 1]][i - 1];
//	
//	for (int i = 0; i < link[now].size(); i++)
//		if (link[now][i] != pre)
//			init_dp(link[now][i], now, d+1);
//}
//
//int calc_dist(int now, int obj)
//{
//	int sum = 0;
//	int r = 1 << 15;
//	for (int i = 15; i >= 0; i--) {
//		if (depth[dp[now][i]] >= depth[obj]) {
//			sum += r;
//			now = dp[now][i];
//			if (now == obj) return sum;
//		}
//		r  = r >> 1;
//	}
//	return sum;
//}
//
//
//int main()
//{
//	int n, m;
//	cin >> n;
//	for (int i = 1; i < n; i++) {
//		int a, b;
//		scanf("%d %d", &a, &b);
//		link[a].push_back(b);
//		link[b].push_back(a);
//	}
//
//	init_dp(1, 0, 1);
//
//	cin >> m;
//	int pre = 1, ans = 0;
//	for (int i = 1; i <= m; i++) {
//		int now, a, b;
//		scanf("%d", &now);
//		a = now, b = pre;		
//		// printf("before    dep[%d] : %d, dep[%d] : %d\n", a, depth[a], b, depth[b]);
//		if (depth[a] != depth[b]) {
//			if (depth[a] < depth[b]) {
//				int tmp = a;
//				a = b;
//				b = tmp;
//			}
//
//			for (int i = 15; i >= 0; i--) {
//				if (depth[dp[a][i]] >= depth[b])  a = dp[a][i];
//				if (depth[dp[a][i]] == depth[b]) break;
//			}
//		}
//	
//		int lca = a;
//		if (a != b)
//		{
//			for (int i = 15; i >= 0; i--) {
//				if (dp[a][i] != dp[b][i]) a = dp[a][i], b = dp[b][i];
//				lca = dp[a][i];
//			}
//		}
//		ans += calc_dist(now, lca);
//		ans += calc_dist(pre, lca);
//		pre = now;
//	}
//
//	printf("%d", ans);
//	return 0;
//}