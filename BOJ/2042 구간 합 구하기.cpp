//#include<iostream>
//#include<cstdio>
//#define N 1000000
//using namespace std;
//long long ary[N + 1], tree[5 * N+1];
//
//long long init(long long node, long long start, long long end)
//{
//	if (start == end) return tree[node] = ary[start];
//	else return tree[node] = init(node * 2, start, (start + end) / 2) + init(node * 2 + 1, ((start + end) / 2) + 1, end);
//}
//
//long long sum(long long node, long long left, long long right, long long start, long long end)
//{
//	if (left > end || right < start) return 0;
//	if (left <= start && right >= end) return tree[node];
//	return sum(node * 2, left, right, start, (start + end) / 2) + sum(node * 2 + 1, left, right, ((start + end) / 2) + 1, end);
//}
//
//void update(long long index, long long diff, long long node, long long start, long long end)
//{
//	if (index < start || end < index) return;
//	tree[node] += diff;
//	if (start == end) ary[start] += diff;
//	if (start != end)
//	{
//		update(index, diff, node * 2, start, (start + end) / 2);
//		update(index, diff, node * 2 + 1, ((start + end) / 2)+1, end);
//	}
//}
//
//int main()
//{
//	long long n, m, k;
//	cin >> n >> m >> k;
//	for (int i = 1; i <= n; i++) scanf("%lld", &ary[i]);
//	init(1, 1, n);
//	for (int i = 1; i <= m + k; i++)
//	{
//		long long a, b, c;
//		scanf("%lld %lld %lld", &a, &b, &c);
//		if (a == 1) update(b, c - ary[b], 1, 1, n);
//		else printf("%lld\n", sum(1, b, c, 1, n));
//	}
//	return 0;
//}