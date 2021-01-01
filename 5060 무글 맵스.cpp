//#include<iostream>
//#include<cstdio>
//#define N 200
//#define INF 98765432100
//using namespace std;
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		int n, m;
//		double a[N + 1] = { 0 };
//		double dp[N + 1][N + 1] = { 0 }, val[N + 1][N + 1] = { 0 };
//		cin >> n >> m;
//
//		for (int i = 1; i <= n; i++) scanf("%lf", &a[i]);
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = i + 1; j <= n; j++)
//			{			
//				double num = 0;
//				for (int k = i; k <= j; k++)
//				{
//					double tmp = a[i] + (((a[j] - a[i]) * (((double)k - (double)i)) / ((double)j - (double)i)));
//					tmp -= a[k];
//					if (tmp < 0) tmp *= -1;
//					num += tmp;
//				}
//				val[i][j] = num;
//			}
//		}
//
//		for (int i = 0; i <= n; i++)
//			for (int j = 0; j <= n; j++)
//				dp[i][j] = INF;
//
//		dp[1][1] = 0, dp[2][2] = 0;
//		for (int i = 3; i <= n; i++)
//			for (int j = 2; j <= m && j <= i; j++)
//			{
//				double min = INF;
//				for (int k = 1; k < i; k++)
//					if (dp[k][j - 1] + val[k][i] < min) min = dp[k][j - 1] + val[k][i];
//				dp[i][j] = min;
//			}
//
//		printf("%.4llf\n", dp[n][m] / double(n));
//	}
//	return 0;
//}