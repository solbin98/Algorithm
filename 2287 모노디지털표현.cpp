//#include<cstdio>
//#define N 1000000
//#define M 50000
//
//using namespace std;
//
//char dp[N + 1]; 
//int tmp[9][M + 1];
//char index[9];
//
//int main()
//{
//	int x;
//	scanf("%d", &x);
//
//	for (int i = 1; i <= 8; i++) index[i] = 1;
//	dp[x] = 1, tmp[1][1] = x;
//
//	for (int i = 2; i <= 8; i++)
//	{
//		for (int j = 1; j < i; j++)
//			for (int k = 1; k <= index[j]; k++)
//				for (int p = 1; p <= index[i - j]; p++)
//				{
//					int ps = tmp[j][k] + tmp[i - j][p];
//					int mi = tmp[j][k] - tmp[i - j][p];
//					int mt = tmp[j][k] * tmp[i - j][p];
//					int dv = -1;
//					if (tmp[i - j][p] != 0) dv = tmp[j][k] / tmp[i - j][p];
//
//					if (ps >= 0 && ps <= N && dp[ps] == 0) dp[ps] = i, tmp[i][index[i]++] = ps;
//					if (mi >= 0 && mi <= N && dp[mi] == 0) dp[mi] = i, tmp[i][index[i]++] = mi;
//					if (mt >= 0 && mt <= N && dp[mt] == 0) dp[mt] = i, tmp[i][index[i]++] = mt;
//					if (dv >= 0 && dv <= N && dp[dv] == 0) dp[dv] = i, tmp[i][index[i]++] = dv;
//				}
//
//		int sum = 0;
//		for (int j = 1; j <= i; j++)
//		{
//			int r = x;
//			for (int k = 1; k < j; k++) r *= 10;
//			sum += r;
//		}
//		if (sum <= N) tmp[i][index[i]] = sum, dp[sum] = i;
//	}
//
//	int ban;
//	scanf("%d", &ban);
//	for (int i = 1; i <= ban; i++)
//	{
//		int tmp;
//		scanf("%d", &tmp);
//		if (dp[tmp] == 0) printf("NO\n");
//		else printf("%d\n", dp[tmp]);
//	}
//	return 0;
//}