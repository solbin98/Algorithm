//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//#define N 300000
//using namespace std;
//pair <int, int> a[N + 1];
//priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int,int>>> q, save;
//int counts[N + 1];
//int main()
//{
//	int n, idx = 1;
//	int ans = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		pair<int, int> tmp;
//		scanf("%d %d", &tmp.first, &tmp.second);
//		q.push(tmp);
//	}
//	for (int i = 1; i <= n; i++) a[i].first = q.top().first, a[i].second = q.top().second, q.pop();
//	for (int i = 1; i <= n; i++) // <종료시간, 번호>
//	{
//		while (q.empty() == 0 && q.top().first <= a[i].first)
//		{
//			pair<int, int>tmp;
//			tmp.first = q.top().second, tmp.second = q.top().first;
//			save.push(tmp);
//			q.pop();
//		}
//
//		if (save.empty() == true)
//		{
//			pair<int, int>tmp;
//			tmp.first = a[i].second, tmp.second = idx;
//			counts[idx++]++;
//			q.push(tmp);
//			ans++;
//		}
//		else
//		{
//			pair<int, int> tmp;
//			tmp = save.top();
//			counts[tmp.first]++;
//			save.pop();
//			tmp.second = tmp.first, tmp.first = a[i].second;
//			q.push(tmp);
//		}
//	}
//	printf("%d\n", ans);
//	for (int i = 1; i < idx; i++) printf("%d ", counts[i]);
//	return 0;
//}