//#include<iostream>
//#include<cstdio>
//#define N 500
//using namespace std;
//int arr[N + 1];
//int main()
//{
//	int n, m, k, ans = 0, alpha = 0;
//	cin >> n >> m >> k;
//
//	if (n % m != 0) alpha++;
//	if (k * m < n) ans = -1;
//	if (m + k > n + 1) ans = -1;
//	if (n > m*k) ans = -1;
//
//	int num = 1, x = 0;
//	for (int i = 0; i <= n; i++)
//	{
//		int beta = 0;
//		if ((n - m - i) % m != 0) beta++;
//		if (n - m - i == 0) beta = 0;
//
//		if (i + ((n - m - i) / m) + beta + 1 == k)
//		{
//			x = i;
//			break;
//		}
//	}
//
//	for (int i = 1; i <= x; i++) arr[i] = n - i + 1;
//	for (int i = n - m + 1; i >= -500; i -= m)
//		for (int j = i; j <= i + m - 1; j++)
//		{
//			if (j <= 0) continue;
//			if (arr[j] == 0) arr[j] = num++;
//		}
//
//	if (ans == -1) printf("-1");
//	else for (int i = 1; i <= n; i++) printf("%d ", arr[i]);
//	
//	return 0;
//}