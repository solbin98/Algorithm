//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<math.h>
//
//#define N 512
//#define INF 987654321
//
//using namespace std;
//double dp[N + 1][N + 1], d[N + 1][N + 1];
//pair < double, double > arr[N + 1];
//int n;
//
//double min(double a, double b)
//{
//	if (a < b) return a;
//	else return b;
//}
//
//double max(double a, double b)
//{
//	if (a > b) return a;
//	else return b;
//}
//
//double dist(double x1, double y1, double x2, double y2)
//{
//	return sqrt((x1 - x2) * (x1 - x2) + (y2 - y1) * (y2 - y1));
//}
//
//double calc(int a, int b)
//{
//	if (dp[a][b] != INF) return dp[a][b];		
//	int next = max(a, b) + 1;
//	if (a == n - 1 || b == n - 1) dp[a][b] = d[a][n] + d[b][n];
//	else dp[a][b] = min(d[a][next] + calc(next, b), d[b][next] + calc(a, next));
//	return dp[a][b];
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		cin >> n;
//		for (int i = 0; i <= N; i++)
//			for (int j = 0; j <= N; j++)
//				dp[i][j] = INF;
//
//		for (int i = 1; i <= n; i++) dp[n][i] = 0, dp[i][n] = 0;
//		for (int i = 1; i <= n; i++) scanf("%lf %lf", &arr[i].first, &arr[i].second);
//		sort(arr + 1, arr + 1 + n);
//
//		for (int i = 1; i <= n; i++)
//			for (int j = i + 1; j <= n; j++)
//				d[i][j] = dist(arr[i].first, arr[i].second, arr[j].first, arr[j].second), d[j][i] = d[i][j];
//
//		printf("%lf\n", calc(1, 1));
//	}
//	return 0;
//}