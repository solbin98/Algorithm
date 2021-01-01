//#include<iostream>
//#include<cstdio>
//#define N 100000
//#define MOD 1000000007
//using namespace std;
//string O = "UNIST";
//char str[N + 1][30];
//long long dp[N + 1][6];
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%s", str[i]);
//	for (int i = 0; i <= n; i++) dp[i][0] = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= 5; j++)
//		{
//			dp[i][j] += dp[i - 1][j];
//			dp[i][j] %= MOD;
//		}
//
//		int start = 6;
//		for (int j = 0; j < 5; j++)
//			if (O[j] == str[i][0])
//			{
//				start = j;
//				break;
//			}
//
//		int p = 1;
//		for (int j = start+1; j <= 5; j++)
//		{
//			if (O[j - 1] != str[i][j - (start + 1)] || j - p < 0) break;
//			dp[i][j] += dp[i - 1][j - p], dp[i][j] %= MOD;
//			p++;
//		}
//	}
//	printf("%lld", dp[n][5]);
//	return 0;
//}