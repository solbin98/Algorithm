//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<queue>
//
//#define MOD 500001
//#define N 100000
//
//using namespace std;
//long long a[N + 1], pre[N + 1], qes[100];
//vector<pair<long long, long long>> idx[MOD + 1], hashed[MOD + 1];
//int path[N + 1] = { 0 };
//
//int main()
//{
//	long long n, k, r;
//	r = 1;
//	cin >> n >> k;	
//	for (int i = 1; i < k; i++) r *= 2;
//	for (int i = 1; i <= n; i++)
//	{
//		char tmp[40];
//		scanf("%s", tmp);
//		long long num = 0, re = r;
//		for (int j = 0; tmp[j] != '\0'; j++) 
//			num += (tmp[j] - '0') * re, re /= 2;
//		idx[num % MOD].push_back({ num,i });
//		a[i] = num;
//	}
//
//
//	queue<pair<long long, long long>> queues;
//	queues.push({ a[1],1 }), hashed[a[1] % MOD].push_back({ a[1] , 1 });
//	pre[1] = 1;
//
//	bool flag = 0;
//	long long front = 1, tail = 1, level = 0, next_level = 1;
//	while (queues.empty() == 0)
//	{
//		pair<long long, long long> top = queues.front();
//		if (level >= 50) break;
//		long long res = 1;
//		for (int i = 1; i <= k; i++)
//		{
//			bool chk = 0;
//			long long t_number = top.first;
//
//			if ((t_number | res) == t_number) t_number -= res;
//			else t_number += res;
//			
//			if (idx[t_number % MOD].size() == 0) chk = 1;
//			for (int j = 0; j < hashed[t_number % MOD].size(); j++)
//				if (hashed[t_number % MOD][j].first == t_number)
//				{
//					chk = 1;
//					break;
//				}
//
//			if (chk == 0)
//			{	
//				for (int j = 0; j < idx[t_number % MOD].size(); j++)
//				{
//					if (idx[t_number % MOD][j].first == t_number)
//					{
//					int indexs = idx[t_number % MOD][j].second;
//						pre[indexs] = top.second;
//						hashed[t_number % MOD].push_back({ t_number, indexs });
//						queues.push({ t_number,indexs });
//						break;
//					}
//				}
//				tail++;
//			}
//			res *= 2;
//		}
//	
//		queues.pop();
//		if (front == next_level)
//		{
//			level++;
//			next_level == tail;
//		}
//		front++;
//	}
//	int q;
//	cin >> q;
//
//	for (int i = 1; i <= q; i++)
//	{
//		int que;
//		cin >> que;
//		if (pre[que] == 0) printf("-1");
//		else
//		{
//			int ind = 0, now = que;
//			while (1)
//			{
//				path[++ind] = now;
//				if (now == pre[now]) break;
//				now = pre[now];
//			}
//			for (int i = ind; i >= 1; i--) printf("%d ", path[i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}