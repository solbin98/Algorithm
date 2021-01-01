//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<list>
//#define N 1000
//using namespace std;
//list<int> link[N + 1];
//vector<int> path;
//int n;
//
//void dfs(int now)
//{
//	while(link[now].size() != 0)
//	{
//		int val = link[now].front();
//		link[now].pop_front();
//		dfs(val);
//	}
//	path.push_back(now);
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			link[i].push_back(j);
//
//	cout << n * n + 1 << endl;
//	dfs(1);
//	for (int i = 0; i < path.size(); i++) printf("%d ", path[i]);
//	return 0;
//}