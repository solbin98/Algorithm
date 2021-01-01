//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#define N 100000
//
//using namespace std;
//int top = 0;
//
//pair<int, int> arr[N + 1], stack[N + 1];
//
//int main()
//{
//    int n;
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        int a, b, c, d;
//        scanf("%d %d %d %d", &a, &b, &c, &d);
//        arr[i].second = a * 100 + b, arr[i].first = c * 100 + d;
//    }
//    sort(arr + 1, arr + n + 1);
//    for (int i = 1; i <= n; i++)
//    {
//        int tmp = arr[i].second;
//        arr[i].second = arr[i].first;
//        arr[i].first = tmp;
//    }
//
//    stack[0].first = 301, stack[0].second = 301;
//    for (int i = 1; i <= n; i++)
//    {
//        if (arr[i].second <= 301) continue;
//        if (top == 0) stack[++top] = arr[i];
//        else
//        {
//            while (stack[top - 1].second >= arr[i].first) top--;
//            stack[++top] = arr[i];
//        }
//    }
//    stack[top + 1].first = 1131;
//    for (int i = 0; i <= top; i++)
//    {
//        if (stack[i].second < stack[i + 1].first)
//        {
//            top = 0;
//            break;
//        }
//        if (stack[i].second > 1130)
//        {
//            top = i;
//            break;
//        }
//    }
//    printf("%d", top);
//    return 0;
//}
