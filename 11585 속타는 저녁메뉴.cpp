//#include<iostream>
//#include<cstdio>
//#define N 2100000
//using namespace std;
//char str1[N + 1], str2[N + 1];
//int fail[N + 1];
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) scanf(" %c ", &str1[i]);
//	for (int i = 0; i < n; i++) scanf(" %c ", &str2[i]);
//	for (int i = n; i < 2 * n; i++) str2[i] = str2[i - n];
//
//	for (int i = 1, j = 0; i < n; i++)
//	{
//		while (j > 0 && str1[i] != str1[j]) j = fail[j - 1];
//		if (str1[i] == str1[j]) fail[i] = ++j;
//	}
//	
//	int cnts = 0;
//	for (int i = 0, j = 0; i < 2 * n-1; i++)
//	{
//		while (j > 0 && str2[i] != str1[j]) j = fail[j - 1];
//		if (str2[i] == str1[j])
//		{
//			if (j == n - 1) cnts++, j = fail[j];
//			else j++;
//		}
//	}
//
//	int a = n, b = cnts, r = 0;
//	while (a % b != 0)
//	{
//		r = a % b;
//		a = b;
//		b = r;
//	}
//	printf("%d/%d", cnts/ b, n / b);
//	return 0;
//}