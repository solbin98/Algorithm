//#include<iostream>
//#include<cstdio>
//using namespace std;
//long long min(long long a, long long b)
//{
//	if (a < b)	return a;
//	else return b;
//}
//int main()
//{
//	long long n, k, ans = 12987654321;
//	cin >> n;
//	cin >> k;
//	long long low = 1, high = n * n, mid;
//	while (low <= high)
//	{
//		mid = (low + high) / 2;
//		long long cnt = 0, left = 0, same = 0;
//		for (long long i = 1; i <= n; i++)
//		{
//			if ((mid % i) == 0) same++;
//			cnt += min(mid / i, n);
//		}
//
//		if (same != 0) same--;
//		left = cnt - same;
//		if (k >= left && k <= cnt)
//		{
//			if (mid < ans ) ans = mid;
//			high = mid - 1;
//		}
//		else if (k < left) high = mid - 1;
//		else low = mid + 1;
//	}
//	printf("%lld", ans);
//	return 0;
//}