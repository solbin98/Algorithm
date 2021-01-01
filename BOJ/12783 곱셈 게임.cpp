//#include<iostream>
//#include<cstdio>
//#define N 1000000
//#define INF 987654321
//using namespace std;
//
//long long dp[N + 1], card[N + 1], cnt[11] = { 0 };
//bool visit[N + 1];
//int n, k;
//
//long long solve(int num)
//{
//	if (dp[num] != INF || visit[num] == 1) return dp[num];	
//	visit[num] = 1;
//
//	int tmp = num;
//	int a[10] = { 0 };
//	bool chk = 0;
//
//	while (tmp != 0) a[tmp % 10] = 1, tmp /= 10;
//	for (int i = 0; i <= 9; i++)
//		if (cnt[i] < a[i])
//		{
//			chk = 1;
//			break;
//		}
//	if (chk == 0) return dp[num] = 0;
//	for (int i = 2; i * i <= num; i++)
//	{
//		if (num % i == 0)
//		{
//			if (dp[num] > solve(num / i) + solve(i) + 1) dp[num] = dp[num / i] + dp[i] + 1;	
//		}
//	}
//	return dp[num];
//}
//
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		for (int i = 0; i <= N; i++) dp[i] = INF, visit[i] = 0;
//		for (int i = 0; i <= 10; i++) cnt[i] = 0;
//
//		cin >> n;
//		for (int i = 1; i <= n; i++) cin >> card[i], cnt[card[i]]++;
//		cin >> k;
//		for (int i = 1; i <= k; i++)
//		{
//			long long tmp;
//			cin >> tmp;
//			long long ans = solve(tmp);
//			if (ans == INF) ans = -1;
//			printf("%lld\n", ans);
//		}
//	}
//	return 0;
//}