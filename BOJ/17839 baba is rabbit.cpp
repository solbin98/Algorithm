//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<unordered_map>
//#include<algorithm>
//
//#define N 100000
//#define M 300000
//
//using namespace std;
//int idx = 0;
//string ary[N + 1];
//unordered_map<string, vector<string>> table;
//unordered_map<string, bool> visit;
//
//void dfs(string now)
//{
//	visit[now] = 1;
//	for (int i = 0; i < table[now].size(); i++)
//		if (visit[table[now][i]] == 0)
//		{
//			ary[++idx] = table[now][i];
//			dfs(table[now][i]);
//		}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		string a, b, c;
//		cin >> a >> b >> c;
//		table[a].push_back(c);
//	}
//	dfs("Baba");
//	sort(ary + 1, ary + idx + 1);
//	for (int i = 1; i <= idx; i++) cout << ary[i], printf("\n");
//	return 0;
//}