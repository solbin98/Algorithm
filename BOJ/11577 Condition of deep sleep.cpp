//#include<iostream>
//#include<cstdio>
//#define N 100002
//using namespace std;
//int arr[N + 1], nexts[N + 1], pos[N + 1];
//
//int main()
//{
//	int s, k, ans = 0;
//	int idx = 0;
//	cin >> s >> k;
//	for (int i = 1; i <= s; i++) scanf("%d", &arr[i]);
//	for (int i = 1; i <=s; i++)
//	{
//		if (pos[i-1] > idx || i <= nexts[pos[i - 1]]) pos[i] = pos[i - 1];
//		else pos[i] = pos[i - 1] + 1;
//		
//		int cnt = idx - pos[i] + 1;
//		if (idx == 0) cnt = 0;
//
//		if (arr[i] == 1 && cnt % 2 == 0 && i + k - 1 <= s)
//		{
//			nexts[++idx] = i + k - 1;
//			ans++;
//		}
//		else if (arr[i] == 0 && cnt % 2 == 1 && i + k - 1 <= s)
//		{
//			nexts[++idx] = i + k - 1;
//			ans++;
//		}
//
//		if (arr[i] == 1 && cnt % 2 == 0 && i > s - k + 1) ans = -1;
//		else if (arr[i] == 0 && cnt % 2 == 1 && i > s - k + 1) ans = -1;
//	}
//
//	if (ans == -1) printf("Insomnia");
//	else printf("%d", ans);
//	return 0;
//}