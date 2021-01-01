//#include<iostream>
//#include<cstdio>
//#define N 50
//
//using namespace std;
//int ary[N + 1], party[N + 1][N+1];
//int index = 0;
//bool true_man[N + 1], true_party[N + 1];
//bool visit[N + 1];
//
//void dfs(int num, int n, int m)
//{
//	visit[num] = 1;
//	ary[++index] = num;
//	for (int i = 1; i <= m; i++)
//	{
//		if (party[i][num] == 1)
//		{
//			for (int j = 1; j <= n; j++)
//			{
//				if (party[i][j] == 1 && visit[j] == 0)
//				{
//					dfs(j,n,m);
//				}
//			}
//		}
//	}
//}
//
//int main()
//{
//	int n, m, k;
//	cin >> n >> m;
//	cin >> k;
//	for (int i = 1; i <= k; i++)
//	{
//		int tmp;
//		scanf("%d", &tmp);
//		true_man[tmp]=1;
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		int tmp;
//		cin >> tmp;
//		for (int j = 1; j <= tmp; j++)
//		{
//			int t;
//			scanf("%d", &t);
//			party[i][t] = 1;
//		}
//	}
//	for (int i = 1; i <= m; i++) true_party[i] = 1;
//	int ans = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		index = 0;
//		int flag = 1;
//		if (visit[i] == 0)
//		{
//			dfs(i, n, m);
//
//			for (int j = 1; j <= index; j++)
//				if (true_man[ary[j]] == 1) flag = 0;
//			
//			for (int j = 1; j <= index; j++)
//				for (int k = 1; k <= m; k++)
//					if (party[k][ary[j]] == 1)
//						true_party[k] = flag;
//		}
//	}
//
//	for (int i = 1; i <= m; i++) ans += true_party[i];
//	printf("%d", ans);
//	return 0;
//}