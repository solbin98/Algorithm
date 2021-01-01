//#include<iostream>
//#include<cstdio>
//#define N 100
//using namespace std;
//char a[N + 1], b[N + 1];
//int arr[N*3+1];
//int cnt[26] = { 3,2,1,2,4,3,1,3,1,1,3,1,3,2,1,2,2,2,1,2,1,1,1,2,2,1 };
//int main()
//{
//	int len1, len2;
//	cin >> len1 >> len2;
//	cin >> a >> b;
//	int idx1 = 0, idx2 = 0, idx = 0;
//	while (idx1 < len1 && idx2 < len2)
//	{
//		arr[++idx] = cnt[a[idx1++] - 'A'];
//		arr[++idx] = cnt[b[idx2++] - 'A'];
//	}
//	for(int i=idx1;i<len1;i++) arr[++idx] = cnt[a[idx1++] - 'A'];
//	for (int i = idx2; i < len2; i++) arr[++idx] = cnt[b[idx2++] - 'A'];
//	
//	while (idx > 2)
//	{
//		for (int i = 1; i < idx; i++)
//			arr[i] = (arr[i] + arr[i + 1])%10;
//		idx--;
//	}
//	printf("%d%%", arr[1] * 10 + arr[2]);
//	return 0;
//}