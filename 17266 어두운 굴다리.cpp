//#include<iostream>
//#include<cstdio>
//#define N 100000
//using namespace std;
//int a[N + 1];
//int n, k;
//
//int calc(int len)
//{
//	a[0] = -len;
//	for (int i = 1; i <= k; i++)
//		if (a[i] - len > a[i - 1] + len) return -1;
//	if (a[k] + len < n) return -1;
//	return 1;
//}
//
//int main()
//{
//	cin >> n;
//	cin >> k;
//	for (int i = 1; i <= k; i++) scanf("%d", &a[i]);
//	int low = 1, high = n, mid;
//	int ans = 10000000;
//	while (low <= high)
//	{
//		mid = (low + high) / 2;
//		if (calc(mid) == 1)
//		{
//			if (ans > mid) ans = mid;
//			high = mid - 1;
//		}
//		else low = mid + 1;
//	}
//	printf("%d", ans);
//}