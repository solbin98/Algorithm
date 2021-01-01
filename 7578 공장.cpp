//#include<iostream>
//#include<cstdio>
//#define N 500000
//#define M 1000005
//using namespace std;
//int b[N + 1], tree[N * 4 + 1];
//int idx1[M + 1], num[N + 1];
//
//int init(int node, int s, int e)
//{
//	if (s == e) return tree[node] = b[s];
//	int mid = (s + e) / 2;
//	return tree[node] = init(node * 2, s, mid) + init(node * 2 + 1, mid + 1, e);
//}
//
//void update(int node, int diff, int idx, int s, int e)
//{
//	if (idx < s || e < idx) return;
//	if (s <= idx && idx <= e) tree[node] += diff;
//	if (s == e)
//	{
//		b[s] += diff;
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
//
//int main()
//{
//	long long tmp, n, ans = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%d", &tmp), idx1[tmp] = i;
//	for (int i = 1; i <= n; i++) scanf("%d", &tmp), num[idx1[tmp]] = i;
//	for (int i = 1; i <= n; i++) b[i] = 1;
//	init(1, 1, n);
//	
//	for (int i = 1; i <= n; i++)
//	{
//		int tmp = 0;
//		tmp = sum(1, 1, n, 1, num[i]);
//		if (tmp > 0) tmp--;
//		ans += tmp;
//		update(1, -1, num[i], 1, n);
//	}
//	printf("%lld", ans);
//	return 0;
//}