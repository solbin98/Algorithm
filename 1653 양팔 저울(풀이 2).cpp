//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<deque>
//#define N 100000
//using namespace std;
//int a[N + 1], ranks[N + 1];
//bool chk(int mid)
//{
//	deque <int> stack[N + 1];
//	int ary[N + 1] = { 0 }, pos[N + 1] = { 0 };
//	for (int i = 1; i <= mid; i++) ary[i] = a[i];
//	sort(ary + 1, ary + mid + 1);
//	for (int i = 1; i <= mid; i++) ranks[ary[i]] = i;
//	for (int i = 1; i <= mid; i++) ary[i] = ranks[a[i]], ranks[a[i]] = 0;
//
//	int next = 1, idx = 0;
//	for (int i = 1; i <= mid; i++)
//	{
//		if (ary[i] == next)
//		{
//			next++;
//			while (pos[next] != 0) stack[pos[next]].pop_back(), next++;
//		}
//
//		else if (pos[ary[i] + 1] == 0)
//		{
//			int lo = 1, hi = idx, mid = 0;
//			int c = 0;
//			while (lo <= hi)
//			{
//				mid = (lo + hi) / 2;
//				if (stack[mid].empty() || ary[i] > stack[mid].back()) lo = mid + 1;
//				else c = mid, hi = mid - 1;
//			}
//
//			if (c == 0) c = ++idx;
//			stack[c].push_back(ary[i]);
//			pos[ary[i]] = c;
//
//			if (stack[c - 1].size() != 0 && stack[c - 1][0] > ary[i]) return 0;
//		}
//
//		else
//		{
//			if (stack[pos[ary[i] + 1]].back() != (ary[i] + 1)) return 0;
//			stack[pos[ary[i] + 1]].push_back(ary[i]);
//			pos[ary[i]] = pos[ary[i] + 1];
//		}
//	}
//
//	for (int i = 1; i <= mid; i++) if (stack[i].size() != 0) return 0;
//	return 1;
//}
//
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//
//	int lo = 1, hi = n, mid = 1, ans = 2;
//	while (lo <= hi)
//	{
//		mid = (lo + hi) / 2;
//		if (chk(mid) == 1)
//		{
//			if (ans < mid) ans = mid;
//			lo = mid + 1;
//		}
//		else hi = mid - 1;
//	}
//
//	printf("%d", ans);
//	return 0;
//}