//#include<iostream>
//#include<cstdio>
//#define N 1000
//using namespace std;
//int dp[N + 1][N + 1];
//int a[N + 1];
//
//int max(int a, int b)
//{
//	if (a > b) return a;
//	else return b;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
//	for (int j = 2; j <= n; j++)
//		for (int i = j - 1; i >= 1; i--)
//		{
//			if ((i) == (j - 1))
//			{
//				if (a[i] == a[j]) dp[i][j] = 1;
//			}
//			else
//			{
//				for (int k = i; k < j; k++)
//				{
//					if (a[k] == a[j])
//					{
//						dp[i][j] = max(dp[i][k - 1] + dp[k + 1][j - 1] + 1, dp[i][j]);
//					}
//				}
//				dp[i][j] = max(dp[i][j - 1], dp[i][j]);
//			}
//			
//		}
//
//	printf("%d", dp[1][n]);
//	return 0;
//}