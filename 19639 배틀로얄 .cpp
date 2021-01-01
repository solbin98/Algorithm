//#include<iostream>
//#include<cstdio>
//#define N 100000
//using namespace std;
//int a[N + 1], b[N + 1], ans[N * 2 + 1];
//int main()
//{
//	int x, y, m, sum, idx = 0;
//	int idx_x = 1, idx_y = 1;
//	cin >> x >> y >> m;
//	sum = m;
//	for (int i = 1; i <= x; i++) scanf_s("%d", &a[i]);
//	for (int i = 1; i <= y; i++) scanf_s("%d", &b[i]);
//
//	while(idx_x <= x) {
//		while (sum <= (m / 2) && idx_y <= y) sum += b[idx_y], ans[++idx] = idx_y++;
//		if (sum - a[idx_x] <= 0) {
//			printf("0");
//			return 0;
//		}
//		sum -= a[idx_x];
//		ans[++idx] = -(idx_x);
//		idx_x++;
//	}
//
//	if (idx_y != y) {
//		for (int i = idx_y; i <= y; i++) ans[++idx] = i;
//	}
//
//	for (int i = 1; i <= idx; i++) {
//		printf("%d\n", ans[i]);
//	}
//}