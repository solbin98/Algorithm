//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#define N 1005
//#define INF 987654321
//using namespace std;
//
//int diff(char a, char b)
//{
//	int val = a - b;
//	if (val < 0) val *= -1;
//	return val;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		int sum[N + 1] = { 0 }, ans = INF, cnt_a = 0;
//		int cnt[N + 1] = { 0 };
//		char str[N + 1];
//		cin >> str;
//		int len = strlen(str);
//		for (int i = 1; i <= len; i++)
//		{
//			int min = INF;
//			if (min > diff('A', str[i - 1])) min = diff('A', str[i - 1]);
//			if (min > diff('Z', str[i - 1]) + 1) min = diff('Z', str[i - 1]) + 1;
//			sum[i] = sum[i - 1] + min;
//			if (i > 1) sum[i]++;
//			if (str[i - 1] != 'A') cnt[i] = cnt[i - 1] + 1, cnt_a++;
//			else cnt[i] = cnt[i - 1];
//
//		}
//
//		for (int i = 0; i <= len; i++)
//		{
//			for (int j = 0; j <= len; j++)
//			{
//				if (cnt[i] + cnt[len] - cnt[len - j] < cnt_a) continue;
//				if (i + j > len) continue;
//		
//				int tmp = 0;
//				if (i > 0 && j > 0) tmp += sum[i] + i - 1;
//				else if (i > 0 && j == 0) tmp += sum[i];
//				tmp += sum[len] - sum[len - j];
//				if (tmp < ans) ans = tmp;
//				
//
//				tmp = 0;
//	
//				if (j > 0 && i > 0) tmp += sum[len] - sum[len - j] + (j - 1) + sum[i] + 1;
//				else if (i == 0 && j > 0) tmp += sum[len] - sum[len-j];
//				if (tmp < ans && tmp > 0) ans = tmp;
//		
//			}
//		}
//		printf("%d\n", ans);
//	}
//	return 0;
//}