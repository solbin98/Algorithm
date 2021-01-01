//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//
//#define N 100005
//#define INF 98765430
//using namespace std;
//
//pair<int, int> arr[N + 1];
//int stack[N + 1][2] = { {-INF,-INF} };
//bool compare(pair<int,int> a, pair<int,int> b)
//{
//	if (a.second == b.second) return a.first < b.first;
//	else return a.second < b.second;
//}
//
//int main()
//{
//	int m;
//	while (1)
//	{
//		int len = 0, top = 0;
//		cin >> m;
//		if (cin.eof() == 1) break;
//		while (1)
//		{
//			int a, b;
//			scanf("%d %d", &a, &b);
//
//			if (a == 0 && b == 0) break;
//			if (a < 0) a = 0;
//			if (b <= 0) continue;
//			len++;
//
//			arr[len].first = a, arr[len].second = b;
//		}
//		sort(arr + 1, arr + len + 1, compare);
//		for (int i = 1; i <= len; i++)
//		{
//			if (stack[top][1] == arr[i].second) continue;
//			while ((top > 0) && ((stack[top][0] >= arr[i].first) || (stack[top - 1][1] >= arr[i].first))) top--;
//			stack[++top][0] = arr[i].first, stack[top][1] = arr[i].second;
//		}
//		int last = 0, flag = 1;
//		for (int i = 1; i <= top; i++)
//		{
//			if (stack[i][0] > last)
//			{
//				flag = 0;
//				break;
//			}
//
//			if (stack[i][1] >= m)
//			{
//				top = i;
//				break;
//			}
//			last = stack[i][1];
//		}
//		if (stack[top][1] < m) flag = 0;
//		if (flag == 0) top = 0;
//
//		printf("%d\n", top);
//	}
//	return 0;
//}