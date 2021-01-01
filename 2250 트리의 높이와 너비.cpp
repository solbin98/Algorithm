//#include<iostream>
//#include<cstdio>
//
//#define N 10000
//#define INF 987654321
//#define LEFT 0
//#define RIGHT 1 
//
//using namespace std;
//int links[N + 1][2], counts[N + 1], chk[N + 1];
//int level[N + 1][2];
//bool pare[N + 1];
//int idx = 0;
//
//int calc(int num)
//{
//	int cnt = 0;
//	if (links[num][LEFT] != -1) cnt += calc(links[num][LEFT]);
//	if (links[num][RIGHT] != -1) cnt += calc(links[num][RIGHT]);
//	cnt += 1;
//	counts[num] = cnt;
//	return cnt;
//}
//
//void dfs(int num, int lev)
//{
//	int now = idx;
//	if (links[num][LEFT] != -1) dfs(links[num][LEFT], lev+1);
//	
//	int tmp = links[num][LEFT];
//	if (tmp == -1) tmp = 0;
//
//	tmp = counts[tmp];
//	chk[num] = now + tmp + 1;
//	if (level[lev][0] > chk[num]) level[lev][0] = chk[num];
//	if (level[lev][1] < chk[num]) level[lev][1] = chk[num];
//	idx = chk[num];
//	if (links[num][RIGHT] != -1) dfs(links[num][RIGHT], lev+1);
//}
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		level[i][0] = INF, level[i][1] = 0;
//		int a, b, c;
//		scanf("%d %d %d", &a, &b, &c);
//		links[a][LEFT] = b, links[a][RIGHT] = c;
//		pare[b] = 1, pare[c] = 1;
//	}
//	int start = 0;
//
//	for (int i = 1; i <= n; i++)
//		if (pare[i] == 0)
//		{
//			start = i;
//			break;
//		}
//
//	calc(start), dfs(start,1);
//
//	int ans = 0, ans_index = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		if (level[i][1] - level[i][0] > ans) ans = level[i][1] - level[i][0], ans_index = i;
//	}
//	printf("%d %d", ans_index, ans+1);
//	return 0;
//}