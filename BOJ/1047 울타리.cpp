//#include<iostream>
//#include<cstdio>
//#include<queue>
//
//#define N 40
//#define INF 987654321
//
//using namespace std;
//int a[N + 1][3], tmp[5], n;
//int ans = INF;
//
//void dfs(int index, int cnt)
//{
//	tmp[cnt] = index;
//	if (cnt == 4)
//	{
//		int max_x = 0, max_y = 0, min_x = INF, min_y = INF;
//		priority_queue <int, vector<int>, less<int>> queues;
//
//		for (int i = 1; i <= 4; i++)
//		{
//			int idx = tmp[i];
//			if (max_x < a[idx][0]) max_x = a[idx][0];
//			if (max_y < a[idx][1]) max_y = a[idx][1];
//			if (min_x > a[idx][0]) min_x = a[idx][0];
//			if (min_y > a[idx][1]) min_y = a[idx][1];
//		} 
//
//		int money = 0, cost;
//		if (max_x == min_x && max_y == min_y) cost = 0;
//		else if (max_y == min_y) cost = max_x - min_x;
//		else if (max_x == min_x) cost = max_y - min_y;
//		else cost = (max_x - min_x + max_y - min_y) * 2;
//
//		int cnts = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			if (a[i][0] > max_x || a[i][0] < min_x || a[i][1] > max_y || a[i][1] < min_y) cnts++, money += a[i][2];
//			else queues.push(a[i][2]);
//		}
//
//		while (money < cost && queues.empty()==0)
//		{
//				money += queues.top(), cnts++;
//				queues.pop();
//		}
//
//		if (money >= cost)
//			if (cnts < ans) ans = cnts;
//	
//		return;
//	}
//
//	if (index == 0) index++;
//	for (int i = index; i <= n; i++) dfs(i, cnt + 1);
//}
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
//	dfs(0, 0);
//	printf("%d", ans);
//	return 0;
//}