//#include<iostream>
//#include<cstdio>
//#include<math.h>
//
//#define N 500
//#define INF 987654321
//using namespace std;
//
//double a[N + 1];
//double solve[N + 1][N + 1];
//double sum[N + 1];
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		scanf_s("%lf", &a[i]);
//		sum[i] = sum[i - 1] + a[i];
//	}
//	
//	double avg = 0, ans = INF;
//	for (int j = 1; j <= n; j++)
//	{
//		for (int i = 1; i <= j; i++)
//		{
//			if (j - i + 1 >= m)
//			{
//				double tmp = 0;
//				avg = (sum[j] - sum[i - 1]) / ((double)j - (double)i + (double)1);
//				for (int k = i; k <= j; k++) tmp += (a[k] - avg) * (a[k] - avg);
//				tmp /= (double)j - (double)i + (double)1;
//				tmp = sqrt(tmp);
//				if (tmp < ans) ans = tmp;
//			}
//		}
//	}
//
//	printf("%.11lf", ans);
//	return 0;
//}