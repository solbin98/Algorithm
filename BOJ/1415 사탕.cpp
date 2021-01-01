//#include<iostream>
//#include<cstdio>
//#define N 50
//#define M 10000
//using namespace std;
//int arr[N + 1], num[N + 1], chk[M + 1], sum[N + 1];
//long long dp[N * M + 1], cnt[N + 1];
//bool is_prime[N * M + 1];
//int main()
//{
//	long long max_sum = 0;
//
//	for (int i = 2; i <= N * M; i++) is_prime[i] = 1;
//	for (int i = 2; i * i < N * M; i++)
//	{
//		if (is_prime[i] == 1)
//			for (int j = i + i; j <= N * M; j += i) is_prime[j] = 0;
//	}
//	int n, idx = 0;
//
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		int tmp;
//		cin >> tmp;
//		chk[tmp]++;
//	}
//	for (int i = 0; i <= M; i++)
//	{
//		if (chk[i] != 0) num[++idx] = i, cnt[idx] = chk[i], sum[idx] += sum[idx - 1] + i * chk[i];
//	}
//
//	dp[0] = 1;
//	for (int j = 1; j <= idx; j++)
//	{
//		for (int i = sum[j]; i >= 1; i--)
//		{
//			for (int k = 1; k <= cnt[j]; k++)
//			{
//				if (i - num[j] * k < 0) break;
//				dp[i] += dp[i - (num[j]) * k];
//			}
//		}
//	}
//
//	long long ans = 0;
//	for (int i = 2; i <= sum[idx]; i++)
//		if (is_prime[i]) ans += dp[i];
//
//	if (num[1] == 0) ans *= (cnt[1] + 1);
//	printf("%lld", ans);
//	return 0;
//}