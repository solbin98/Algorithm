//#include<iostream>
//#include<cstdio>
//#include<queue>
//#include<algorithm>
//#define N 100005
//#define L 0
//#define R 1
//
//using namespace std;
//int a[N + 1], ans[N + 1][2], out[N + 1];
//priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> queues;
//
//void calc(int now, int val)
//{
//	while (queues.size() != 0)
//	{
//		if (queues.top().second == now)
//		{
//			if (queues.top().first >= val) break;
//			else queues.pop();
//		}
//		else
//		{
//			if (queues.top().first > val)
//			{
//				queues.push({ val, now });
//				break;
//			}
//			else queues.pop();
//		}
//	}
//	if (queues.empty()) queues.push({ val,now });
//}
//
//int main()
//{
//	int n, m;
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
//	cin >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int t1, t2;
//		scanf("%d %d", &t1, &t2);
//		calc(0, t1), calc(1, t2);
//	}
//	
//	int idx = 0, pos = 0;
//	while (queues.empty() == 0) 
//		ans[++idx][0] = queues.top().first, ans[idx][1] = queues.top().second, queues.pop();
//
//	int len = ans[idx][0];
//	sort(a + 1, a + len + 1);
//	for (int i = idx; i >= 1; i--)
//		if (ans[i][1] == L)
//		{
//			for (int j = ans[i][0]; j > ans[i - 1][0]; j--)  out[j] = a[len--];
//		}
//		
//	for(int i=1;i<=idx;i++)
//		if (ans[i][1] == R)
//		{
//			for (int j = ans[i-1][0]+1; j <= ans[i][0]; j++) out[j] = a[len--];
//		}
//
//	for (int i = ans[idx][0]+1; i <= n; i++) out[i] = a[i];
//	for (int i = 1; i <= n; i++) printf("%d ", out[i]);
//	return 0;
//}