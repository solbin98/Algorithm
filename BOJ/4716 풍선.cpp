//#include<cstdio>
//#include<iostream>
//#define N 1005
//#define abs(a,b) ((a-b < 0)? (b-a) : (a-b))
//using namespace std;
//
//int main()
//{
//	while (1)
//	{
//		int arr[N + 1][3] = { 0 };
//		int n, a, b;
//		cin >> n >> a >> b;
//
//		if (n == 0 && a == 0 && b == 0) break;
//
//		for (int i = 1; i <= n; i++) scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
//		for (int i = n - 1; i >= 1; i--)
//			for (int j = 1; j <= i; j++)
//			{
//				if (abs(arr[j][1], arr[j][2]) < abs(arr[j + 1][1], arr[j + 1][2]))
//				{
//					int tmp[3] = { arr[j][0], arr[j][1], arr[j][2] };
//					for (int k = 0; k < 3; k++) arr[j][k] = arr[j + 1][k];
//					for (int k = 0; k < 3; k++) arr[j + 1][k] = tmp[k];
//				}
//			}
//		int dis = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			if (arr[i][1] > arr[i][2])
//			{
//				if (b - arr[i][0] < 0)
//					dis += (b * arr[i][2]) + ((arr[i][0] - b) * arr[i][1]), a -= arr[i][0] - b, b = 0;
//
//				else
//				{
//					b -= arr[i][0];
//					dis += arr[i][2] * arr[i][0];
//				}
//			}
//			else
//			{
//				if (a - arr[i][0] < 0)
//					dis += (a)*arr[i][1] + ((arr[i][0] - a) * arr[i][2]), b -= arr[i][0] - a, a = 0;
//
//				else
//				{
//					a -= arr[i][0];
//					dis += arr[i][1] * arr[i][0];
//				}
//			}
//		}
//
//		cout << dis << endl;
//	}
//}