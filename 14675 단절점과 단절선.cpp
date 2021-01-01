//#include<iostream>
//#include<cstdio>
//#include<vector>
//#define N 100000 
//using namespace std;
//vector <int> link[N + 1];
//int in_edge[N + 1], out_edge[N + 1];
//bool visit[N + 1];
//
//void dfs(int now)
//{
//	visit[now] = 1;
//	in_edge[now]++;
//	for (int i = 0; i < link[now].size(); i++)
//	{
//		if (visit[link[now][i]] == 0)
//		{
//			out_edge[now]++;
//			dfs(link[now][i]);
//		}
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i < n; i++)
//	{
//		int a, b;
//		scanf("%d %d", &a, &b);
//		link[a].push_back(b), link[b].push_back(a);
//	}
//	dfs(1);
//	in_edge[1]--;
//
//	int m;
//	cin >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int t, val;
//		scanf("%d %d", &t, &val);
//		if (t == 1)
//		{
//			if (in_edge[val] + out_edge[val] == 1) printf("no\n");
//			else printf("yes\n");
//		}
//		else
//		{
//			printf("yes\n");
//		}
//	}
//	return 0;
//}