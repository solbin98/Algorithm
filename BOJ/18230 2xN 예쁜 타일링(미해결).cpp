//#include<iostream>
//#include<cstdio>
//#define N 2000
//#define MAX 1000000
//
//using namespace std;
//int A[N + 1], B[N + 1];
//int sort_A[MAX+1], sort_B[MAX+1], ans[N + 1];
//
//int main()
//{
//	int n, a, b, tmp;
//	cin >> n >> a >> b;
//	for (int i = 1; i <= a; i++) scanf("%d", &tmp), sort_A[tmp]++;
//	for (int i = 1; i <= b; i++) scanf("%d", &tmp), sort_B[tmp]++;
//
//	int index_a = 1, index_b = 1;
//	for (int i = MAX; i >= 0; i--)
//	{
//		while (sort_A[i] != 0) A[index_a++] = i, sort_A[i]--;
//		while (sort_B[i] != 0) B[index_b++] = i, sort_B[i]--;
//	}
//	index_a--, index_b--;
//	int ans_index = 1;
//	int a_index = 1, first_a = 0;
//	for (int i = 1; i <= index_b; i++)
//	{
//		if (n - 2 >= 0)
//		{
//			n -= 2;
//			ans[ans_index++] = B[i];
//			first_a = ans_index;
//		}
//		else break;
//	}
//
//	for (int i = 1; i <= index_a; i++)
//	{
//		if (n - 1 >= 0)
//		{
//			if (first_a == 0) first_a = ans_index;
//			n--, a_index++;
//			ans[ans_index++] = A[i];
//		}
//		else break;
//	}
//
//	for (int i = first_a-1; i >= 1; i--)
//	{
//		if (a_index+1 <= index_a)
//		{
//			if (A[a_index] + A[a_index + 1] > ans[i])
//			{
//				ans[i] = A[a_index] + A[a_index + 1];
//				a_index += 2;
//			}
//		}
//		else break;
//	}
//
//	int sum = 0;
//	for (int i = 1; i < ans_index; i++) sum += ans[i];
//	printf("%d", sum);
//	return 0;
//}