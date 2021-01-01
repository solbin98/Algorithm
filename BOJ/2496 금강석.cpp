//#include<iostream>
//#include<cstdio>
//#define T 100
//using namespace std;
//int pos[T + 1][2], h1[T + 1], h2[T + 1], d[4][2] = { {-1,0},{0,1},{0,-1},{1,0} };
//int n, m, t, kv, ans = 1;
//int ans_x = 0, ans_y = 0;
//
//int abss(int a, int b)
//{
//	if (a - b < 0) return -(a - b);
//	else return a - b;
//}
//
//void calc(int x, int y)
//{
//	if (x < 0) x = 0;
//	else if (x > n) x = n;
//
//	if (y < 0) y = 0;
//	else if (y > m) y = m;
//
//	int cnts = 0;
//	for (int k = 1; k <= t; k++)
//		if (abss(x, pos[k][0]) + abss(y, pos[k][1]) <= (kv / 2))
//			cnts++;
//
//	if (cnts > ans) ans = cnts, ans_x = x, ans_y = y;
//}
//
//int main()
//{
//	cin >> n >> m >> t >> kv;
//	for (int i = 1; i <= t; i++)
//		cin >> pos[i][0] >> pos[i][1], h1[i] = pos[i][1] - pos[i][0], h2[i] = pos[i][0] + pos[i][1];
//	ans_x = pos[1][0], ans_y = pos[1][1];
//	for (int i = 1; i <= t; i++)
//	{
//		for (int j = 1; j <= t; j++)
//		{
//			int t_x = (h2[j] - h1[i]) / 2;
//			int t_y = t_x + h1[i];
//			int cnts = 0;
//
//			for (int p = 0; p < 4; p++)
//			{
//				calc(t_x + d[p][0], t_y + (kv / 2) + d[p][1]);
//				calc(t_x + d[p][0], t_y - (kv / 2) + d[p][1]);
//				calc(t_x + (kv / 2) + d[p][0], t_y + d[p][1]);
//				calc(t_x - (kv / 2) + d[p][0], t_y + d[p][1]);
//			}
//		}
//	}		
//	printf("%d %d\n%d", ans_x, ans_y, ans);
//}