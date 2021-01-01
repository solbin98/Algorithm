//#include<iostream>
//#include<cstdio>
//#include<queue>
//#define N 100000
//using namespace std;
//
//typedef struct {
//	int val;
//	int index;
//}info;
//
//struct cmp {
//	bool operator()(info t, info u) 
//	{
//		if (t.val == u.val) return t.index < u.index;
//		return t.val > u.val;
//	}
//};
//
//priority_queue <int, vector<int>, less<int>> idxs;
//priority_queue <info, vector<info>, cmp> val;
//bool visit[N + 1];
//char str[N + 1], ans[N + 1];
//int main()
//{
//	int n, idx = 0, winner = 0;
//	bool chk = 0;
//	cin >> n;
//	cin >> str;
//	for (int i = 1; i <= n; i++)
//	{
//		info tmp = { str[i - 1] - 'a', i };
//		idxs.push(i);
//		val.push(tmp);
//	}
//
//	for (int i = 1; i <= n / 2; i++)
//	{
//		while (visit[idxs.top()] == 1) idxs.pop();
//		int player1 = str[idxs.top() - 1] - 'a';
//		visit[idxs.top()] = 1;
//		while (visit[val.top().index] == 1) val.pop();
//		visit[val.top().index] = 1;
//		int player2 = val.top().val;
//		ans[idx++] = player2 + 'a';
//
//		if (chk == 1) continue;
//		if (player1 < player2)
//		{
//			winner = 1;
//			chk = 1;
//		}
//		else if (player1 > player2)
//		{
//			winner = 2;
//			chk = 1;
//		}
//	}
//	ans[idx] = '\0';
//	if (winner <= 1) printf("NE\n");
//	else printf("DA\n");
//
//	printf("%s", ans);
//	return 0;
//}