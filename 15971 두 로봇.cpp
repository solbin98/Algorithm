//#include<iostream>
//#include<cstdio>
//#include<vector>
//
//#define N 100000
//#define INF 987654321
//
//using namespace std;
//int arr[N + 1], brr[N + 1];
//bool visit1[N + 1], visit2[N + 1], chk[N + 1];
//vector <pair<int, int>> links[N + 1];
//
//void dfs(int arr[], bool visit[], int now)
//{
//	visit[now] = 1;
//	for (int i = 0; i < links[now].size(); i++)
//	{
//		int next = links[now][i].first, dis = links[now][i].second;
//		if (visit[next] == 0)
//		{
//			arr[next] = arr[now] + dis;
//			dfs(arr, visit, next);
//		}
//	}
//}
//
//int main()
//{
//	int a, b, n;
//	cin >> n >> a >> b;
//	for (int i = 1; i < n; i++)
//	{
//		int t1, t2, dis;
//		pair<int, int> tmp;
//		scanf("%d %d %d", &t1, &t2, &dis);
//		tmp.first = t2, tmp.second = dis;
//		links[t1].push_back(tmp);
//		tmp.first = t1, tmp.second = dis;
//		links[t2].push_back(tmp);
//	}
//
//	dfs(arr,visit1,a);
//	dfs(brr,visit2,b);
//
//	int ans = INF;
//	for (int i = 1; i <= n; i++)
//		if (ans > arr[i] + brr[i]) ans = arr[i] + brr[i];
//	
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 0; j < links[i].size(); j++)
//		{
//			int tmp = links[i][j].first, dis = links[i][j].second;
//			if (arr[i] + brr[tmp] < ans) ans = arr[i] + brr[tmp];
//			if (arr[tmp] + brr[i] < ans) ans = arr[tmp] + brr[i];
//		}
//	}
//
//	printf("%d", ans);
//	return 0;
//}