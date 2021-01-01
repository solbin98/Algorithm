//#include<iostream>
//#include<cstdio>
//#define N 2048
//using namespace std;
//
//int pows(int n)
//{
//	int r = 1;
//	for (int i = 1; i <= n; i++) r *= 2;
//	return r;
//}
//
//void init_chk(int w, bool chk[])
//{
//	int maxi = pows(w);
//	for (int n = 0; n < maxi; n++)
//	{
//		int tmp[13] = { 0 };
//		int index = 0, number = n;
//		while (number != 0)
//		{
//			tmp[index++] = number % 2;
//			number /= 2;
//		}
//
//		int last = -1, now = -1;
//		for (int j = 0; j < index; j++)
//		{
//			if (tmp[j] == 1)
//			{
//				last = now;
//				now = j;
//				if ((now - last) % 2 != 1)
//				{
//					chk[n] = 1;
//					break;
//				}
//			}
//		}
//		if ((w - now) % 2 != 1) chk[n] = 1;
//	}
//}
//
//int main()
//{
//	while (1)
//	{
//		int h, w, maxi, flag = 0;
//		long long dp[12][N + 1] = { 0 };
//		bool chk[N + 1] = { 0 };
//		cin >> h >> w;
//		if (h + w == 0) break;
//		maxi = pows(w);
//		init_chk(w, chk);
//
//		dp[1][0] = 1;
//		flag = 1;
//
//		for (int i = flag; i < h; i++)
//		{
//			for (int j = 0; j < maxi; j++)
//			{
//				for (int k = 0; k < maxi; k++)
//				{
//					if (chk[j | k] == 0 && (j | k) == (j + k))
//					{
//						dp[i + 1][k] += dp[i][j];
//					}
//				}
//			}
//		}
//		long long ans = 0;
//		for (int i = 0; i < maxi; i++) if (chk[i] == 0) ans += dp[h][i];
//		printf("%lld\n", ans);
//	}
//	return 0;
//}