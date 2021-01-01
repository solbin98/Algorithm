//#include<iostream>
//#include<cstdio>
//#define N 50000
//#define INF 987654321
//using namespace std;
//int ary[N + 1][2], tmp[N + 1][2];
//int heap[N + 1];
//int tail = 0;
//
//int max(int a, int b)
//{
//	if (a > b) return a;
//	else return b;
//}
//
//void up_heap(int num)
//{
//	int now = tail, next = tail / 2;
//	while (now > 1 && ary[heap[next]][1] < ary[num][1])
//	{
//		heap[now] = heap[next];
//		now = next;
//		next = now / 2;
//	}
//	heap[now] = num;
//}
//
//void down_heap(int num)
//{
//	int now = 1, left = now * 2, right = left + 1;
//	while (max(ary[heap[left]][1], ary[heap[right]][1]) > ary[num][1])
//	{
//		if (ary[heap[left]][1] > ary[heap[right]][1])
//		{
//			heap[now] = heap[left];
//			now = left;
//			left = now * 2;
//			right = left + 1;
//		}
//		else
//		{
//			heap[now] = heap[right];
//			now = right;
//			left = now * 2;
//			right = left + 1;
//		}
//	}
//	heap[now] = num;
//}
//
//void insert(int num)
//{
//	heap[++tail] = num;
//	up_heap(num);
//}
//
//int pop()
//{
//	if (tail == 0) return 0;
//	int ret = heap[1];
//	heap[1] = heap[tail];
//	heap[tail] = 0;
//	tail--;
//	down_heap(heap[1]);
//	return ret;
//}
//
//void merge(int s, int e, int (*a)[2] )
//{
//	int mid = (s + e) / 2;
//	int i1 = s, i2 = mid + 1, index = 1;
//	while (i1 <= mid && i2 <= e)
//	{
//		if (a[i1][0] < a[i2][0]) tmp[index][0] = a[i1][0], tmp[index++][1] = a[i1++][1];
//		else tmp[index][0] = a[i2][0], tmp[index++][1] = a[i2++][1];
//	}
//	for (int i = i1; i <= mid; i++) tmp[index][0] = a[i][0], tmp[index++][1] = a[i][1];
//	for (int i = i2; i <= e; i++) tmp[index][0] = a[i][0], tmp[index++][1] = a[i][1];
//	for (int i = s; i <= e; i++) a[i][0] = tmp[i - s + 1][0], a[i][1] = tmp[i - s + 1][1];
//}
//void merge_sort(int s, int e, int (*a)[2])
//{
//	if (s == e) return;
//	int mid = (s + e) / 2;
//	merge_sort(s, mid, a);
//	merge_sort(mid + 1, e, a);
//	merge(s, e, a);
//}
//
//int main()
//{
//	int n, ans = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		int a, b;
//		scanf("%d %d", &a, &b);
//		ary[i][0] = a, ary[i][1] = b;
//	}
//	merge_sort(1, n, ary);
//	int len, p, last_index = 0;
//	cin >> len >> p;
//	n++;
//	ary[n][0] = len, ary[n][1] = INF;
//
//	for (int i = 1; i <= n; i++)
//	{
//		while (p - ary[i][0] < 0)
//		{
//			int maxi = pop();
//			if (maxi == 0) break;
//			p += ary[maxi][1];
//			ans++;
//		}
//		if(p - ary[i][0] >= 0)
//		{
//			if (i == n)
//			{
//				last_index = i;
//				break;
//			}
//			insert(i);
//		}
//	}
//
//	if (last_index == n) printf("%d", ans);
//	else printf("-1");
//	return 0;
//}