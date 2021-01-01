//#include<iostream>
//#include<cstdio>
//#define N 100
//#define M 700
//using namespace std;
//int dp[N+1][M + 1];
//
//int main()
//{
//	int n, a, b;
//	cin >> n >> a >> b;
//	dp[0][0] = 1;
//	for (int i = 1; i <= M; i++)
//		for (int j = N; j >= 0; j--)
//			for (int k = M; k >= 0; k--)
//			{
//				if (j > (i / 10)) continue;
//				if(k - a >= 0) dp[j][k] |= dp[j][k - a];
//				if (k - b >= 0) dp[j][k] |= dp[j][k - b];
//				if (k % 2 == 0 && j >= 1) dp[j][k] |= dp[j-1][k / 2];
//				if (k < n + a && k >= n && dp[j][k] == 1)
//				{
//					printf("%d", i);
//					return 0;
//				}
//			}
//	return 0;
//}