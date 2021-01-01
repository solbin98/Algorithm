//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//
//#define N 1000000
//
//using namespace std;
//pair<int, int> arr[N + 1];
//int n, m;
//int chk[1001] = { 0 };
//
//int main()
//{
//	int ind = 1;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			scanf("%d", &arr[ind].first);
//			arr[ind].second = i;
//			ind++;
//		}
//	}
//	sort(arr + 1, arr + (n * m) + 1);
//
//	int L = 1, R = 1;
//	int cnt = n-1, ans = 1500000000;
//	chk[arr[1].second] = 1;
//	while(R < n*m)
//	{
//		if (cnt != 0)
//		{
//			R++;
//			if (chk[arr[R].second] == 0) cnt--;
//			chk[arr[R].second]++;
//		}
//		while(cnt == 0)
//		{
//			if (arr[R].first - arr[L].first < ans) ans = arr[R].first - arr[L].first;
//			chk[arr[L].second]--;
//			if (chk[arr[L].second] == 0) cnt++;
//			L++;
//		}
//	}
//	printf("%d", ans);
//}