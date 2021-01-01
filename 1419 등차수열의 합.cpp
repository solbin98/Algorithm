//#include<iostream>
//#include<cstdio>
//using namespace std;
//int main()
//{
//	long long l, r, k;
//	long long t1, t2;
//
//	cin >> l >> r >> k;
//	if (k == 2) t1 = r - 2, t2 = l - 3;
//	else if (k == 3) t1 = (r / 3) - 1, t2 = ((l - 1) / 3) - 1;
//	else if (k == 4)
//	{
//		if (r <= 13 && r >= 10) t1 = 1;
//		if (l - 1 <= 13 && l - 1 >= 10) t2 = 1;
//		if (r < 10) t1 = 0;
//		if (l - 1 < 10) t2 = 0;
//		if (r >= 14) t1 = (r / 2) - 5;
//		if (l - 1 >= 14) t2 = ((l - 1) / 2) - 5;
//	}
//	else t1 = (r / 5) - 2, t2 = ((l - 1) / 5) - 2;
//
//	
//	if (t1 < 0) t1 = 0;
//	if (t2 < 0) t2 = 0;
//	printf("%lld", t1 - t2);
//	return 0;
//}