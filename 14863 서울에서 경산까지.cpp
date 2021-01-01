//#include<iostream>
//#include<cstdio>
//#define N 105
//#define M 100000
//using namespace std;
//int a[N + 1][4], dp[N + 1][M + 1];
//int num, k, max = 0;
//bool v[N + 1][M + 1];
//
//int calc(int n, int m)
//{	
//	if (v[n][m] != 0) return dp[n][m];
//	v[n][m] = 1;
//	if (n == 0) return dp[n][m] = 0;
//	int ret = -1;
//	if (m - a[n][0] >= 0)
//	{
//		int tmp = calc(n - 1, m - a[n][0]);
//		if (tmp != -1)
//		{
//			if (tmp + a[n][1] > ret)
//				ret = a[n][1] + calc(n - 1, m - a[n][0]);
//		}
//	}
//	if (m - a[n][2] >= 0)
//	{
//		int tmp = calc(n - 1, m - a[n][2]);
//		if (tmp != -1)
//		{
//			if (tmp + a[n][3] > ret)
//			{
//				ret = a[n][3] + calc(n - 1, m - a[n][2]);
//			}
//		}
//	}
//	dp[n][m] = ret;
//	return ret;
//}
//int main()
//{
//	cin >> num >> k;
//	for (int i = 1; i <= num; i++) cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3];
//	calc(num, k);
//	printf("%d", calc(num, k));
//	return 0;
//}