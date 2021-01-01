//#include<iostream>
//#include<cstdio>
//#define N 500000
//using namespace std;
//int visit[N + 1][21];
//int main()
//{
//	int n, a, b;
//	int dis = 1;
//	cin >> n >> a >> b;
//	visit[a][0] = 1, visit[b][0] = 1;
//	for (int i = 0; i <= 20; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (visit[j][i] == 2)
//			{
//				printf("%d", i);
//				return 0;
//			}
//			else if (visit[j][i] == 1)
//			{
//				if(j + dis <= n) visit[j + dis][i + 1]++;
//				if (j - dis >= 1) visit[j - dis][i + 1]++;
//			}
//		}
//		dis *= 2;
//	}
//	printf("-1");
//	return 0;
//}