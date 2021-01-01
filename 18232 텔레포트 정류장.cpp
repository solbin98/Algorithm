//#include<iostream>
//#include<cstdio>
//#include<vector>
//
//#define N 600000
//using namespace std;
//vector <int> links[N + 1];
//int queue[N + 1];
//bool visit[N + 1];
//
//int main()
//{
//	int n, m, s, e;
//	cin >> n >> m;
//	cin >> s >> e;
//	for (int i = 1; i <= m; i++)
//	{
//		int a, b;
//		scanf("%d %d", &a, &b);
//		links[a].push_back(b), links[b].push_back(a);
//	}
//
//	int head = 1, tail = head;
//	int level = 0, level_index = 1;
//	queue[head] = s;
//
//	while (1)
//	{
//		int pop = queue[head];
//		if (pop == e)
//		{
//			printf("%d", level);
//			return 0;
//		}
//		if (visit[pop - 1] == 0) visit[pop-1] = 1, queue[++tail] = pop - 1;
//		if (visit[pop + 1] == 0) visit[pop+1] = 1, queue[++tail] = pop + 1;
//
//		for (int i = 0; i < links[pop].size(); i++)
//			if (visit[links[pop][i]] == 0)
//				queue[++tail] = links[pop][i], visit[links[pop][i]] = 1;
//		
//		if (head == level_index)
//		{
//			level_index = tail;
//			level++;
//		}
//		head++;
//	}
//
//	return 0;
//}
