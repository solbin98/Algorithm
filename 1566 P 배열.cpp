//#include<iostream>
//#include<cstdio>
//#define N 20
//#define INF 987654321
//using namespace std;
//int a[N + 1][N + 1], path[N + 1];
//int sum_r[N + 1], sum_c[N + 1];
//int mins = INF;
//int n, m;
//
//void calc(int now, int idx)
//{
//	if (now > n) return;
//
//	int t_sum_r[N + 1] = { 0 }, t_sum_c[N + 1] = { 0 };
//	bool visit[N + 1] = { 0 };
//	int cnt = 0;
//
//	for (int i = 1; i <= n; i++) t_sum_r[i] = sum_r[i];
//	for (int i = 1; i <= m; i++) t_sum_c[i] = sum_c[i];
//
//	for (int i = 1; i <= idx; i++)
//	{
//		visit[path[i]] = 1;
//		for (int j = 1; j <= m; j++)
//		{
//			int val = a[path[i]][j];
//			val *= -2;
//			t_sum_c[j] += val;
//		}
//		t_sum_r[path[i]] *= -1;
//	}
//
//	for (int j = 1; j <= m; j++)
//	{
//		if (t_sum_c[j] < 0)
//		{
//			cnt++;
//			for (int i = 1; i <= n; i++)
//			{
//				int val = a[i][j];
//				if (visit[i] == 1) val *= -1;
//				val *= -2;
//				t_sum_r[i] += val;
//			}
//			t_sum_c[j] *= -1;
//		}
//	}
//
//	bool chk = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (t_sum_r[i] <= 0)
//		{
//			chk = 1;
//			break;
//		}
//	}
//	for (int j = 1; j <= m; j++)
//	{
//		if (t_sum_c[j] <= 0)
//		{
//			chk = 1;
//			break;
//		}
//	}
//	if (chk == 0 && mins > cnt + idx) mins = cnt + idx;
//
//	for (int i = now + 1; i <= n; i++)
//	{
//		path[idx + 1] = i;
//		calc(i, idx + 1);
//	}
//}
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//			scanf("%d", &a[i][j]), sum_r[i]+=a[i][j], sum_c[j]+=a[i][j];
//
//	calc(0, 0);
//	if (mins == INF) mins = -1;
//	printf("%d", mins);
//	return 0;
//}