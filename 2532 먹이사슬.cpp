//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#define N 500000
//#define INF 1000000009
//using namespace std;
//typedef struct
//{
//	int left, right;
//}info;
//
//info a[N + 1];
//
//bool compare(info a, info b)
//{
//	if (a.left == b.left) return a.right > b.right;
//	else return a.left < b.left;
//}
//
//int lis[N + 1];
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		int num;
//		scanf("%d %d %d", &num, &a[i].left, &a[i].right);
//	}
//	sort(a + 1, a + n + 1, compare);
//	int top = 1;
//	lis[0] = INF;
//	for (int i = 1; i <= n; i++)
//	{
//		if (a[i].left == a[i - 1].left && a[i].right == a[i - 1].right) continue;
//		
//		int idx = top+1;
//		if (top == 1) lis[top] = a[i].right;
//		else
//		{
//			int low = 1, high = top, mid;
//			while (low <= high)
//			{
//				mid = (low + high) / 2;
//				if (lis[mid] < a[i].right) high = mid - 1, idx = mid;
//				else low = mid + 1;
//			}
//			lis[idx] = a[i].right;
//		}
//		if (top < idx) top = idx;
//	
//	}
//	printf("%d", top);
//	return 0;
//}