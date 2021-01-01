//#include<iostream>
//#include<cstdio>
//#include<queue>
//#define N 5000
//using namespace std;
//queue <int> queues;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) queues.push(i);
//	int cnt = 1, len = n;
//	printf("<");
//	while (len >= 1)
//	{		
//		if (cnt == m)
//		{
//			printf("%d", queues.front());
//			queues.pop();
//			if (len != 1) printf(", ");
//			cnt = 1;
//			len--;
//		}
//		else
//		{
//			int front = queues.front();
//			queues.pop();
//			queues.push(front);
//			cnt++;
//		}
//	}
//	printf(">");
//	return 0;
//}