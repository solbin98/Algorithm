//#include<cstdio>
//#include<iostream>
//#define N 10005
//
//using namespace std;
//short dp[N + 1][2501], length[N + 1];
//
//void init()
//{
//	dp[0][1] = 1, length[0] = 1;
//	dp[1][1] = 1, length[1] = 1;
//}
//
//void pluss(int now, int pre, int pree)
//{
//	short tmp[2501] = { 0 };
//	int now_i=1, pre_i=1, pree_i=1;
//	while (pre_i <= length[pre] || pree_i <= length[pree])
//	{
//		tmp[now_i] = (dp[pre][pre_i] + dp[pree][pree_i] + tmp[now_i]);
//		tmp[now_i + 1] = (tmp[now_i] / 10);
//		tmp[now_i] %= 10;
//		pre_i++, pree_i++, now_i++;
//	}
//	if (tmp[now_i] != 0) length[now] = now_i;
//	else length[now] = now_i - 1;
//
//	for (int j = 1; j <= length[now]; j++) dp[now][j] = tmp[j];
//}
//
//int main()
//{
//	init();
//	for (int i = 2; i <= 10000; i++) pluss(i, i - 1, i - 2);
//	int n;
//	while (scanf("%d",&n) != EOF)
//	{
//		pluss(N, n, n - 2);
//		for (int i = length[N]; i >= 1; i--) printf("%d", dp[N][i]);
//		printf("\n");
//	}
//	return 0;
//}