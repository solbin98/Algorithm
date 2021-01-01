//#include<iostream>
//#include<cstdio>
//#define N 11000000
//using namespace std;	
//int prime[N+1] = { 0 };
//int main()
//{
//	long long a, b, n, ans = 0;		
//	long long tmp[50] = { 0 }, ary[50] = { 0 };
//
//	prime[1] = 1;
//
//	for (int i = 2; i *i <= N; i++)
//	{
//		if (prime[i] != 0) continue;
//		for (int j = i * 2; j <= N; j += i)
//		{
//			if(prime[j] == 0) prime[j] = i;
//		}
//	}
//	for (int i = 1; i <= N; i++)
//		if (prime[i] == 0) prime[i] = i;
//
//	cin >> a >> b >> n;
//	for (long long i = a; i <= a + b; i++)
//	{
//		long long cnt[50] = { 0 };
//		long long number = i, idx = 0;
//		long long ans1 = 1, ans2 = 1;
//
//		while (prime[number] != number)
//			tmp[++idx] = prime[number], number /= prime[number];
//
//		tmp[++idx] = prime[number];
//
//		int k = 0;
//		for (int i = 1; i <= idx; i++)
//		{
//			if (ary[k] != tmp[i])
//			{
//				k++;
//				ary[k] = tmp[i];
//			}
//			cnt[k]++;
//		}
//		bool chk = 0;
//		for (int i = 1; i <= k; i++) ans1 *= (cnt[i] + 1);
//		for (int i = 1; i <= k; i++)
//		{
//			if (cnt[i] / n >= 1)
//			{
//				ans2 *= ((cnt[i] / n) + 1);
//				chk = 1;
//			}
//		}
//		if (ans1 == 1) ans1 = 0, ans2 = 0;
//		ans2--;
//		if (chk == 0) ans2 = 0;
//		if (ans1 != 0) ans1 -= 2;
//
//		ans += ans1 - ans2;
//	}
//	printf("%lld", ans);
//	return 0;
//}