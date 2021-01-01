//#include<iostream>
//#include<cstdio>
//using namespace std;
//int arr[10], cnt[101];
//int main()
//{
//	int sum = 0;
//	for (int i = 1; i <= 9; i++) cin >> arr[i], sum += arr[i];
//	for (int i = 1; i <= 9; i++)
//		for (int j = 1; j<=9; j++)
//		{
//			if (i == j) continue;
//			if (sum - arr[i] - arr[j] == 100)
//			{
//				for (int k = 1; k <= 9; k++)
//					if (k != i && k != j) cnt[arr[k]]++;
//			
//				for (int k = 1; k <= 100; k++)
//					if (cnt[k] != 0)
//						printf("%d\n", k);
//
//				return 0;
//			}
//		}
//	return 0;
//}