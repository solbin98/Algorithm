//#include<iostream>
//#include<cstdio>
//#include<vector>
//#define N 32000
//using namespace std;
//vector <pair<int, int>> link[N + 1];
//vector <int> pre[N + 1];
//int dp[N + 1], cnt = 0;
//bool visit[N + 1], pre_visit[N + 1];
//int solve(int now)
//{
//	if (visit[now] == 1) return dp[now];
//	visit[now] = 1;
//	int max = 0;
//	for (int i = 0; i < link[now].size(); i++)
//	{
//		if (max < solve(link[now][i].first) + link[now][i].second)
//			max = solve(link[now][i].first) + link[now][i].second;
//	}
//	for (int i = 0; i < link[now].size(); i++)
//	{
//		if (max == solve(link[now][i].first) + link[now][i].second)
//			pre[now].push_back(link[now][i].first);
//	}
//	return dp[now] = max;
//}
//
//void calc(int now, int s)
//{
//	if (now == s || pre_visit[now] == 1) return;
//	pre_visit[now] = 1;
//	for (int i = 0; i < pre[now].size(); i++)
//	{
//		calc(pre[now][i], s), cnt++;
//	}
//}
//
//int main()
//{
//	int n, m;
//	cin >> n;
//	cin >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int a, b, c;
//		scanf("%d %d %d", &a, &b, &c);
//		pair<int, int> tmp = { a, c };
//		link[b].push_back(tmp);
//	}
//	int s, e, now;
//	cin >> s >> e;
//	printf("%d\n",solve(e));
//	calc(e, s);
//	printf("%d", cnt);
//	return 0;
//}
