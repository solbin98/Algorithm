//#include<iostream>
//#include<cstdio>
//#define N 55
//using namespace std;
//int cnts[N + 1], links[N + 1][N + 1];
//char tmp[N + 1][N + 1];
//bool visit[N + 1];
//
//int main()
//{
//	int n, m, cnt = 0, flag = 1;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) cin >> tmp[i];
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//		{
//			if (tmp[i][j] == 'Y') links[i][j] = 1;
//			else links[i][j] = 0;
//		}
//	visit[0] = 1;
//	if (n == 1)
//	{
//		printf("-1");
//		return 0;
//	}
//	while (flag != 0) // 모든 정점을 다 커버할때 까지만
//	{
//		flag = 0;
//		for (int i = 0; i < n; i++)
//		{
//			if (flag == 1) break;
//			if (visit[i] == 1)
//			{
//				for (int j = 0; j < n; j++)
//				{
//					if (links[i][j] == 1 && visit[j] == 0)
//					{
//						visit[j] = 1, links[i][j] = 0, links[j][i] = 0;
//						cnts[i]++, cnts[j]++;
//						cnt++;
//						flag = 1;
//						break;
//					}
//				}
//			}
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		if (visit[i] == 0)
//		{
//			printf("-1");
//			return 0;
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		if (cnt == m) break;
//		for (int j = 0; j < n ; j++)
//		{
//			if (cnt == m) break;
//			if (links[i][j] == 1)
//			{
//				cnt++;
//				cnts[i]++, cnts[j]++;
//				links[i][j] = 0, links[j][i] = 0;
//			}
//		}
//	}
//
//	if (cnt == m)
//	{
//		for (int i = 0; i < n; i++)
//			printf("%d", cnts[i]);
//	}
//	else printf("-1");
//
//	return 0;
//}