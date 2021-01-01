//#include<iostream>
//#include<cstdio>
//#include<queue>
//#include<vector>
//
//#define N 5000
//using namespace std;
//vector <int> link[N + 1];
//int bus[N + 1][4];
//bool chk[N + 1], visit[N + 1] = { 0 };
//
//void swap(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//int main()
//{
//	int num, m, n;
//	int f_y, f_x, l_y, l_x;
//	cin >> m >> n;
//	cin >> num;
//	for (int i = 1; i <= num; i++)
//	{
//		int n, a, b, c, d, tmp;
//		scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
//		if (a == c && b > d) swap(b, d);
//		if (b == d && a > c) swap(a, c);
//		bus[n][0] = a, bus[n][1] = b;
//		bus[n][2] = c, bus[n][3] = d;
//	}
//	cin >> f_y >> f_x >> l_y >> l_x;
//
//	for (int i = 1; i <= num; i++)
//	{
//		if (bus[i][0] <= l_y && bus[i][2] >= l_y && bus[i][1] <= l_x && bus[i][3] >= l_x) chk[i] = 1;
//		for (int j = i+1; j <= num; j++)
//		{
//			bool flag = 0;
//			if (bus[i][0] == bus[i][2] && bus[j][0] == bus[j][2] && bus[j][0] == bus[i][0])
//			{
//				if (bus[i][1] <= bus[j][1] && bus[i][3] >= bus[j][3]) flag = 1;
//				else if (bus[j][1] <= bus[i][1] && bus[j][3] >= bus[i][3]) flag = 1;
//
//				else if ((bus[i][1] <= bus[j][1] && bus[i][3] >= bus[j][1])) flag = 1;
//				else if ((bus[i][1] <= bus[j][3] && bus[i][3] >= bus[j][3])) flag = 1;
//
//				else if ((bus[j][1] <= bus[i][1] && bus[j][3] >= bus[i][1])) flag = 1;
//				else if ((bus[j][1] <= bus[i][1] && bus[j][3] >= bus[i][1])) flag = 1;
//			}
//			else if (bus[i][0] == bus[i][2] && bus[j][1] == bus[j][3])
//			{
//				if (bus[j][0] <= bus[i][0] && bus[j][2] >= bus[i][2])
//				{
//					if (bus[i][1] <= bus[j][1] && bus[i][3] >= bus[j][3]) flag = 1;
//				}
//			}
//			else if (bus[i][1] == bus[i][3] && bus[j][0] == bus[j][2])
//			{
//				if (bus[i][0] <= bus[j][0] && bus[i][2] >= bus[j][2])
//				{
//					if (bus[j][1] <= bus[i][1] && bus[j][3] >= bus[i][3]) flag = 1;
//				}
//			}
//			else if (bus[i][1] == bus[i][3] && bus[j][1] == bus[j][3] && bus[j][1] == bus[i][1])
//			{
//				if (bus[i][0] <= bus[j][0] && bus[i][2] >= bus[j][2]) flag = 1;
//				else if (bus[j][0] <= bus[i][0] && bus[j][2] >= bus[i][2]) flag = 1;
//
//				else if ((bus[i][0] <= bus[j][0] && bus[i][2] >= bus[j][0])) flag = 1;
//				else if ((bus[i][0] <= bus[j][2] && bus[i][2] >= bus[j][2])) flag = 1;
//
//				else if ((bus[j][0] <= bus[i][0] && bus[j][2] >= bus[i][0])) flag = 1;
//				else if ((bus[j][0] <= bus[i][0] && bus[j][2] >= bus[i][0])) flag = 1;
//			}
//			if (flag == 1)
//			{
//				link[i].push_back(j), link[j].push_back(i);
//			}
//		}
//	}
//
//	queue <int> queues;
//	for (int i = 1; i <= num; i++)
//	{
//		if (bus[i][0] <= f_y && bus[i][2] >= f_y && bus[i][1] <= f_x && bus[i][3] >= f_x) queues.push(i), visit[i] = 1;
//	}
//
//	int level = 1, front = 1, tail = queues.size(), next_level = queues.size();
//
//	while (queues.empty() == 0)
//	{
//		int now = queues.front();
//		queues.pop();
//
//		if (chk[now] == 1)
//		{
//			printf("%d", level);
//			break;
//		}
//
//		for (int i = 0; i < link[now].size(); i++)
//		{
//			if (visit[link[now][i]] == 0)
//			{
//				visit[link[now][i]] = 1;
//				queues.push(link[now][i]);
//				tail++;
//			}
//		}
//
//		if (front == next_level)
//		{
//			next_level = tail;
//			level++;
//		}
//		front++;
//	}
//
//	return 0;
//}