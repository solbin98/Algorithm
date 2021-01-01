//#include<iostream>
//#include<cstdio>
//
//#define N 1000
//#define LEFT 1
//#define RIGHT 2
//
//using namespace std;
//int dist[N + 1], node_index;
//int queue[(N * N) + 1];
//bool visit[(N * N) + 1] = { 0 };
//
//class node
//{
//public:
//	int pare, left_c, right_c;
//	int self;
//};
//node Node[(N * N)+1] ;
//
//void dfs(int now, int pre, int distance, int num)
//{
//	if (Node[pre].pare == now)
//	{
//		if (Node[pre].self == LEFT) dfs(Node[now].right_c, now, distance - 1, num);
//		else
//		{
//			if (Node[now].pare == 0)
//			{
//				Node[node_index].left_c = now;
//				Node[node_index].right_c = node_index + 1;
//				Node[now].pare = node_index;
//				Node[now].self = LEFT;
//				Node[node_index + 1].pare = node_index;
//				Node[node_index + 1].self = RIGHT;
//				node_index += 2;
//			}
//			dfs(Node[now].pare, now, distance - 1, num);
//		}
//	}
//	else
//	{
//		if (distance == 0)
//		{	
//			Node[num].pare = Node[now].pare;
//			Node[num].self = Node[now].self;
//			if (Node[num].self == LEFT) Node[Node[num].pare].left_c = num;
//			else Node[Node[num].pare].right_c = num;
//			Node[now].left_c = 0, Node[now].right_c = 0;
//			Node[now].pare = 0, Node[now].self = 0;
//		}
//		else
//		{
//			Node[now].left_c = node_index;
//			Node[node_index].pare = now;
//			Node[node_index].self = LEFT;
//			node_index++;
//			Node[now].right_c = node_index;
//			Node[node_index].pare = now;
//			Node[node_index].self = RIGHT;
//			node_index++;
//			dfs(Node[now].left_c, now, distance - 1, num);
//		}
//	}
//}
//
//int bfs(int first, int find)
//{
//	int level = 0, level_p = 1, q_index = 1, q_first = 1;
//	visit[first] = 1, queue[q_index] = first;
//
//	while(q_first <= q_index)
//	{
//		if (queue[q_first] == find)
//		{
//			return level;
//		}
//		int tmp = queue[q_first];
//		if (Node[tmp].pare != 0 && visit[Node[tmp].pare] == 0) queue[++q_index] = Node[tmp].pare, visit[Node[tmp].pare] = 1;
//		if (Node[tmp].left_c != 0 && visit[Node[tmp].left_c] == 0) queue[++q_index] = Node[tmp].left_c, visit[Node[tmp].left_c] = 1;
//		if (Node[tmp].right_c != 0 && visit[Node[tmp].right_c] == 0) queue[++q_index] = Node[tmp].right_c, visit[Node[tmp].right_c] = 1;
//
//		if (q_first == level_p) level++, level_p = q_index;
//		q_first++;
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	node_index = n + 1;
//	for (int i = 1; i < n; i++) scanf("%d", &dist[i]);
//	Node[1].self = LEFT, Node[0].self = RIGHT;
//	for (int i = 1; i < n; i++)
//	{
//		Node[0].pare = i;
//		dfs(i, 0, dist[i], i + 1);
//	}
//	int a, b;
//	cin >> a >> b;
//	printf("%d", bfs(a, b));
//	return 0;
//}