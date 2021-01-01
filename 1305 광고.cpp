//#include<iostream>
//#include<cstdio>
//#define N 1000000
//using namespace std;
//char str[N + 1];
//int fail[N + 1];
//
//int main()
//{
//	int n;
//	cin >> n;
//	cin >> str;
//	for (int i = 1, j = 0; i < n; i++)
//	{
//		while (j > 0 && str[i] != str[j]) j = fail[j - 1];
//		if (str[i] == str[j]) fail[i] = ++j;
//	}
//	printf("%d\n", n - fail[n - 1]);
//	return 0;
//}