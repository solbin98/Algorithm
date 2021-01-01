//#include<iostream>
//#include<cstdio>
//#define N 1000005
//using namespace std;
//typedef long long ll;
//ll a[N+1], sum[N + 1], cnt[1005];
//int main()
//{
//	ll n, m, ans = 0;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) scanf("%lld", &a[i]), sum[i] = sum[i - 1] + a[i];
//	for (int i = 1; i <= n+1; i++)
//	{		
//		ans += cnt[sum[i] % m];		
//		cnt[sum[i] % m]++;
//	}
//	printf("%lld", ans);
//	return 0;
//}