//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#define N 5000
//using namespace std;
//int a[N + 1][2];
//int main()
//{
//	int n;
//	int sum = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		int t1, t2, index = i;
//		scanf("%d %d", &t1, &t2);
//		while (a[index - 1][0] > t1)
//		{
//			a[index][0] = a[index - 1][0], a[index][1] = a[index - 1][1];
//			index--;
//		}
//		a[index][0] = t1, a[index][1] = t2;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		int index1=-1, index2=-1;
//		for (int j = i - 1; j >= 1; j--)
//		{
//			if (a[j][1] == a[i][1])
//			{
//				index1 = a[j][0];
//				break;
//			}
//		}
//
//		for (int j = i+1; j <= n; j++)
//		{
//			if (a[j][1] == a[i][1])
//			{
//				index2 = a[j][0];
//				break;
//			}
//		}
//
//		if (index1 < 0 && index2 >= 0) sum += index2 - a[i][0];
//		else if (index1 >= 0 && index2 < 0) sum += a[i][0] - index1;
//		else if (index2 < 0 && index2 < 0) sum += 0;
//		else if (a[i][0] - index1 > index2 - a[i][0]) sum += index2 - a[i][0];
//		else sum += a[i][0] - index1;
//	}
//
//	printf("%d", sum);
//	return 0;
//}