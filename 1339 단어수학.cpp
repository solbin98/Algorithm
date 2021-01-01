//#include<cstdio>
//#include<iostream>
//#include<string.h>
//
//using namespace std;
//
//#define N 10
//char str[N + 1][N + 1];
//long long sums[26], sorted[26];
//
//void calc(int n)
//{
//	int r = 1;
//	int L = strlen(str[n]);
//	for (int i = L - 1; i >= 0; i--)
//	{
//		sums[str[n][i] - 'A'] += r;
//		r *= 10;
//	}
//}
//
//
//int main()
//{
//	int n, index = 0;
//	long long ans = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++) cin >> str[i];
//	for (int i = 0; i < n; i++) calc(i);
//	for (int i = 0; i < 26; i++)
//	{
//		long long max = -1, tmp;
//		for (int j = 0; j < 26; j++)
//		{
//			if (sums[j] > max) max = sums[j], tmp = j;
//		}
//		sorted[index++] = max;
//		sums[tmp] = -2;
//	}
//	for (int i = 0; i < index; i++)
//		ans += (9 - i) * sorted[i];
//	
//	printf("%d", ans);
//	return 0;
//}