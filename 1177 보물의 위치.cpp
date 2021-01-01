//#include<iostream>
//#include<cstdio>
//using namespace std;
//long long d[4][2] = { {1,0},{0,1},{-1,0},{0,-1} }; 
//
//long long pows(long long num, long long k)
//{
//	long long ret = 1;
//	for (int i = 1; i <= k; i++) ret *= num, ret %= 9;
//	return ret;
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		long long k, m, patton[5][10] = { 0 }, idx[5] = { 0 }, len[5] = { 0 };
//		long long inf_patton[5][10] = { 0 }, inf_idx[5] = { 0 };
//		long long py = 0, px = 0;	
//		bool patton_chk[5][10] = { 0 };
//
//		cin >> k >> m;
//		for (int i = 1; i <= 4; i++) len[i] += k / 4;
//		for (int i = 1; i <= (k % 4); i++) len[i]++;
//		for (long long i = 1; i <= 4; i++)
//		{
//			long long number = pows(m%9, i - 1);
//			long long fz = pows(m%9, 4);
//			for (int j = 1; j <= len[i]; j++)
//			{
//				if (patton_chk[i][number])
//				{
//					for (int k = 1; k <= idx[i]; k++)
//					{
//						if (patton[i][k] == number)
//						{
//							for (int p = k; p <= idx[i]; p++) inf_patton[i][++inf_idx[i]] = patton[i][p];
//							idx[i] = k-1;
//							break;
//						}
//					}
//					break;
//				}
//				patton[i][++idx[i]] = number;
//				patton_chk[i][number] = 1;
//				number = (number * fz) % 9;
//			}
//			for (int j = 1; j <= idx[i]; j++)
//			{
//				py += d[i - 1][0] * ((patton[i][j] + 8) % 9 + 1);
//				px += d[i - 1][1] * ((patton[i][j] + 8) % 9 + 1);
//			}
//			len[i] -= idx[i];
//			for (int j = 1; j <= inf_idx[i]; j++)
//			{
//				py += d[i - 1][0] * ((inf_patton[i][j] + 8) % 9 + 1) * (len[i] / inf_idx[i]);
//				px += d[i - 1][1] * ((inf_patton[i][j] + 8) % 9 + 1) * (len[i] / inf_idx[i]);
//			}
//
//			int nums = 0;
//			if (inf_idx[i] != 0) nums = len[i] % inf_idx[i];
//			for (int j = 1; j <= nums; j++)
//			{
//				py += d[i - 1][0] * ((inf_patton[i][j] + 8) % 9 + 1);
//				px += d[i - 1][1] * ((inf_patton[i][j] + 8) % 9 + 1);
//			}
//		}
//		printf("%lld %lld\n", px, py);
//	}
//	return 0;
//}