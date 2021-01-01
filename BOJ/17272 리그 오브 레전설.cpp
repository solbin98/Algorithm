//#include<iostream>
//#include<cstdio>
//#define N 102
//#define MOD 1000000007
//using namespace std;
//long long dp[N + 1];
//typedef struct
//{
//	long long met[N + 1][N + 1] = { 0 };
//	int len;
//}mets;
//mets metrix, result, I;
//
//mets mf(mets& met_a, mets& met_b)
//{
//	int len;
//	mets tmp;
//	len = met_a.len, tmp.len = len;
//	for (int i = 1; i <= len; i++)
//		for (int j = 1; j <= len; j++)
//			for (int k = 1; k <= len; k++)
//				tmp.met[i][j] += (met_a.met[i][k] * met_b.met[k][j])%MOD, tmp.met[i][j] %= MOD;
//	return tmp;
//}
//
//mets calc(long long n)
//{
//	if (n == 1) return metrix;
//	mets ans = I, tmp = metrix;
//	ans.len = metrix.len;
//	while (n>0)
//	{
//		if ((n % 2) == 1) ans = mf(ans, tmp);
//		tmp = mf(tmp, tmp);
//		n /= 2;
//	}
//	return ans;
//}
//
//int main()
//{
//	long long n, m;
//	cin >> n >> m;
//	metrix.len = m;
//
//	for (int i = 1; i <= m; i++) I.met[i][i] = 1;
//	metrix.met[1][1] = 1, metrix.met[1][m] = 1;
//	for (int i = 1; i < m; i++) metrix.met[i + 1][i] = 1;
//
//	if (n - m < 0)
//	{
//		printf("1");
//		return 0;
//	}
//	result = calc(n - m);
//
//	long long ans = 0;
//	dp[1] = 1, dp[0] = 1;
//	for (int i = 2; i <= m; i++)
//	{
//		if (i - m >= 0) dp[i] += dp[i - m];
//		dp[i] %= MOD;
//		dp[i] += dp[i - 1];
//		dp[i] %= MOD;
//	}
//
//	for (int i = 1; i <= m; i++) ans += (result.met[1][i] * dp[m-i+1])%MOD, ans %= MOD;
//	printf("%lld", ans);
//	return 0;
//}