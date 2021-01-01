//#include<iostream>
//#include<cstdio>
//#include<queue>
//using namespace std;
//typedef long long l;
//priority_queue<l, vector<l>, less<l>> pq;
//int main()
//{
//	l n, h, t, cnt = 0;
//	cin >> n >> h >> t;
//
//	for (l i = 1; i <= n; i++) {
//		l tmp;
//		scanf_s("%lld", &tmp);
//		pq.push(tmp);
//	}
//
//	for (l i = 1; i <= t+1; i++) {
//		l tmp = pq.top();
//		if (tmp < h) {
//			cnt = i - 1;
//			break;
//		}
//		pq.pop();
//		if(i <= t && tmp != 1) tmp /= 2;
//		pq.push(tmp);
//	}
//
//	if (pq.top() >= h) printf("NO\n%lld",pq.top());
//	else printf("YES\n%lld",cnt);
//	return 0;
//}