//#include<iostream>
//#include<cstdio>
//#define N 100
//using namespace std;
//int arr[N + 1], tmp[N+1], cnt[N + 1];
//int n, r = 2, idx = 1;
//bool visit[N + 1], flag = 0;
//
//int solve(int len, int max, int number, int visits)
//{
//	if (flag == 1) return 0;
//	int sum = len, cnts = max - visits;
//	for (int i = 0; i < max - visits; i++)
//	{
//		cnts += len + i - 1;
//	}
//	if (number + cnts > (n - len + 1)) return 0;
//	if (len > n)
//	{
//		if (number != 0) return 0;
//		if (visits != idx) return 0;
//
//		for (int i = 1; i < len; i++) printf("%c", 'A' + tmp[i] - 1);
//		printf("\n");
//		flag = 1;
//		return 0;
//	}
//	
//	for (int i = 1; i <= max; i++)
//	{
//		if (visit[i] == 1 && cnt[i] > 0)
//		{
//			cnt[i]--, tmp[len] = i;
//			solve(len + 1, max, number - 1, visits);
//			cnt[i]++;
//		}
//		else if (visit[i] == 0)
//		{
//			visit[i] = 1, tmp[len] = i, cnt[i] = len - 1;
//			solve(len + 1, max, number + len - 1, visits + 1);
//			visit[i] = 0, cnt[i] = 0;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{				
//		idx = i;
//		if (r-1 >= n) break;	
//		r *= 2;
//	}
//	solve(1, idx, 0, 0);
//	if (flag == 0) printf("-1");
//	return 0;
//}