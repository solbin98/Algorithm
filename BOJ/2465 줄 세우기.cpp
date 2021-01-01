//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<algorithm>
//#define N 100000
//using namespace std;
//
//int h[N + 1], a[N + 1], ans[N + 1], chk[N * 4 + 1];
//
//void check(int idx, int node, int s, int e)
//{
//	if (idx < s ||  idx > e) return;
//	chk[node]++;
//	if (s == e) return;
//	int mid = (s + e) / 2;
//	check(idx, node * 2, s, mid);
//	check(idx, node * 2 + 1, mid + 1, e);
//}
//
//int count(int node, int l, int r, int s, int e)
//{
//	if (e < l || r < s) return 0;
//	if (l <= s && e <= r) return chk[node];
//	int mid = (s + e) / 2;
//	return count(node * 2, l, r, s, mid) + count(node * 2 + 1, l, r, mid + 1, e);
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%d", &h[i]);
//	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
//	sort(h + 1, h + n + 1);
//	for (int i = n; i >= 1; i--)
//	{
//		int low = 1, high = n, mid;
//		int as = 0;
//		while (low <= high)
//		{
//			mid = (low + high) / 2;
//			int cnt = count(1, 1, mid, 1, n);
//			if (mid - cnt - 1 < a[i]) low = mid + 1;
//			else
//			{
//				high = mid - 1;
//				as = mid;
//			}
//		}
//		check(as, 1, 1, n);
//		ans[i] = h[as];
//	}
//	for (int i = 1; i <= n; i++) printf("%d\n", ans[i]);
//	return 0;
//}