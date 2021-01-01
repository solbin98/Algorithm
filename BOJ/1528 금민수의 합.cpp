//#include<iostream>
//#include<cstdio>
//#define N 1000000
//#define INF 987654321
//
//using namespace std;
//
//int dp[N + 1][2], cnt[N + 1];
//int arr[129], tmp[30] = { 0, 0 };
//
//
//int pows(int n)
//{
//	int r = 1;
//	for (int i = 1; i <= n; i++) r *= 10;
//	return r;
//}
//int main()
//{
//	int n;
//	cin >> n;
//
//	int sum = 0, ind = 1, length = 1;
//	while (sum <= N)
//	{
//		int index = 1;
//		tmp[index]++;
//		while (tmp[index] > 2)
//		{
//			tmp[index] = 1;
//			index++;
//			tmp[index]++;
//		}
//		if (length < index) length = index;
//		int t_sum = 0;
//		for (int k = length; k >= 1; k--)
//		{
//			if (tmp[k] == 1) t_sum += pows(k - 1) * 4;
//			else t_sum += pows(k - 1) * 7;
//		}
//		sum = t_sum;
//		arr[ind++] = sum;
//	}
//	for (int i = 1; i <= N; i++)
//	{
//		if (dp[i][0] != 0) continue;
//		int min = INF, min_index = INF;
//		for (int j = 1; j < ind && i - arr[j] >= 0; j++)
//		{
//			if (dp[i - arr[j]][0] != -1)
//			{
//				if (min > dp[i - arr[j]][0]) min = dp[i - arr[j]][0], min_index = j;
//			}
//		}
//		if (min == INF) dp[i][0] = -1;
//		else
//		{
//			dp[i][0] = min + 1;
//			dp[i][1] = min_index;
//		}
//	}
//	
//	if (dp[n][0] == -1)
//	{
//		cout << "-1";
//		return 0;
//	}
//	int i = n;
//	while (i > 0)
//	{
//		cnt[arr[dp[i][1]]]++;
//		i = i - arr[dp[i][1]];
//	}
//
//	for (int i = 1; i <= N; i++)
//	{
//		while (cnt[i] != 0) printf("%d ", i), cnt[i]--;
//	}
//	return 0;
//}