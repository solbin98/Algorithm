//#include<iostream>
//#include<cstdio>
//#include<queue>
//
//#define N 5000000
//#define M 100000
//
//using namespace std;
//int is_prime[N + 1] = { 1,1 }, chk[N + 1];
//priority_queue<int, vector<int>, less<int>> a, b;
//
//int find(priority_queue<int, vector<int>, less<int>> &queues)
//{
//	int cnt = 0, pop = 0, idx = 0;
//	int tmp[4] = { 0 };
//	while (queues.empty() == 0)
//	{
//		if (cnt == 3) break;
//		pop = queues.top();
//		tmp[++idx] = pop;
//		queues.pop();
//		cnt++;
//	}
//	for (int i = 1; i <= idx; i++) queues.push(tmp[i]);
//	if (cnt == 3) return pop;
//	else return 0;
//}
//
//int main()
//{
//	for (int i = 2; i * i <= N; i++)
//	{
//		if (is_prime[i] == 0)
//		{
//			for (int j = i + i; j <= N; j += i) is_prime[j] = 1;
//		}
//	}
//
//	int n;
//	long long score1 = 0, score2 = 0;
//	cin >> n;
//
//	for (int i = 1; i <= n; i++)
//	{
//		int t1, t2;
//		scanf("%d %d", &t1, &t2);
//
//		if (is_prime[t1] == 1)
//		{
//			int tmp = find(b);
//			if (tmp == 0) tmp = 1000;
//			score2 += tmp;
//		}
//		else if (is_prime[t1] == 0)
//		{
//			if (chk[t1] == 1) score1 -= 1000;
//			else a.push(t1), chk[t1] = 1;
//		}
//
//		if (is_prime[t2] == 1)
//		{
//			int tmp = find(a);
//			if (tmp == 0) tmp = 1000;
//			score1 += tmp;
//		}
//		else if (is_prime[t2] == 0)
//		{
//			if (chk[t2] == 1) score2 -= 1000;
//			else b.push(t2), chk[t2] = 1;
//		}
//	}
//
//	if (score1 > score2) printf("소수의 신 갓대웅");
//	else if (score1 < score2) printf("소수 마스터 갓규성");
//	else printf("우열을 가릴 수 없음");
//	return 0;
//}