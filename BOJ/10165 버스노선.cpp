//#include<iostream>
//#include<cstdio>
//
//#define N 500000
//#define INF 987654321
//using namespace std;
//int a[N + 1][2];
//int tmp[N + 1][2], tmp_ans[N+1], ans[N + 1];
//bool chk[N + 1];
//
//void merge(const int s, const int e)
//{
//	int mid = (s + e) / 2;
//	int i1 = s, i2 = mid + 1, index = 1;
//	while (i1 <= mid && i2 <= e)
//	{
//		if (a[i1][1] > a[i2][1])
//		{
//			tmp[index][0] = a[i1][0], tmp[index][1] = a[i1][1];
//			tmp_ans[index] = ans[i1];
//			index++, i1++;
//		}
//		else if (a[i1][1] == a[i2][1])
//		{
//			if (a[i1][0] < a[i2][0])
//			{
//				tmp[index][0] = a[i1][0], tmp[index][1] = a[i1][1];
//				tmp_ans[index] = ans[i1];
//				index++, i1++;
//			}
//			else
//			{
//				tmp[index][0] = a[i2][0], tmp[index][1] = a[i2][1];
//				tmp_ans[index] = ans[i2];
//				index++, i2++;
//			}
//		}
//		else
//		{
//			tmp[index][0] = a[i2][0], tmp[index][1] = a[i2][1];
//			tmp_ans[index] = ans[i2];
//			index++, i2++;
//		}
//	}
//
//	for (int i = i1; i <= mid; i++) tmp[index][0] = a[i][0], tmp[index][1] = a[i][1], tmp_ans[index] = ans[i], index++;
//	for (int i = i2; i <= e; i++) tmp[index][0] = a[i][0], tmp[index][1] = a[i][1], tmp_ans[index] = ans[i], index++;
//	for (int i = s; i <= e; i++) a[i][0] = tmp[i - s + 1][0], a[i][1] = tmp[i - s + 1][1], ans[i] = tmp_ans[i-s+1];
//}
//
//void merge_sort(const int s, const int e)
//{
//	int mid = (s + e) / 2;
//	if (s >= e) return;
//	merge_sort(s, mid);
//	merge_sort(mid + 1, e);
//	merge(s, e);
//}
//
//int main()
//{
//	int n, m;
//	cin >> n;
//	cin >> m;
//	for (int i = 1; i <= m; i++) scanf("%d %d", &a[i][0], &a[i][1]), ans[i] = i;
//	merge_sort(1, m);
//
//	int last = -1;
//	int a_min = INF, b_max = 0;
//	for (int i = 1; i <= m; i++) // B 제거
//	{
//		if (a[i][0] < a[i][1]) continue;
//		if (a[i][0] < a_min) a_min = a[i][0];
//		if (a[i][1] > b_max) b_max = a[i][1];
//		if ((last == -1) || last > a[i][0]) last = a[i][0];
//		else chk[i] = 1;
//	}
//	
//	last = -1;
//	for (int i = 1; i <= m; i++) // A 제거
//	{
//		if (a[i][0] > a[i][1]) continue;
//		if ((last == -1) || last > a[i][0]) last = a[i][0];
//		else chk[i] = 1;
//	}
//
//
//	for (int i = 1; i <= m; i++)
//	{
//		if (a[i][0] < a[i][1])
//		{
//			if (a[i][0] >= a_min) chk[i] = 1;
//			if (a[i][1] <= b_max) chk[i] = 1;
//		}
//	}
//	
//	bool output[N + 1] = { 0 };
//	for (int i = 1; i <= m; i++)
//	{
//		if (chk[i] == 0) output[ans[i]] = true;
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		if (output[i] == true) printf("%d ", i);
//	}
//	return 0;
//}