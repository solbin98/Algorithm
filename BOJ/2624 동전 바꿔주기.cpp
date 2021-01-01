//#include<iostream>
//#include<cstdio>
//#define N 10000
//#define M 100
//using namespace std;
//
//int ar[M + 1], dp[N + 1][M + 1], cr[M + 1];
//int main()
//{
//	int T, n;
//	cin >> T;
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%d %d", &ar[i], &cr[i]), dp[0][i] = 1;
//	dp[0][0] = 1;
//	for (int j = 1; j <= n; j++)
//	{
//		for (int i = 1; i <= T; i++)
//		{
//			int a=0, b=0, c=0;	
//			a = dp[i][j - 1];
//			if (i - ar[j] >= 0) b = dp[i - ar[j]][j];
//			if (i - ar[j] * (cr[j] + 1) >= 0) c = dp[i - ar[j] * (cr[j] + 1)][j-1];	
//			dp[i][j] = a + b - c;
//		}
//	}
//	printf("%d", dp[T][n]);
//	return 0;
//}