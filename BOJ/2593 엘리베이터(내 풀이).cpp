//#include<iostream>
//#include<cstdio>
//#define N 100000
//#define M 200
//using namespace std;
//long long a[M + 1][2], links[M + 1][M + 1], ans[M + 1], pre_visit[M + 1];
//int queue[N + 1];
//int front = 1, tail = 0, nex = 0, level = 1;
//bool visit[M + 1];
//
//int is_possible(long long num, long long a, long long b)
//{
//	if (num - a < 0) return 0;
//	if ((num - a) % b == 0) return 1;
//	else return 0;
//}
//
//int main()
//{
//	long long n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++) scanf("%lld %lld", &a[i][0], &a[i][1]);
//	for (int i = 1; i <= m; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			if (i == j) continue;
//			long long idx = 0;
//			long long greater_first = 0, greater = 0, small = 0, small_first = 0;
//			if (a[i][1] > a[j][1]) greater = a[i][1], greater_first = a[i][0], small = a[j][1], small_first = a[j][0];
//			else greater = a[j][1], greater_first = a[j][0], small = a[i][1], small_first = a[i][0];
//			while (greater * idx + greater_first <= n && greater * idx + greater_first <= a[i][1] * a[j][1] + greater_first)
//			{
//				long long tmp = greater * idx + greater_first;
//				if (is_possible(tmp, small_first, small) == true)
//				{
//					links[i][j] = 1;
//					links[j][i] = 1;
//					break;
//				}
//				idx++;
//			}
//		}
//	}
//
//	long long a1, a2;
//	cin >> a1 >> a2;
//	for (int i = 1; i <= m; i++)
//	{
//		if (is_possible(a1, a[i][0], a[i][1]) == true) queue[++tail] = i, visit[i] = 1, pre_visit[i] = i;
//		nex = tail;
//	}
//
//	while (front <= tail)
//	{
//		int now = queue[front];
//		if (is_possible(a2, a[now][0], a[now][1]) == true)
//		{
//			printf("%d\n", level);
//
//			int idx = 1, tmp = now;
//			while (1)
//			{
//				ans[idx++] = tmp;
//				if (pre_visit[tmp] == tmp) break;
//				tmp = pre_visit[tmp];
//			}
//
//			for (int i = idx - 1; i >= 1; i--) printf("%d\n", ans[i]);
//			return 0;
//		}
//
//		for (int i = 1; i <= m; i++)
//		{
//			if (visit[i] == 0 && links[now][i] == 1)
//			{
//				visit[i] = 1;
//				queue[++tail] = i;
//				pre_visit[i] = now;
//			}
//		}
//
//		if (front == nex) nex = tail, level++;
//		front++;
//	}
//	printf("-1");
//	return 0;
//}