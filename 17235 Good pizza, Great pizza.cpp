//#include<iostream>
//#include<cstdio>
//#include<math.h>
//using namespace std;
//typedef long long ll;
//
//ll abss(ll a)
//{
//	if (a < 0) return -a;
//	else return a;
//}
//
//int main()
//{
//	ll max1 = -1e10, min1 = 1e10;
//	ll max2 = -1e10, min2 = 1e10;
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		ll y, x;
//		scanf("%lld %lld", &x, &y);
//		if (max1 < y - x) max1 = y - x;
//		if (min1 > y - x) min1 = y - x;
//		if (max2 < y + x) max2 = y + x;
//		if (min2 > y + x) min2 = y + x;
//	}
//
//	ll val = 0;
//	if (abss(max1 - min1) > abss(max2 - min2)) val = (max1 - min1);
//	else val = (max2 - min2);
//	
//	if (val % 2 == 0) printf("%lld", 2*(val/2)*(val/2));
//	else printf("%lld.5", ((val-1)/2)* ((val - 1) / 2)*2 + 2*(((val - 1) / 2)));
//	return 0;
//}