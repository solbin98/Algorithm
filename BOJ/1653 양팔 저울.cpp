//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#define INF 1000231231
//#define N 10
//#define M 200
//#define S 400
//#define max 1024
//using namespace std;
//typedef int ll;
//ll dp[N + 1][max + 1][S + 1], a[N + 1];
//ll n, k;
//
//ll calc(ll k)
//{
//	if (k <= 5) return -(6 - k);
//	else return (k - 5);
//}
//
//ll solve(ll idx, ll bit, ll sum)
//{	
//	if (idx == 11 && sum == M) return 1;
//	else if (idx == 11 && sum != M) return 0;
//	if (dp[idx][bit][sum] != -1) return dp[idx][bit][sum];
//
//	ll r = 1;
//	ll& ref = dp[idx][bit][sum];
//	ref = solve(idx + 1, bit, sum);
//	for (ll i = 0; i < n; i++)
//	{
//		if ((bit & r) == 0)
//		{
//			ref += solve(idx + 1, bit | r, sum + a[i+1] * calc(idx));
//			if (ref > INF) ref = INF;
//		}
//		r *= 2;
//	}
//
//	return ref;
//}
//
//int main()
//{
//	for (int i = 0; i <= N; i++)
//		for (int j = 0; j < 1024; j++)
//			for (int k = 0; k <= S; k++)
//				dp[i][j][k] = -1;
//
//	cin >> n;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//	sort(a + 1, a + n + 1);
//	solve(1, 0, M);
//	cin >> k;	
//	k++;
//	ll bit = 0, sum = 0;
//	ll ans[N + 1] = { 0 }, idx = 0;
//	if (solve(1, 0, M) < k) k = solve(1, 0, M);
//	for (ll i = 1; i <= 10; i++)
//	{
//		ll r = 1;
//		bool flag = 0;		
//		if (solve(i+1, bit, M + sum) >= k) continue;
//		k -= solve(i + 1, bit, M + sum);
//		for (int j = 0; j < n; j++)
//		{
//			if (flag == 1) break;
//			if ((bit & r) == 0)
//			{	
//				if (solve(i + 1, bit + r, M + (sum + a[j + 1] * calc(i))) >= k)
//				{
//					flag = 1;
//					ans[i] = a[j + 1];
//					bit += r;
//					sum += a[j + 1] * calc(i);
//					break;
//				}
//				else k -= solve(i + 1, bit + r, M + (sum + a[j + 1] * calc(i)));
//			}
//			r *= 2;
//		}
//	}
//	ll chk = 0;
//	for (ll i = 1; i <= 10; i++)
//	{		
//		if (ans[i] != 0) chk = 1;
//		if (chk != 0) printf("%lld", ans[i]);
//	}
//}