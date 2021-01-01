//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#define N 10000
//using namespace std;
//pair<int, int> arr[N + 1];
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) scanf("%d %d", &arr[i].first, &arr[i].second);
//	sort(arr + 1, arr + n + 1);
//
//	int p1 = arr[1].first, p2 = arr[1].second;
//	int ans = 0;
//	for (int i = 2; i <= n; i++)
//	{
//		if (arr[i].first <= p2 && arr[i].second > p2) p2 = arr[i].second;
//		else if (arr[i].first <= p2 && arr[i].second <= p2) continue;
//		else
//		{
//			ans += p2 - p1;
//			p1 = arr[i].first, p2 = arr[i].second;
//		}
//	}
//	ans += p2 - p1;
//	printf("%d", ans);
//	return 0;
//}