//#include<iostream>
//#include<cstdio>
//#include<string.h>
//#include<vector>
//
//#define N 500000
//#define INF 8112345
//using namespace std;
//char str[N + 1][10];
//int arr[N + 1];
//vector<int> hashed[INF+1];
//bool chk[N + 1];
//int main()
//{
//	long long k, l;
//	cin >> k >> l;
//	for (int i = 1; i <= l; i++)
//	{
//		int r = 1, num = 0;
//		scanf("%s", str[i]);
//		for (int j = strlen(str[i]) - 1; j >= 0; j--)
//		{
//			num += (str[i][j] - '0') * r;
//			r *= 10;
//		}
//		arr[i] = num;
//	}
//
//	for (int i = l; i >= 1; i--)
//	{
//		int key = arr[i] % INF;
//		bool flag = 0;
//
//		for (int j = 0; j < hashed[key].size(); j++)
//		{
//			if (hashed[key][j] == arr[i])
//			{
//				flag = 1;
//				chk[i] = 1;
//				break;
//			}
//		}
//		if (flag == 0) hashed[key].push_back(arr[i]);
//	}
//
//	long long cnts = 0;
//	for (int i = 1; i <= l; i++)
//	{
//		if (chk[i] == 0) printf("%s\n", str[i]), cnts++;
//		if (cnts == k) break;
//	}
//	return 0;
//}