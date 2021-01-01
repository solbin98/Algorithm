//#include<iostream>
//#include<cstdio>
//#include<queue>
//#define N 99999
//using namespace std;
//bool visit[N + 1];
//int main()
//{
//	int n, t, g;
//	cin >> n >> t >> g;
//
//	queue <int> queues;
//	queues.push(n);
//
//	int level = 0, next_level = 1, front = 1, tail = 1;
//	visit[n] = 1;
//	while (queues.empty() == 0)
//	{
//		int now = queues.front();
//		if (now == g)
//		{
//			if (level > t) break;
//			printf("%d\n", level);
//			return 0;
//		}
//		if (now + 1 <= N && visit[now + 1] == 0) tail++, visit[now + 1] = 1, queues.push(now + 1);
//		if(now * 2 <= N)
//		{
//			int tmp = now * 2, index = 0, r = 1;
//			int ary[10] = { 0 };
//
//			while (tmp != 0)
//			{
//				ary[++index] = tmp % 10;
//				tmp /= 10;
//			}
//			ary[index]--;
//			
//			for (int i = 1; i <= index; i++)
//			{
//				tmp += ary[i] * r;
//				r *= 10;
//			}
//			if (visit[tmp] == 0) tail++, visit[tmp] = 1, queues.push(tmp);
//		}
//		if (front == next_level)
//		{
//			next_level = tail;
//			level++;
//		}
//		queues.pop();
//		front++;
//	}
//	printf("ANG");
//	return 0;
//}