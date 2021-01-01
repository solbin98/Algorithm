//#include<iostream>
//#include<cstdio>
//#include<vector>
//#define N 500
//using namespace std;
//
//vector<int> links[N + 1];
//int matched[N + 1];
//bool visit[N + 1];
//int n, k;
//
//int dfs(int num)
//{
//	visit[num] = 1;
//	for (int i = 0; i < links[num].size(); i++)
//	{
//		if (matched[links[num][i]] == 0)
//		{
//			matched[links[num][i]] = num;
//			visit[num] = 0;
//			return 1;
//		}
//		else
//		{
//			if (visit[matched[links[num][i]]] == 0)
//			{
//				int res = dfs(matched[links[num][i]]);
//				if (res == 1)
//				{
//					matched[links[num][i]] = num;
//					visit[num] = 0;
//					return 1;
//				}
//			}
//		}
//	}
//	visit[num] = 0;
//	return 0;
//}
//
//int main()
//{
//
//	cin >> n >> k;
//	for (int i = 1; i <= k; i++)
//	{
//		int a, b;
//		scanf("%d %d", &a, &b);
//		links[a].push_back(b);
//	}
//	for (int i = 1; i <= n; i++) dfs(i);
//	int ans = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (matched[i] != 0) ans++;
//	}
//	printf("%d", ans);
//	return 0;
//}