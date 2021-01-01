//#include<iostream>
//#include<cstdio>
//#define N 200005
//using namespace std;
//
//int tree[N * 4 + 1], ary[N + 1], idxs[N + 1];
//int top;
//
//int init(int node, int s, int e)
//{
//	if (s == e) return tree[node] = ary[s];
//	int mid = (s + e) / 2;
//	return tree[node] = init(node * 2, s, mid) + init(node * 2 + 1, mid + 1, e);
//}
//
//void update(int node, int diff, int idx, int s, int e)
//{
//	if (idx < s || idx > e) return;
//	if (s <= idx && idx <= e) tree[node] += diff;
//	if (s == e)
//	{
//		ary[s] += diff;
//		return;
//	}
//	int mid = (s + e) / 2;
//	update(node * 2, diff, idx, s, mid);
//	update(node * 2 + 1, diff, idx, mid + 1, e);
//}
//
//int sum(int node, int s, int e, int l, int r)
//{
//	if (e < l || r < s) return 0;
//	if (l <= s && e <= r) return tree[node];
//	int mid = (s + e) / 2;
//	return sum(node * 2, s, mid, l, r) + sum(node * 2 + 1, mid + 1, e, l, r);
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		for (int i = 0; i <= N * 4; i++) tree[i] = 0;
//		for (int i = 0; i <= N; i++) ary[i] = 0, idxs[i] = 0;
//
//		int n, m;
//		cin >> n >> m;
//		top = m + 1;
//	
//
//		for (int i = 1; i <= n; i++) ary[m + i] = 1;
//		for (int i = 1; i <= n; i++) idxs[i] = m + i;
//		init(1, 1, n + m);
//		for (int i = 1; i <= m; i++)
//		{
//			int query;
//			scanf("%d", &query);
//			printf("%d ", sum(1, 1 ,n+m, top, idxs[query]-1));
//			update(1, -1, idxs[query], 1, n + m);
//			update(1, 1, --top, 1, n + m);
//			idxs[query] = top;
//		}
//		printf("\n");
//	}
//
//	return 0;
//}