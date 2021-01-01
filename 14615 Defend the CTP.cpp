//#include<iostream>
//#include<cstdio>
//#include<queue>
//#include<vector>
//#define N 100000
//
//using namespace std;
//vector<int> links1[N + 1];
//vector<int> links2[N + 1];
//
//bool chk_1[N + 1], chk_2[N + 1];
//int n, m;
//
//void dfs1(int num)
//{
//	chk_1[num] = 1;
//	for (int i = 0; i < links1[num].size(); i++) if (chk_1[links1[num][i]] == 0) dfs1(links1[num][i]);
//}
//
//void dfs2(int num)
//{
//	chk_2[num] = 1;
//	for (int i = 0; i < links2[num].size(); i++) if (chk_2[links2[num][i]] == 0) dfs2(links2[num][i]);
//}
//
//
//int main()
//{
//
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int a, b;
//		scanf("%d %d", &a, &b);
//		links1[a].push_back(b), links2[b].push_back(a);
//	}
//
//	dfs1(1), dfs2(n);
//
//	int T;
//	cin >> T;
//	for (int i = 1; i <= T; i++)
//	{
//		int tmp;
//		scanf("%d", &tmp);
//		if (chk_1[tmp] == 1 && chk_2[tmp] == 1) printf("Defend the CTP");
//		else printf("Destroyed the CTP");
//		printf("\n");
//	}
//
//	return 0;
//}