//#include<iostream>
//#include<cstdio>
//#define N 500000
//using namespace std;
//long long a[N + 1], b[N + 1];
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%lld", &a[i]);
//	for (int i = 1; i <= n; i++) scanf("%lld", &b[i]);
//
//	for (int i = 1; i <= n; i++)
//	{
//		int s = i, e = n, mid;
//		int find = 0;
//		while (s <= e)
//		{
//			mid = (s + e) / 2;
//			if (b[mid] <= a[i])
//			{
//				find = mid;
//				s = mid + 1;
//			}
//			else e = mid - 1;
//		}
//		printf("%lld ",find - i);
//	}
//	return 0;
//}