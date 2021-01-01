//#include<iostream>
//#include<cstdio>
//#include<math.h>
//using namespace std;
//int main()
//{
//	long long a, b;
//	cin >> a >> b;
//	a++;
//	long long t1 = sqrt(a), t2 = sqrt(b);
//	double ia = t1, ib = t2;
//	double da = sqrt(a), db = sqrt(b);
//
//	if (ia != da) ia++;
//	if (ib - ia + 1 == 0) printf("0");
//	else
//	{
//		long long n1 = ib - ia + 1, n2 = b - a + 1;
//		long long t1 = n2, t2 = n1, r;
//		while (t1 % t2 != 0)
//		{
//			r = t1 % t2;
//			t1 = t2;
//			t2 = r;
//		}
//		printf("%lld/%lld", n1 / t2, n2 / t2);
//	}
//	return 0;
//}