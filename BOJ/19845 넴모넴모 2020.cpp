//#include<iostream>
//#include<cstdio>
//#define N 250000
//using namespace std;
//int ary[N + 1];
//int n, q;
//int find(int start, int val) {
//	int s = start, e = n, mid;
//	int ans = -1;
//
//	while (s <= e) {
//		mid = (s + e) / 2;
//		if (ary[mid] >= val) {
//			s = mid + 1;
//			ans = mid;
//		}
//		else e = mid - 1;
//	}
//
//	return ans;
//}
//
//int main() 
//{
//
//	cin >> n >> q;
//	for (int i = 1; i <= n; i++) scanf_s("%d", &ary[i]);
//	for (int i = 1; i <= q; i++) {
//		int a, b;
//		scanf_s("%d %d", &a, &b);
//		if (ary[b] < a) printf("0\n");
//		else {
//			int sum = ary[b] - a +1;
//			int idx = find(b-1, a);
//
//			if (idx == -1) printf("%d\n", sum);
//			else printf("%d\n", sum + idx - b);
//		}
//	}
//	return 0;
//}