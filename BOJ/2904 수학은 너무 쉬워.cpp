//#include<iostream>
//#include<cstdio>
//#include<map>
//#define N 100
//using namespace std;
//int a[N + 1], sum[1000001] = { 0 };
//map<int, int> maps[101];
//
//int pows(int n, int r) {
//	if (r == 1) return n;
//	if (r % 2 == 0) {
//		int tmp = pows(n, r - 1);
//		return tmp * tmp;
//	}
//	else return n * pows(n, r - 1);
//}
//
//int main() {
//	int n;
//	cin >> n;
//
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//		int r = 2, tmp = a[i];
//		while (r * r <= tmp) {
//			if (tmp % r == 0) tmp /= r, maps[i][r]++, sum[r]++;
//			else r++;
//		}
//		maps[i][tmp]++, sum[tmp]++;
//	}
//
//	int ans = 1, count = 0;
//	for (int i = 2; i <= 1000000; i++) {
//		if (sum[i] != 0) {			
//			if (sum[i] < n) continue;
//
//			int r = sum[i] / n;
//			int minus = 0;
//			for (int j = 1; j <= n; j++) {
//				if(r > maps[j][i]) minus += r - maps[j][i];
//			}
//
//			count += minus;
//			ans *= pows(i, r);
//		}
//	}
//
//	printf("%d %d ", ans, count);
//	return 0;
//}