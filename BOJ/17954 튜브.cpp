//#include<iostream>
//#include<cstdio>
//#define N 30005
//using namespace std;
//int a[N + 1][2], arr[N + 1];
//int main()
//{
//	long long n, sum = 0, ans = 0;
//	cin >> n;
//
//	if (n >= 2)
//	{
//		a[1][0] = 2 * n, a[n][0] = 2 * n - 1;
//		a[1][1] = 2 * n - 2, a[n][1] = 2 * n - 3;
//		for (int i = 1; i <= n - 2; i++) a[n - i][1] = 2 * n - (3 + i);
//		for (int i = 1; i <= n - 2; i++) a[i + 1][0] = i;
//	}
//	else
//	{
//		a[1][0] = 2;
//		a[1][1] = 1;
//	}
//	for (int i = n; i >= 1; i--) arr[n - i + 1] = a[i][1];
//	for (int i = n; i >= 1; i--) arr[n + (n - i) + 1] = a[i][0];
//	for (int i = 1; i <= 2 * n; i++) sum += arr[i];
//	for (int i = 1; i <= 2 * n; i++)
//	{	
//		sum -= arr[i];
//		ans += sum * i;
//	}
//	printf("%lld\n", ans);
//	for (int i = 0; i <= 1; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			printf("%lld ", a[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}