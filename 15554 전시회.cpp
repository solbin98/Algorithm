//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#define N 500000
//using namespace std;
//typedef long long ll;
//pair<ll, ll> info[N + 1];
//ll sum[N + 1], dp[N + 1], max_dp[N + 1][2];
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%lld %lld", &info[i].first, &info[i].second);
//	sort(info + 1, info + n + 1);
//	for (int i = 1; i <= n; i++) sum[i] = sum[i - 1] + info[i].second;
//	for (int i = 1; i < n; i++) dp[i] = dp[i - 1] + (info[i + 1].first - info[i].first) - info[i].second;
//	for (int i = 1; i <= n; i++)
//	{
//		if (dp[i] > max_dp[i - 1][0]) max_dp[i][0] = dp[i], max_dp[i][1] = i;
//		else max_dp[i][0] = max_dp[i - 1][0], max_dp[i][1] = max_dp[i - 1][1];
//	}
//	ll ans = sum[1];
//	for (int i = 2; i <= n; i++)
//	{
//		if (ans < sum[i] - sum[max_dp[i - 1][1]] - (info[i].first - info[max_dp[i - 1][1]+1].first))
//			ans = sum[i] - sum[max_dp[i - 1][1]] - (info[i].first - info[max_dp[i - 1][1]+1].first);
//	}
//	printf("%lld", ans);
//	return 0;
//}