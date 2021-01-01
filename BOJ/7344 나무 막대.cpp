//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#define N 5000
//using namespace std;
//pair <int, int>arr[N + 1];
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		bool visit[N + 1] = { 0 };
//		int n, ans = 0;
//		cin >> n;
//		for (int i = 1; i <= n; i++) scanf("%d %d",&arr[i].first, &arr[i].second);
//		sort(arr, arr + n + 1);
//		for (int i = 1; i <= n; i++)
//		{
//			if (visit[i] == 1) continue;
//			int l = arr[i].first, w = arr[i].second;
//			for (int j = i + 1; j <= n; j++)
//			{
//				if (visit[j] == 1) continue;
//				if (arr[j].first >= l && arr[j].second >= w)
//				{
//					visit[j] = 1;
//					l = arr[j].first, w = arr[j].second;
//				}
//			}
//			ans++;
//		}
//		printf("%d\n", ans);
//	}
//	return 0;
//}