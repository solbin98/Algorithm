//#include<iostream>
//#include<cstdio>
//#include<queue>
//
//#define INF 2147483648
//using namespace std;
//long long prime[101] = { 1 }, tmp, k, n;
//
//priority_queue < pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> queues;
//
//int main()
//{
//	cin >> k >> n;
//	for (int i = 1; i <= k; i++)
//	{
//		long long a;
//		cin >> a;
//		int idx = i;
//		while (prime[idx - 1] > a) prime[idx] = prime[idx - 1], idx--;
//		prime[idx] = a;
//	}
//
//	for (int i = 1; i <= k; i++)
//	{
//		pair <long long, long long> tmp = { prime[i], i };
//		queues.push(tmp);
//	}
//	long long cnt = 0, max = prime[k];
//	while (1)
//	{
//		pair<long long, long long> top = queues.top();	
//		queues.pop(), cnt++;
//		if (cnt == n)
//		{
//			printf("%lld", top.first);
//			break;
//		}
//
//		for (int i = top.second; i <= k; i++)
//		{
//			if (top.first * prime[i] > INF) break;
//			if (top.first * prime[i] > max && queues.size() > n - cnt) break;
//			queues.push({ top.first * prime[i], i });
//			if (top.first * prime[i] > max) max = top.first * prime[i];
//		}
//	}
//	return 0;
//}