//#include<iostream>
//#include<cstdio>
//#define N 100000
//using namespace std;
//int prime[N + 1], num[N + 1];
//int cnt_up[N + 1], cnt_down[N + 1], cnt_m[N + 1];
//
//int main()
//{
//	for (int i = 2; i * i <= N; i++)
//	{
//		if (prime[i] != 0) continue;
//		for (int j = i + i; j <= N; j += i)
//		{
//			if(prime[j] == 0) prime[j] = i;
//		}
//	}
//
//	for (int i = 1; i <= N; i++)
//		if (prime[i] == 0) prime[i] = i;
//
//	long long s, f, m;
//	cin >> s >> f >> m;
//
//	for (long long i = 2; i <= m; i++)
//	{
//		if (prime[i] != i) continue;
//		long long r = i, sum_up = 0, sum_down = 0;
//		while (r <= s+f)
//		{
//			sum_up += ((s + f) / r) - (s / r);
//			sum_down += (f / r);
//			r *= i;
//		}
//
//		cnt_up[i] = sum_up, cnt_down[i] = sum_down;
//		cnt_up[i] -= cnt_down[i];
//	}
//
//	for (int i = m; i >= 1; i--)
//	{
//		long long now = i, idx = 0;
//		bool chk = 0;
//
//		while (1)
//		{			
//			if (num[idx] != prime[now]) num[++idx] = prime[now];
//			cnt_m[prime[now]]++;			
//			if (now == prime[now]) break;
//			now /= prime[now];
//		}
//
//		for (int j = 1; j <= idx; j++)
//		{
//			if (cnt_up[num[j]] - cnt_m[num[j]] < 0) chk = 1;
//			cnt_m[num[j]] = 0;
//		}
//
//		if (chk == 0)
//		{
//			printf("%d\n", i);
//			return 0;
//		}
//	}
//
//	printf("1");
//	return 0;
//}