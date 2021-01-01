//#include<iostream>
//#include<cstdio>
//#include<queue>
//#define N 1000
//using namespace std;
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		deque<char> arr;
//		int n;
//		char a[N + 1];
//		cin >> n;
//		for (int i = 1; i <= n; i++) cin >> a[i];
//		arr.push_front(a[1]);
//		for (int i = 2; i <= n; i++)
//		{
//			if (arr.front() >= a[i]) arr.push_front(a[i]);
//			else arr.push_back(a[i]);
//		}
//		while (arr.empty() == 0) printf("%c", arr.front()), arr.pop_front();
//		printf("\n");
//	}
//	return 0;
//}