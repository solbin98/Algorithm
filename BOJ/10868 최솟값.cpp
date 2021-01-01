//#include<iostream>
//#include<cstdio>
//#define N 1000000
//#define INF 1000000001
//using namespace std;
//int arr[N + 1], tree[N * 6 + 1];
//
//int min(int a, int b)
//{
//	if (a < b) return a;
//	else return b;
//}
//
//int init(int node, int start, int end)
//{
//	if (start == end) return tree[node] = arr[start];
//	return tree[node] = min(init(node * 2, start, (start + end) / 2), init(node * 2 + 1, ((start + end) / 2) + 1, end));
//}
//
//int sum(int node, int left, int right, int start, int end)
//{
//	if (end < left || right < start) return INF;
//	if (left <= start && end <= right) return tree[node];
//	return min(sum(node * 2, left, right, start, ((start + end) / 2)), sum(node * 2 + 1, left, right, ((start + end) / 2) + 1,end));
//}
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) scanf("%d", &arr[i]);
//	init(1, 1, n);
//	for (int i = 1; i <= m; i++)
//	{
//		int a, b;
//		scanf("%d %d", &a, &b);
//		printf("%d\n", sum(1, a, b, 1, n));
//	}
//	return 0;
//}