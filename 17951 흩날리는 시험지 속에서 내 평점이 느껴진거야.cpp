//#include<iostream>
//#include<cstdio>
//#define N 100000
//using namespace std;
//int a[N + 1];
//int n, k, tmp, ans = 0;
//
//bool is_possible(int max)
//{
//	int cnt = 0, sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//	    sum += a[i];
//		if(sum >= max)
//		{
//			sum = 0;
//			cnt++;
//			continue;
//		}
//	}
//
//	if (cnt >= k)
//	{
//		if (cnt == k && max > ans) ans = max;
//		return true;
//	}
//	else return false;
//}
//
//int main()
//{
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
//	int low = 1, high = 3000000, mid;
//	while (low <= high)
//	{
//	
//		mid = (low + high) / 2;
//		if (is_possible(mid) == true) low = mid + 1;
//		else high = mid - 1;
//	}
//	printf("%d", ans);
//	return 0;
//}