//#include<iostream>
//#include<cstdio>
//using namespace std;
//typedef long long ll;
//
//ll gcd(ll a, ll b) {
//	ll r = a % b;
//	while (a % b != 0) {
//		r = a % b;
//		a = b;
//		b = r;
//	}
//	return b;
//}
//
//
//int main() {
//	ll n, m;
//	ll sum = 0;
//	cin >> n >> m;
//	sum = ((n+1) * (m+1)) * ((n+1) * (m+1) - 1) * ((n+1) * (m+1) - 2);	
//	sum /= 6;
//
//	sum -= (((n+1) * (n) * (n - 1)) / 6) * (m+1);
//    sum -= (((m+1) * (m) * (m - 1)) / 6) * (n+1);
//
//	for (ll i = 2; i <= n; i++) {
//		for (ll j = 2; j <= m; j++) {
//			ll tmp = gcd(i, j) - 1;
//			if (tmp < 0) continue;
//			sum -= 2*(n - i + 1) * (m - j + 1) * tmp;
//		}
//	}
//	
//	printf("%lld", sum);
//	return 0;
//}