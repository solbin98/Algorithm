//#include<iostream>
//#include<cstdio>
//#include<math.h>
//#include<algorithm>
//#define N 2000
//#define INF 987654321
//using namespace std;
//double pos[N + 1], dp[N + 1][N + 1];
//
//double min(double a, double b)
//{
//	if (a < b) return a;
//	else return b;
//}
//
//double abs(double a, double b)
//{
//	double ret = a - b;
//	if (ret < 0) ret *= -1;
//	return ret;
//}
//
//int main()
//{
//	int n;
//	double L, W, D, nn;
//
//	for (int i = 0; i <= N; i++)
//		for (int j = 0; j <= N; j++)
//			dp[i][j] = INF;
//
//	dp[0][0] = 0;
//	cin >> n;
//	cin >> L >> W;
//	for (int i = 1; i <= n; i++)  scanf("%lf", &pos[i]);
//	sort(pos + 1, pos + n + 1);	
//	nn = n;
//	D = L / ((nn / 2) - 1); //D는 각 나무 사이의 거리
//
//	for (int i = 0; i <= n; i++)
//		for (int j = 0; j <= n; j++)
//		{
//			double dist;
//			if (i == 0 && j == 0) continue;
//			if (i - 1 >= 0)
//			{
//				dist = abs(pos[i + j], (i - 1) * D);
//				dp[i][j] = min(dp[i][j], dp[i - 1][j] + dist);
//			}
//			if (j - 1 >= 0)
//			{
//				double x1 = pos[i + j], y1 = 0;
//				double x2 = D * (j - 1), y2 = W;
//				dist = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
//				dp[i][j] = min(dp[i][j], dp[i][j - 1] + dist);
//			}
//		}
//
//	printf("%.10lf", dp[n / 2][n / 2]);
//	return 0;
//}