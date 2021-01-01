//#include<iostream>
//#include<cstdio>
//#define N 100
//using namespace std;
//int dp[N + 1][N + 1][2];
//
//int main()
//{
//	dp[0][0][0] = 1;
//	dp[1][0][0] = 1, dp[1][0][1] = 1;
//
//	for (int i = 2; i <= N; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			dp[i][j][0] = dp[i - 1][j][0] + dp[i - 1][j][1];
//			dp[i][j][1] = dp[i - 1][j - 1][1] + dp[i - 1][j][0];
//			//printf("%d ", dp[i][j][0] + dp[i][j][1]);
//		}
//		//printf("\n");
//	}
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		int a=0, b=0;
//		cin >> a >> b;
//		printf("%d\n", dp[a][b][0] + dp[a][b][1]);
//	}
//	return 0;
//}