//#include<iostream>
//#include<cstdio>
//using namespace std;
//typedef long long ll;
//
//ll get_gcd(ll i, ll j)
//{
//	int a = i, b = j, r = i % j;
//	while (r != 0)
//	{
//		a = b;
//		b = r;
//		r = a % b;
//	}
//	return b;
//}
//
//int main()
//{
//	ll gcd, lcm;
//	cin >> gcd >> lcm;
//	ll divided = (lcm) / (gcd);
//	ll ans = 2e15, ans_idx1 = 0, ans_idx2 = 0;
//
//	for (ll i = 1; i*i <= divided; i++)
//	{
//		if (divided % i == 0)
//		{			
//			ll j = (divided / i);
//			if (get_gcd(i, j) != 1) continue;
//			if (ans > gcd * i + gcd * j)
//			{		
//				ans = gcd * i + gcd * j, ans_idx1 = i, ans_idx2 = j;
//			}
//		}
//	}
//
//	if (ans_idx1 > ans_idx2)
//	{
//		int tmp = ans_idx1;
//		ans_idx1 = ans_idx2;
//		ans_idx2 = tmp;
//	}
//
//	printf("%lld %lld", gcd*ans_idx1, gcd*ans_idx2);
//}