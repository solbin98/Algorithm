//#include<iostream>
//#include<cstdio>
//#define N 2000000
//#define M 100000
//#define INF 987654321
//
//using namespace std;
//int chk[N + 1];
//bool is_not_prime[N + 1] = { 1 ,1 };
//int queue[N + 1] = { 0 };
//int main()
//{
//
//	for (int i = 2; i <= M; i++)
//		if (is_not_prime[i] == 0)
//			for (int j = i + i; j <= M; j += i) is_not_prime[j] = 1;
//
//	int T, n, a, b;
//	cin >> T;
//	while (T--)
//	{
//		scanf("%d %d %d", &n, &a, &b);
//		for (int i = 0; i <= N; i++) chk[i] = INF;
//		int front = 1, tail = 1, flag = 0;
//		queue[front] = n;
//		chk[n] = 0;
//
//		while (front <= tail)
//		{
//			int now = queue[front];
//			if (is_not_prime[now] == 0 && now >= a && now <= b)
//			{
//				printf("%d\n", chk[now]);
//				flag = 1;
//				break;
//			}
//			if (chk[now / 2] > chk[now] + 1) queue[++tail] = now / 2, chk[now / 2] = chk[now] + 1;
//			if (now - 1 >= 0 && chk[now - 1] > chk[now] + 1) queue[++tail] = now - 1, chk[now - 1] = chk[now] + 1;
//			if (chk[now / 3] > chk[now] + 1) queue[++tail] = now / 3, chk[now / 3] = chk[now] + 1;
//			if (now + 1 <= N && chk[now + 1] > chk[now] + 1) queue[++tail] = now + 1, chk[now + 1] = chk[now] + 1;
//			front++;
//		}
//		if (flag == 0) printf("-1\n");
//	}
//	return 0;
//}