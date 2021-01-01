//#include<iostream>
//#include<cstdio>
//using namespace std;
//long long dp[15] = { 0,45 };
//long long sums(long long num)
//{
//	int tmp[20] = { 0 };
//	int idx = 0;
//	long long ret = 0, r = 1;
//
//	while (num != 0)
//	{
//		tmp[++idx] = num % 10;
//		num /= 10;
//	}
//
//	for (int i = 1; i <= idx; i++)
//	{
//		int tmp_sum = 0;
//		for (int j = i+1; j <= idx; j++) tmp_sum += tmp[j];
//		if (i == 1)
//		{
//			while(tmp[i] >= 0) ret += tmp_sum + tmp[i], tmp[i]--;
//		}
//		else if (i >= 2 && tmp[i] == 0)
//		{
//			r *= 10;
//			continue;
//		}
//		else
//		{
//			while (tmp[i] > 0)
//			{
//				ret += (tmp_sum + tmp[i] - 1) * r + dp[i - 1];
//				tmp[i]--;
//			}
//		}
//		r *= 10;
//	}
//	return ret; 
//}
//
//int main()
//{
//	long long l, u;
//	long long r = 1;
//	cin >> l >> u;
//	for (int i = 2; i <= 15; i++) r *= 10, dp[i] = (45)* r + (dp[i - 1]) * 9 + dp[i - 1];
//	long long sum1 = sums(l), sum2 = sums(u);
//	long long sum0 = 0;
//	while (l > 0)
//	{
//		sum0 += l % 10;
//		l /= 10;
//	}
//	printf("%lld", sum2 - sum1 + sum0);
//	return 0;
//}