//#include<iostream>
//#include<cstdio>
//#include<string.h>
//using namespace std;
//
//int main()
//{
//	char a[40], b[40];
//	cin >> a;
//	cin >> b;
//	int len_a = strlen(a), len_b = strlen(b);
//	long long num1=0, num2=0;
//	long long r1 = 1, r2 = 1;
//	for (int i = len_a - 1; i >= 0; i--) num1 += (a[i] - '0') * r1, r1 *= 2;
//	for (int i = len_b - 1; i >= 0; i--) num2 += (b[i] - '0') * r2, r2 *= 2;
//	int tmp[100] = { 0 };
//	int idx = 0;
//	num1 *= num2;
//	while (num1 != 0) tmp[++idx] = num1 % 2, num1 /= 2;
//	for (int i = idx; i >= 1; i--) printf("%d", tmp[i]);
//	return 0;
//}