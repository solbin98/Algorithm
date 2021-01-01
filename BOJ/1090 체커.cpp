//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#define N 50
//using namespace std;
//int pos[N + 1][2], dist[N+1], n;
//int abs(int a)
//{
//	int o = a;
//	if (o < 0) return -o;
//	else return o;
//}
//int main()
//{
//	int INF = 2e9;
//	cin >> n;
//	for (int i = 1; i <= n; i++) dist[i] = INF;
//	for (int i = 1; i <= n; i++) cin >> pos[i][0] >> pos[i][1];
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			int y = pos[i][0], x = pos[j][1];
//			int val[N + 1] = { 0 };
//			for (int k = 1; k <= n; k++) val[k] = abs(y - pos[k][0]) + abs(x - pos[k][1]);
//			sort(val + 1, val + n + 1);
//			int sum = 0;
//			for (int k = 1; k <= n; k++)
//			{
//				sum += val[k];
//				if (dist[k] > sum) dist[k] = sum;
//			}
//		}
//	}
//
//	for (int i = 1; i <= n; i++) printf("%d ", dist[i]);
//	return 0;
//}