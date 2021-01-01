//#include<iostream>
//#include<cstdio>
//#include<map>
//#define N 200000
//using namespace std;
//typedef long long ll;
//map<ll, ll> maps;
//int main()
//{
//	ll n, k, sums = 0;
//	ll ans = 0;
//	cin >> n >> k;
//	maps[0]++;
//	for (ll i = 1; i <= n; i++)
//	{
//		ll tmp;
//		scanf("%lld", &tmp);
//		sums += tmp;
//		ll SJ = sums - k * i;
//		ans += maps[SJ];
//		maps[SJ]++;
//	}
//	printf("%lld", ans);
//	return 0;
//}