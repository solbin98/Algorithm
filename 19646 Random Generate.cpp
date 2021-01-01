//#include<iostream>
//#include<cstdio>
//#define N 200000
//using namespace std;
//int w[N + 1], p[N + 1];
//int tree[N * 4 + 1];
//
//int init(int node, int s, int e) {
//	if (s == e) return tree[node] = w[s];
//	int mid = (s + e) / 2;
//	return tree[node] = init(node * 2, s, mid) + init(node * 2 + 1, mid + 1, e);
//}
//
//int sum(int node, int l, int r, int s, int e) {
//	if (r < s || e < l) return 0;
//	else if (s <= l && r <= e) return tree[node];
//	int mid = (l + r) / 2;
//	return sum(node * 2, l, mid, s, e) + sum(node * 2 + 1, mid + 1, r, s, e);
//}
//
//void update(int node, int val, int idx, int l, int r) {
//	if (idx < l || r < idx) return;
//	if (l == r) w[l] += val;
//	tree[node] += val;
//
//	if (l == r) return;
//	int mid = (l + r) / 2;
//	update(node * 2, val, idx, l, mid);
//	update(node * 2 + 1, val, idx, mid + 1, r);
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%d", &w[i]);
//	for (int i = 1; i <= n; i++) scanf("%d", &p[i]);
//	init(1, 1, n);
//	for (int i = 1; i <= n; i++) {
//
//		int low = 1, high = n, mid;
//		int ans = 0;
//		while (low <= high) {
//			mid = (low + high) / 2;
//			int tmp = sum(1, 1, n, 1, mid);
//			if (tmp >= p[i]) {
//				ans = mid;
//				high = mid - 1;
//			}
//			else low = mid + 1;
//		}
//		printf("%d ", ans);
//		update(1, -w[ans], ans, 1, n);
//	}
//	return 0;
//}