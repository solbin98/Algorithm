//#include<iostream>
//#include<cstdio>
//#include<string.h>
//#define N 50
//#define INF 987654321000000
//
//using namespace std;
//long long chk[N + 1][N + 1];
//char str[N + 1][N + 1];
//bool visit[N + 1], no_zero[N + 1];
//int main()
//{
//	int n, max_len = 0;
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> str[i];
//		no_zero[str[i][0] - 'A' + 1] = 1;
//		if (strlen(str[i]) > max_len) max_len = strlen(str[i]);
//	}
//
//	for (int i=0; i < n; i++)
//	{
//		int len = strlen(str[i]);
//		if (len != max_len)
//		{
//			for (int j = len; j >= 0; j--)
//			{
//				str[i][j + (max_len - len)] = str[i][j];
//				str[i][j] = '0';
//			}
//		}
//	}
//
//	for (int j = 0; j < max_len; j++)
//		for (int i = 0; i < n; i++)
//			if (str[i][j] >= 'A' && str[i][j] <= 'Z')
//				chk[j+1][str[i][j] - 'A' + 1]++;
//
//	long long ans = 0;
//	long long min = INF, min_idx = 0;
//
//	for (int alpha = 1; alpha <= 10; alpha++)
//	{
//		if (no_zero[alpha] == 1) continue;
//		long long sum = 0, r = 1;
//		for (int i = max_len; i >= 1; i--)
//		{
//			sum += chk[i][alpha] * r;
//			r *= 10;
//		}
//		if (min > sum) min = sum, min_idx = alpha;
//	}
//	visit[min_idx] = 1;
//
//	for (long long num = 9; num >= 1; num--)
//	{
//		long long max = 0, max_idx = 0;
//		for (int alpha = 1; alpha <= 10; alpha++)
//		{	
//			if (visit[alpha] == 1) continue;
//			long long sum = 0, r = 1;
//			for (int i = max_len; i >= 1; i--)
//			{
//				sum += num * chk[i][alpha] * r;
//				r *= 10;
//			}
//			if (max < sum) max = sum, max_idx = alpha;
//		}
//		visit[max_idx] = 1;
//		ans += max;
//	}
//	printf("%lld", ans);
//	return 0;
//}