//#include<iostream>
//#include<cstdio>
//#define N 1000000
//using namespace std;
//int a[N + 1];
//int n, m;
//
//int counting(int num)
//{
//	int cnt = 0;
//	for (int i = 1; i <= n; i++) cnt += a[i] / num;
//	return cnt;
//}
//
//int main()
//{
//	cin >> m >> n;
//	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
//	int ans = 0;
//	int low = 1, high = 1000000000, mid;
//	while (low <= high)
//	{
//		mid = (low + high) / 2;
//		int tmp = counting(mid);
//		if (tmp >= m)
//		{
//			if (ans < mid) ans = mid;
//			low = mid + 1;
//		}
//		else high = mid - 1;
//	}
//	printf("%d", ans);
//	return 0;
//}