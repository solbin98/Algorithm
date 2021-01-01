//#include<iostream>
//#include<cstdio>
//#define N 100000
//#define INF 987654321
//using namespace std;
//long long a[N + 1][2], tmp[N + 1][2];
//void merge(const int s, const int e)
//{
//	int mid = (s + e) / 2;
//	int i1 = s, i2 = mid + 1, index = 1;
//	while (i1 <= mid && i2 <= e)
//	{
//		if (a[i1][1] < a[i2][1]) tmp[index][0] = a[i1][0], tmp[index++][1] = a[i1++][1];
//		else if (a[i1][1] == a[i2][1])
//		{
//			if(a[i1][0] < a[i2][0]) tmp[index][0] = a[i1][0], tmp[index++][1] = a[i1++][1];
//			else tmp[index][0] = a[i2][0], tmp[index++][1] = a[i2++][1];
//		}
//		else tmp[index][0] = a[i2][0], tmp[index++][1] = a[i2++][1];
//	}
//
//	for (int i = i1; i <= mid; i++) tmp[index][0] = a[i][0], tmp[index++][1] = a[i][1];
//	for (int i = i2; i <= e; i++) tmp[index][0] = a[i][0], tmp[index++][1] = a[i][1];
//	for (int i = s; i <= e; i++) a[i][0] = tmp[i - s + 1][0], a[i][1] = tmp[i - s + 1][1];
//}
//
//void merge_sort(const int s, const int e)
//{
//	int mid = (s + e) / 2;
//	if (s >= e) return;
//	merge_sort(s, mid);
//	merge_sort(mid + 1, e);
//	merge(s, e);
//}
//
//int chk(long long num, long long n, long long m)
//{
//	long long sum = 0;
//	long long max_price = 0;
//	for (int i = n; i >= 1; i--)
//	{
//		if (max_price > a[i][1])
//		{
//			sum += a[i][0];
//			continue;
//		}
//		if (num - a[i][1] >= 0)
//		{
//			num -= a[i][1], sum += a[i][0];
//			if (max_price < a[i][1]) max_price = a[i][1];
//		}
//	}
//	if (sum >= m) return 1;
//	else return 0;
//}
//
//int main()
//{
//	long long n, m;
//	long long ans = 3147483647;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) scanf("%d %d", &a[i][0], &a[i][1]);
//	merge_sort(1, n);
//
//	long long low = 0, high = 2147483647, mid;
//	while (low <= high)
//	{
//		mid = (low + high) / 2;	
//		if (chk(mid, n, m) == 1)
//		{
//			if (ans > mid) ans = mid;
//			high = mid - 1;
//		}
//		else low = mid + 1;
//	}
//	if (ans == 3147483647) ans = -1;
//	printf("%lld", ans);
//	return 0;
//}