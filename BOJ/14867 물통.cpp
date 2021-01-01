//#include<iostream>
//#include<cstdio>
//#include<queue>
//#define N 100000
//#define INF 987654321
//using namespace std;
//
//int visit[N + 1][4];
//queue <pair<int, int>> queues;
//int a, b, tail = 1, level = 0;
//
//int calc2(int n1, int n2)
//{
//	if (n1 == 0 && n2 == 0) return 0;
//	if (n1 != 0 && n2 == 0) return 0;
//	else if (n1 != 0 && n2 == b) return 1;
//	else if (n1 == 0 && n2 != 0) return 2;
//	else if (n1 == a && n2 != 0) return 3;
//}
//
//int calc1(int n1, int n2)
//{
//	if (n1 == 0 && n2 == 0) return 0;
//	if (n1 != 0 && n2 == 0) return n1;
//	else if (n1 != 0 && n2 == b) return n1;
//	else if (n1 == 0 && n2 != 0) return n2;
//	else if (n1 == a && n2 != 0) return n2;
//}
//
//void pushs(pair <int, int> tmp)
//{	
//	if (visit[calc1(tmp.first, tmp.second)][calc2(tmp.first, tmp.second)] == INF)
//	{
//		visit[calc1(tmp.first, tmp.second)][calc2(tmp.first, tmp.second)] = 1;
//		tail++;
//		queues.push(tmp);
//	}
//}
//
//int main()
//{
//	int c, d;
//	cin >> a >> b >> c >> d;
//
//	for (int i = 0; i <= N; i++)
//		for (int j = 0; j < 4; j++)
//			visit[i][j] = INF;
//	
//
//	if (c != a && d != b)
//		if (c != 0 && d != 0)
//		{
//			printf("-1");
//			return 0;
//		}
//	
//	int next_level = 1, front = 1;
//	pair<int, int> tmp = { 0,0 };
//	queues.push(tmp);
//	visit[0][0] = 0, visit[0][2] = 0, visit[0][1] = 1, visit[0][3] = 1;
//	while (queues.empty() == 0)
//	{
//		pair<int, int> now = queues.front();
//		pair<int, int> tmp;
//		if (now.first == c && now.second == d)
//		{
//			printf("%d",level);
//			return 0;
//		}
//		if (now.first >= b - now.second) tmp.first = now.first - (b - now.second), tmp.second = b;
//		else tmp.first = 0, tmp.second = now.second + now.first;
//		pushs(tmp);
//	
//		if (now.second >= a - now.first) tmp.first = a, tmp.second = now.second - (a - now.first);
//		else tmp.first = now.first + now.second, tmp.second = 0;
//		pushs(tmp);
//
//		tmp.first = a, tmp.second = now.second;
//		pushs(tmp);
//		tmp.first = 0, tmp.second = now.second;
//		pushs(tmp);
//		tmp.first = now.first, tmp.second = b;
//		pushs(tmp);
//		tmp.first = now.first, tmp.second = 0;
//		pushs(tmp);
//
//		if (front == next_level)
//		{
//			next_level = tail;
//			level++;
//		}
//		front++;
//		queues.pop();
//	}
//	printf("-1");
//
//	return 0;
//}