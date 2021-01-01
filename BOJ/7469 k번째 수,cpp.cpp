//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<algorithm>
//
//#define N 100000
//using namespace std;
//int arr[N + 1], tmp[N + 1];
//vector<int> tree[N * 4];
//
//int bound(int node, int k)
//{
//	int s = 0, e = tree[node].size() - 1, mid;
//	int max = tree[node].size();
//
//	while (s <= e)
//	{
//		mid = (s + e) / 2;
//		if (tree[node][mid] >= k)
//		{
//			if (max > mid) max = mid;
//			e = mid - 1;
//		}
//		else s = mid + 1;
//	}
//
//	return max;
//}
//
//void init(int node, int s, int e)
//{
//	if (s == e) tree[node].push_back(arr[s]);
//	else
//	{
//		for (int i = s; i <= e; i++) tmp[i] = arr[i];
//		sort(tmp + s + 1, tmp + e + 1);
//		for (int i = s; i <= e; i++) tree[node].push_back(tmp[i]);
//		init(node * 2, s, (s + e) / 2);
//		init(node * 2 + 1, (s + e) / 2 + 1, e);
//	}
//}
//
//int find(int K, int node, int l, int r, int s, int e)
//{
//	if (l > e || r < s) return 0;
//	else if (l <= s && e <= r) return bound(node, K);
//	int mid = (s + e) / 2;
//	return find(K, node * 2, l, r, s, mid) + find(K, node * 2 + 1, l, r, mid + 1, e);
//}
//
//int main()
//{
//	int n, q;
//	cin >> n >> q;
//	for (int i = 1; i <= n; i++) scanf("%d", &arr[i]);
//	init(1, 1, n);
//
//	for (int i = 1; i <= q; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//
//		int low = -1e9, high = 1e9, mid = 0;
//		int ans = -1e9;
//		while (low <= high)
//		{
//			mid = (low + high) / 2;
//			int val = find(mid, 1, a, b, 1, n);
//			if (val <= c - 1)
//			{
//				if (val == c - 1) ans = mid;
//				low = mid + 1;
//			}
//			else high = mid - 1;
//		}
//		printf("%d\n", ans);
//	}
//	return 0;
//}