//#include<iostream>
//#include<cstdio>
//#define N 100000
//
//using namespace std;
//int tmp[N + 1][2], a[N + 1][2];
//long long dp[N + 1];
//
//void merge(int s, int e)
//{
//	int mid = (s + e) / 2;
//	int i1 = s, i2 = mid + 1, index = 1;
//	while (i1 <= mid && i2 <= e)
//	{
//		if (a[i1][0] < a[i2][0]) tmp[index][0] = a[i1][0], tmp[index++][1] = a[i1++][1];
//		else tmp[index][0] = a[i2][0], tmp[index++][1] = a[i2++][1];
//	}
//	for (int i = i1; i <= mid; i++) tmp[index][0] = a[i][0], tmp[index++][1] = a[i][1];
//	for (int i = i2; i <= e; i++) tmp[index][0] = a[i][0], tmp[index++][1] = a[i][1];
//	for (int i = s; i <= e; i++) a[i][0] = tmp[i - s + 1][0], a[i][1] = tmp[i - s + 1][1];
//}
//void merge_sort(int s, int e)
//{
//	if (s == e) return;
//	int mid = (s + e) / 2;
//	merge_sort(s, mid);
//	merge_sort(mid + 1, e);
//	merge(s, e);
//}
//
//int main()
//{
//	int n, m;
//	long long last = 0;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) scanf("%d %d", &a[i][0], &a[i][1]);
//	merge_sort(1, n);
//	for (int i = 1; i <= n; i++)
//	{
//		if (last > a[i][1])
//		{
//			last = a[i][1], dp[i] = dp[i - 1];
//		}
//		else
//		{
//			dp[i] = a[i][1] - last + dp[i - 1];
//			last = a[i][1];
//		}
//	}
//	printf("%lld", dp[n]);
//	return 0;
//}