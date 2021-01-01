//#include<iostream>
//#include<cstdio>
//#define N 100000
//#define MAX 1000000000000000000
//
//using namespace std;
//
//long long a[N + 1];
//long long n, m;
//
//int chk(long long num)
//{
//	long long sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		sum += num / a[i];
//		if (sum >= m) break;
//	}
//	return (sum >= m);
//}
//
//int main()
//{
//	long long ans = 0;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) scanf_s("%lld", &a[i]);
//	long long low = 1, high = MAX, mid;
//	while (low <= high)
//	{
//		mid = (low + high) / 2;
//		if (chk(mid) == 1) high = mid - 1, ans = mid;
//		else low = mid + 1;
//	}
//	cout << ans;
//}