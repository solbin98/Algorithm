//#include<iostream>
//#include<cstdio>
//#define N 100
//using namespace std;
//bool visit[N + 1], chk = 0;
//int links[N + 1][N + 1];
//int n;
//void dfs(int num)
//{
//	if (chk == 1 || num == n) return;
//	if (visit[num] == 1)
//	{
//		chk = 1;
//		return;
//	}
//
//	visit[num] = 1;
//	for (int i = 1; i <= n; i++) if (links[num][i] == 1) dfs(i);
//	visit[num] = 0;
//	return;
//}
//int main()
//{
//	cin >> n;
//	for (int i = 1; i < n; i++)
//	{
//		int tmp;
//		cin >> tmp;
//		for (int j = 1; j <= tmp; j++)
//		{
//			int t;
//			cin >> t;
//			links[i][t] = 1;
//		}
//	}
//	dfs(1);
//	if (chk == 1) printf("CYCLE");
//	else printf("NO CYCLE");
//	return 0;
//}