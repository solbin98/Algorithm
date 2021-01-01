//#include<iostream>
//#include<cstdio>
//#define N 500000
//#define INF 9876543210
//using namespace std;
//int heap[N + 1][2], a[N + 1][2];
//int tail = 0;
//
//int min(int a, int b)
//{
//	if (a < b) return a;
//	else return b;
//}
//void down_heap()
//{
//	if (tail == 1)
//	{	
//		heap[1][0] = INF;
//		tail--;
//		return;
//	}
//	int now = 1, next_left = now * 2, next_right = next_left + 1;
//	int num1 = heap[tail][0], num2 = heap[tail][1];
//	heap[tail][0] = INF;
//	tail--;
//	if (next_left > N) return;
//	while (min(heap[next_left][0], heap[next_right][0]) < num1)
//	{
//		if (heap[next_left][0] < heap[next_right][0])
//		{
//			heap[now][0] = heap[next_left][0];
//			heap[now][1] = heap[next_left][1];
//			now = next_left;
//		}
//		else
//		{
//			heap[now][0] = heap[next_right][0];
//			heap[now][1] = heap[next_right][1];
//			now = next_right;
//		}
//		next_left = now * 2;
//		next_right = next_left + 1;
//	}
//	heap[now][0] = num1, heap[now][1] = num2;
//}
//void up_heap()
//{
//	int num1 = heap[tail][0], num2 = heap[tail][1];
//	int now = tail, next = now / 2;
//	while (num1 < heap[next][0])
//	{
//		heap[now][0] = heap[next][0], heap[now][1] = heap[next][1];
//		now = next;
//		next = now / 2;
//	}
//	heap[now][0] = num1;
//	heap[now][1] = num2;
//}
//void insert_heap(int a, int b)
//{
//	heap[++tail][0] = a, heap[tail][1] = b;
//	up_heap();
//}
//void pop(int & t1, int & t2)
//{
//	if (tail == 0) return;
//	t1 = heap[1][0], t2 = heap[1][1];
//	down_heap();
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= N; i++) heap[i][0] = INF;
//	for (int i = 1; i <= n; i++)
//	{
//		int t1, t2;
//		scanf("%d %d", &t1, &t2);
//		insert_heap(t1, t2);
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		int t1, t2;
//		pop(t1, t2);
//		a[i][0] = t1, a[i][1] = t2;
//	}
//
//	int ans = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (heap[1][0] <= a[i][0])
//		{
//			int t1=0, t2=0;
//			pop(t1, t2);
//			insert_heap(a[i][1],0);
//		}
//		else
//		{
//			insert_heap(a[i][1], 0);
//			ans++;
//		}
//	}
//	printf("%d", ans);
//	return 0;
//}