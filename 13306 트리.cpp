//#include<iostream>
//#include<cstdio>
//#include<vector>
//#define N 200000
//using namespace std;
//int pare[N + 1], p[N + 1], ranks[N + 1];
//int query[N*10 + 1][3];	
//bool ans[N * 10 + 1] = { 0 };
//vector<int> child[N + 1];
//
//int find(int now)
//{
//	if (p[now] == now) return now;
//	return p[now] = find(p[now]);
//}
//
//void unions(int a, int b)
//{
//
//	int pa = find(a), pb = find(b);
//	if (pa == pb) return;
//	if (ranks[pa] < ranks[pb])
//	{
//		int t = pa;
//		pa = pb;
//		pb = t;
//	}
//	if (ranks[pa] == ranks[pb]) ranks[pa]++;
//	p[pb] = pa;
//}
//
//void dfs(int now)
//{
//	for (int i = 0; i < child[now].size(); i++)
//	{
//		if (pare[child[now][i]] == now)
//		{
//			unions(now, child[now][i]);
//			dfs(child[now][i]);
//		}
//	}
//}
//
//int main()
//{
//	int n, q, idx = 0;
//	cin >> n >> q;
//	for (int i = 1; i <= n; i++) pare[i] = i, p[i] = i;
//	for (int i = 2; i <= n; i++) scanf("%d", &pare[i]), child[pare[i]].push_back(i);
//	for (int i = 1; i <= n - 1 + q; i++)
//	{
//		int a, b;
//		scanf("%d", &a);
//		if (a == 0)
//		{
//			scanf("%d", &a);	
//			query[++idx][1] = a;
//			query[idx][2] = pare[a];
//			pare[a] = a;
//		}
//		else
//		{
//			scanf("%d %d", &a, &b);
//			query[++idx][0] = 1, query[idx][1] = a, query[idx][2] = b;
//		}
//	}
//
//	for (int i = 1; i <= n; i++)
//		if (pare[i] == i) dfs(i);
//
//
//	int cnt = 0;
//	for (int i = idx; i >= 1; i--)
//	{
//		if (query[i][0] == 0) unions(query[i][1], query[i][2]);
//		else
//		{
//			bool flag = 0;
//			int pa = find(query[i][1]), pb = find(query[i][2]);
//			cnt++;
//			if (pa == pb) ans[cnt] = 1;
//		}
//	}
//
//	for (int i = cnt; i >= 1; i--)
//	{
//		if (ans[i]) printf("YES\n");
//		else printf("NO\n");
//	}
//	return 0;
//}