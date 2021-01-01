//#include<iostream>
//#include<cstdio>
//#define N 200
//#define MOD 1000007
//using namespace std;
//long long dp[N + 1][N + 1] = { 0 };
//int main()
//{
//	int w, h, y, x;
//	cin >> w >> h;
//	cin >> y >> x;
//
//	dp[1][1] = 1;
//	for (int i = 1; i <= w; i++)
//		for (int j = 1; j <= h; j++)
//		{
//			if (i == 1 && j == 1) continue;
//			dp[i][j] = dp[i - 1][j] + dp[i][j - 1], dp[i][j] %= MOD;
//		}
//	
//	printf("%lld", (dp[y][x] * dp[w - y+1][h - x+1])%MOD);
//	return 0;
//}