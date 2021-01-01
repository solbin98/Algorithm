//#include<iostream>
//#include<cstdio>
//using namespace std;
//int main()
//{
//	long long a, b, c, d;
//	cin >> a >> b >> c >> d;
//	if (c * 2 <= d) printf("%lld", a * c + b * c);
//	else
//	{
//		int max = 0, min = 0;
//
//		if (a > b) max = a, min = b;
//		else max = b, min = a;
//
//		if (c > d)
//		{
//			if ((max - min) % 2 == 0) printf("%lld", (max - min)*d + (min * d));
//			else printf("%lld", (((max - min) / 2) *2*d) + (min * d) + c);
//		}
//		else printf("%lld", ((max - min) * c) + min * d);
//	}
//	return 0;
//}