//#include<iostream>
//#include<cstdio>
//#define N 1000000
//#define M 500000
//using namespace std;
//char a[N + 1];
//char str[M + 1][20];
//
//int main()
//{
//	cin >> a;
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%s", str[i]);
//
//	int s = 0, e = -1;
//	for (int i = 1; i <= n; i++)
//	{
//		long long val = 0;
//		if (str[i][0] == 'c') val = 2;
//		else if (str[i][0] == 'i') val = 8;
//		else if (str[i][0] == 'l') val = 16;
//		s = e + 1;
//		e += val;
//
//		long long r = 1, number = 0;
//		for (int j = e; j >= s; j--)
//		{
//			if ((a[j] - '0') <= 9 && (a[j] - '0') >= 0) number += (a[j] - '0') * r;
//			else if (a[j] == 'a') number += 10 * r;
//			else if (a[j] == 'b') number += 11 * r;
//			else if (a[j] == 'c') number += 12 * r;
//			else if (a[j] == 'd') number += 13 * r;
//			else if (a[j] == 'e') number += 14 * r;
//			else number += 15 * r;
//			r *= 16;
//		}
//		printf("%lld ", number);
//	}
//	return 0;
//}