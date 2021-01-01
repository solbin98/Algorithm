//#include<iostream>
//#include<cstdio>
//#include<vector>
//#define V 20000
//#define E 200000
//#define LEFT 1
//#define RIGHT 2
//
//using namespace std;
//
//vector <int> v[V + 1];
//short pare[E + 1][2];
//short visit[V + 1];
//int a, b;
//
//void dfs(int n, int dir)
//{
//	visit[n] = dir;
//	for (int i = 0; i < v[n].size(); i++)
//	{
//		if (visit[v[n][i]] == 0)
//		{
//			if (dir == LEFT)
//				dfs(v[n][i], RIGHT);
//			else
//				dfs(v[n][i], LEFT);
//		}
//	}
//
//
//}
//
//int main()
//{
//	int K;
//	cin >> K;
//	while (K--)
//	{
//		for (int i = 0; i <= V; i++) visit[i] = 0, v[i].clear();
//		scanf_s("%d %d", &a, &b);
//		for (int i = 1; i <= b; i++)
//		{
//			int t1, t2;
//			scanf_s("%d %d", &t1, &t2);
//			v[t1].push_back(t2);
//			v[t2].push_back(t1);
//			pare[i][0] = t1, pare[i][1] = t2;
//		}
//
//		for (int i = 1; i <= a; i++)
//			if (visit[i] == 0)
//				dfs(i, LEFT);
//	
//		int flag = 0;
//		for (int i = 1; i <= b; i++)
//		{
//			if (visit[pare[i][0]] == visit[pare[i][1]])
//			{
//				flag = 1;
//				break;
//			}
//		}
//
//		if (flag == 0) printf("YES\n");
//		else printf("NO\n");
//	}
//	return 0;
//}