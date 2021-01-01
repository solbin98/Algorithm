//#include<iostream>
//#include<cstdio>
//#include<string.h>
//#define N 10
//using namespace std;
//char str[N + 1];
//int a[N + 1], cnt[26 + 1], path[N + 1];
//int ans = 0, len = 0, idx = 0;
//
//void calc(int now)
//{
//	if (now == len)
//	{
//		bool flag = 0;
//		for (int i = 1; i < len; i++)
//		{
//			if (path[i] == path[i + 1])
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0) ans++;
//		return;
//	}
//	for (int i = 1; i <= idx; i++)
//	{
//		if (cnt[a[i]] != 0)
//		{
//			cnt[a[i]]--;
//			path[now+1] = a[i];
//			calc(now+1);
//			cnt[a[i]]++;
//		}
//	}
//}
//
//int main()
//{
//	cin >> str;
//	len = strlen(str);
//	for (int i = 0; str[i] != '\0'; i++)
//	{
//		if (cnt[str[i] - 'a' + 1] == 0) a[++idx] = str[i] - 'a' + 1;
//		cnt[str[i] - 'a' + 1]++;
//	}
//	calc(0);
//	printf("%d", ans);
//	return 0;
//}