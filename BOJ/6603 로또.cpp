//#include<iostream>
//#include<cstdio>
//
//using namespace std;
//int arr[55], tmp[6];
//int k;
//
//void dfs(int n, int count)
//{
//	if (count == 6)
//	{
//		for (int i = 0; i < 6; i++) printf("%d ", tmp[i]);
//		printf("\n");
//		return;
//	}
//
//	for (int i = n + 1; i <= k; i++)
//	{
//		tmp[count] = arr[i];
//		dfs(i, count + 1);
//	}
//}
//
//
//int main()
//{
//	while (1)
//	{
//		cin >> k;
//		if (k == 0) break;
//		for (int i = 1; i <= k; i++) cin >> arr[i];
//		dfs(0, 0);
//		printf("\n");
//	}
//	return 0;
//}