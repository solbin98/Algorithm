//#include<iostream>
//#include<cstdio>
//#define MOD 1000000007
//#define N 1000
//#define R 50
//using namespace std;
//long long dp[N + 1][R + 1];
//bool visit[N + 1][R + 1];
//long long pows(long long x, long long r)
//{
//	if (r == 0) return 1;
//	if (visit[x][r] == 1) return dp[x][r];
//	visit[x][r] = 1;
//
//	long long tmp=1;
//	if (r % 2 == 0)
//	{
//		tmp = pows(x, r / 2);
//		tmp = (tmp * tmp) % MOD;
//	}
//	else
//	{
//		tmp = pows(x, r - 1) * x;
//		tmp %= MOD;
//	}
//	return dp[x][r] = tmp;
//}
//
//int main()
//{
//	long long n, sum = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		long long x, k, idx = 0;
//		long long tmp[100] = { 0 };
//		scanf("%lld %lld", &x, &k);
//		while (k != 0)
//		{
//			tmp[++idx] = k % 2;
//			k /= 2;
//		}
//		for (int i = 1; i <= idx; i++)
//			if (tmp[i] != 0) sum += pows(x, i - 1), sum %= MOD;
//	}
//	printf("%lld", sum);
//	return 0;
//}