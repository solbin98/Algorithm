//#include<iostream>
//#include<cstdio>
//#define N 414159
//using namespace std;
//long long arr[N + 1];
//int main()
//{
//	long long n, k;
//	cin >> n >> k;
//	long long sum = 0, tmp = n - 1, number = n;
//	if (k > n* (n - 1) / 2)
//	{
//		printf("-1");
//		return 0;
//	}
//	while (1)
//	{
//		if (sum + tmp < k) arr[n - tmp] = number, sum += tmp, tmp--, number--;
//		else
//		{
//			arr[n - tmp + (sum + tmp) - k] = number;
//			break;
//		}
//	}
//	long long num = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		if (arr[i] == 0) arr[i] = num++;
//	}
//
//	for (int i = 1; i <= n; i++) printf("%lld ", arr[i]);
//	return 0;
//}