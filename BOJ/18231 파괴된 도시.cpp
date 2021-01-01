//#include<iostream>
//#include<cstdio>
//#define N 2000
//using namespace std;
//int links[N + 1][N + 1], ans = 0;
//bool visit[N + 1], fire[N + 1], fok[N + 1];
//void dfs(int num, int n)
//{
//	visit[num] = 1;
//	int flag = 0;
// 	for (int i = 1; i <= n; i++)
//	{
//		if (links[num][i] == 1)
//		{
//			if (fire[i] == 1 && visit[i] == 0) dfs(i, n);
//			else if (fire[i] == 0) flag = 1;
//		}
//	}
//	if (flag == 1) fok[num] = 0;
//	else fok[num] = 1, ans++;
//}
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int a, b;
//		scanf("%d %d", &a, &b);
//		links[a][b] = 1, links[b][a] = 1;
//	}
//
//	int k, tmp;
//	cin >> k;
//	for (int i = 1; i <= k; i++) scanf("%d", &tmp), fire[tmp] = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		if (fire[i] == 1 && visit[i] == 0) dfs(i, n);
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		int flag = 0;
//		if (fire[i] == 1)
//		{
//			if (fok[i] == 1) flag = 1;
//			else
//			{
//				for (int j = 1; j <= n; j++)
//				{
//					if (links[i][j] == 1 && fok[j] == 1)
//					{
//						flag = 1;
//						break;
//					}
//				}
//			}
//
//			if (flag == 0)
//			{
//				printf("-1");
//				return 0;
//			}
//		}
//	}
//
//	printf("%d\n", ans);
//	for (int i = 1; i <= n; i++)
//	{
//		if (fok[i] == 1) printf("%d ", i);
//	}
//	return 0;
//}