//#include<iostream>
//#include<cstdio>
//#define N 100000
//#define INF 1000000005
//using namespace std;
//int a[N + 1], tree1[N * 4 + 1], tree2[N * 4 + 1];
//
//int max(int a, int b)
//{
//	if (a > b) return a;
//	else return b;
//}
//
//int min(int a, int b)
//{
//	if (a < b) return a;
//	else return b;
//}
//
//int init1(int node, int s, int e)
//{
//	if (s == e) return tree1[node] = a[s];
//	int mid = (s + e) / 2;
//	return tree1[node] = max(init1(node * 2, s, mid), init1(node * 2 + 1, mid + 1, e));
//}
//
//int init2(int node, int s, int e)
//{
//	if (s == e) return tree2[node] = a[s];
//	int mid = (s + e) / 2;
//	return tree2[node] = min(init2(node * 2, s, mid), init2(node * 2 + 1, mid + 1, e));
//}
//
//int maxs(int node, int s, int e, int l, int r)
//{
//	if (e < l || r < s) return 1;
//	if (l <= s && e <= r) return tree1[node];
//	int mid = (s + e) / 2;
//	return max(maxs(node * 2, s, mid, l, r), maxs(node * 2 + 1, mid + 1, e, l, r));
//}
//
//int mins(int node, int s, int e, int l, int r)
//{
//	if (e < l || r < s) return INF;
//	if (l <= s && e <= r) return tree2[node];
//	int mid = (s + e) / 2;
//	return min(mins(node * 2, s, mid, l, r), mins(node*2 + 1, mid+1,e,l,r));
//}
//
//int main()
//{
//	int n, q;
//	cin >> n >> q;
//	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
//	init1(1, 1, n), init2(1, 1, n);
//	for (int i = 1; i <= q; i++)
//	{
//		int s, e;
//		scanf("%d %d", &s, &e);
//		printf("%d %d\n", mins(1, 1, n, s, e), maxs(1, 1, n, s, e));
//	}
//	return 0;
//}