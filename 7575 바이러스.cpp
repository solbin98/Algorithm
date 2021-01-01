//#include<iostream>
//#include<cstdio>
//#define MOD 32425
//#define N 1000
//#define INF 987654321
//using namespace std;
//long long pows[N + 1];
//long long a[N + 1];
//int cnt[MOD + 1];
//
//long long calc_mod(long long num)
//{
//	if (num < 0)
//	{
//		int tmp = num / MOD;
//		if (tmp < 0) tmp *= -1;
//		num += (tmp + 1) * MOD;
//	}
//	return num % MOD;
//}
//
//int main()
//{
//	for (int i = 0; i <= MOD; i++) cnt[i] = INF;
//	long long now = 1;
//	for (int i = 0; i <= N; i++) pows[i] = now, now *= 2, now %= MOD;
//
//	int n, k;
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		long long tmp[MOD + 1] = { 0 };
//		long long sum = 0, m;		
//		cin >> m;
//
//		if (k > m)
//		{
//			printf("NO");
//			return 0;
//		}
//
//		for (int j = 1; j <= m; j++) scanf("%lld", &a[j]);
//		for (int j = 1; j <= k; j++)
//		{
//			sum += pows[k - j] * a[j];
//			sum %= MOD;
//		}
//		tmp[sum]++;
//		for (int j = k + 1; j <= m; j++)
//		{
//			sum = calc_mod(sum - (pows[k - 1] * a[j - k]))%MOD;	
//			sum = (sum * 2) % MOD;
//			sum += a[j];
//			sum %= MOD;			
//			tmp[sum]++;
//		}
//		sum = 0;
//		for (int j = m; j > m-k; j--)
//		{
//			sum += pows[k - (m-(j-1))] * a[j];
//			sum %= MOD;
//		}
//		tmp[sum]++;
//		for (int j = m - k; j >= 1; j--)
//		{
//			sum = calc_mod(sum - (pows[k - 1] * a[j + k])) % MOD;
//			sum = (sum * 2) % MOD;
//			sum += a[j];
//			sum %= MOD;
//			tmp[sum]++;
//		}
//		for (int j = 1; j <= MOD; j++) if (cnt[j] > tmp[j]) cnt[j] = tmp[j];
//	}
//
//	for (int i = 0; i <= MOD; i++)
//	{
//		if (cnt[i] != INF && cnt[i] >= 1)
//		{
//			printf("YES");
//			return 0;
//		}
//	}
//	printf("NO");
//	return 0;
//}