//#include<iostream>
//#include<cstdio>
//#define N 5000000
//using namespace std;
//int a[N + 1], ans[N + 1];
//int main()
//{
//    int n, x, sum = 0;
//    cin >> n >> x;
//    for (int i = 1; i <= n; i++)
//    {
//        int rest = (n - i) * 26 + 1 + sum;
//        if (rest >= x) ans[i] = 1, sum++;
//        else
//        {
//            int diff = x - rest;
//            if (1 + diff > 26)
//            {
//                printf("!");
//                return 0;
//            }
//            ans[i] = 1 + diff;
//            sum += ans[i];
//        }
//    }
//    if (sum > x)
//    {
//        printf("!");
//        return 0;
//    }
//
//    for (int i = 1; i <= n; i++)
//        printf("%c", 'A'+ ans[i] - 1);
//    return 0;
//}