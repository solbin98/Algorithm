//#include<iostream>
//#include<cstdio>
//
//using namespace std;
//int main()
//{
//	int a, b, diff = 0;
//	cin >> a >> b;
//	diff = a - b;
//
//	int ttmp = diff;
//	if (ttmp < 0) ttmp *= -1;
//	while (ttmp != 0)
//	{
//		if (ttmp % 2 == 0) ttmp /= 2;
//		else break;
//	}
//	diff = ttmp;
//	for (int i = 1; i <= 5; i++)
//	{
//		int t1, t2, tmp = 0;
//		cin >> t1 >> t2;
//		tmp = t1 - t2;
//		if (tmp < 0) tmp *= -1;
//		if (t1 > t2)
//		{
//			if (a <= b) printf("N\n");
//			else
//			{
//				if (tmp % diff == 0) printf("Y\n");
//				else printf("N\n");
//			}
//		}
//		else
//		{
//			if (a > b) printf("N\n");
//			else
//			{
//				if (diff == 0)
//				{
//					if (tmp == 0) printf("Y\n");
//					else printf("N\n");
//				}
//				else
//				{
//					if (tmp == 0) printf("N\n");
//					else if (tmp % diff == 0) printf("Y\n");
//					else printf("N\n");
//				}
//			}
//		}
//	}
//	return 0;
//}