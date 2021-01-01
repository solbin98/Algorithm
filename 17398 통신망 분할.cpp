//#include<iostream>
//#include<cstdio>
//#include<vector>
//#define N 100000
//using namespace std;
//vector <int> links[N + 1];
//bool chk[N + 1], visit[N + 1];
//long long link_list[N + 1][2], union_list[N+1], set[N + 1], set_size[N+1], level[N + 1];
//
//long long dfs(long long n, long long m)
//{
//	visit[n] = 1, set[n] = m;
//	int sum = 0;
//	for (int i = 0; i < links[n].size(); i++)
//		if (!visit[links[n][i]]) sum += dfs(links[n][i], m);
//	return sum + 1;
//}
//
//long long find(long long n)
//{
//	if (set[n] == n) return n;
//	return set[n] = find(set[n]);
//}
//
//void swap(long long * a, long long * b)
//{
//	long long tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//void unions(long long a, long long b)
//{
//	a = find(a), b = find(b);
//	if (a == b) return;
//	else if (level[a] < level[b]) swap(a, b);
//	set[b] = a;
//	set_size[a] += set_size[b];
//	if (level[a] == level[b]) level[a]++;
//}
//
//int main()
//{
//	int n, m, q;
//	cin >> n >> m >> q;
//	for (int i = 1; i <= m; i++) scanf("%lld %lld", &link_list[i][0], &link_list[i][1]);
//	for (int i = 1; i <= q; i++)
//	{
//		long long tmp;
//		scanf("%lld", &tmp);
//		chk[tmp] = 1, union_list[i] = tmp;
//	}
//
//	for (int i = 1; i <= m; i++)
//	{
//		if (chk[i]) continue;
//		long long a = link_list[i][0], b = link_list[i][1];
//		links[a].push_back(b), links[b].push_back(a);
//	}
//	long long ans = 0;
//	for (int i = 1; i <= n; i++) if (visit[i] == 0) set_size[i] = dfs(i, i);
//	for (int i = q; i >= 1; i--)
//	{
//		int idx = union_list[i];
//		long long a = link_list[idx][0], b = link_list[idx][1];
//		long long set_a = find(a), set_b = find(b);		
//
//		if (set_a != set_b) ans += set_size[set_a] * set_size[set_b];
//		unions(set_a, set_b);
//	}
//	printf("%lld", ans);
//	return 0;
//}