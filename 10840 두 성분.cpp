//#include<iostream>
//#include<cstdio>
//#include<string.h>
//
//#define N 1500
//using namespace std;
//char a[N + 1], b[N + 1];
//int len_a, len_b;
//
//int min(int a, int b)
//{
//    if (a > b) return b;
//    else return a;
//}
//
//int find(int len)
//{
//    for (int i = 0; i < len_a - len + 1; i++)
//    {
//        int cnt_a[27] = { 0 }, cnt_b[27] = { 0 };
//        int number_of_not = 0;
//
//        for (int j = i; j < i + len; j++) cnt_a[a[j] - 'a']++;
//        for (int j = 0; j < len; j++)
//        {
//            cnt_b[b[j] - 'a']++;
//            if (cnt_b[b[j] - 'a'] > cnt_a[b[j] - 'a']) number_of_not++;
//        }
//
//        if (number_of_not == 0) return 1;
//        
//        for (int j = len; j < len_b; j++)
//        {
//            if (cnt_b[b[j - len] - 'a'] > cnt_a[b[j - len] - 'a']) number_of_not--;
//            cnt_b[b[j - len] - 'a']--, cnt_b[b[j] - 'a']++;
//            if (cnt_b[b[j] - 'a'] > cnt_a[b[j] - 'a']) number_of_not++;
//            if (number_of_not == 0)
//            {
//                printf("len_a : %d len_b : %d\n", len_a, len_b);
//                printf("i : %d j : %d\n", i, j);
//                return 1;
//            }
//        }
//    }
//    return 0;
//}
//
//int main()
//{
//    int ans = 0;
//    cin >> a;
//    cin >> b;
//    len_a = strlen(a), len_b = strlen(b);
//    int low = 0, high = min(len_a, len_b), mid;
//    while (low <= high)
//    {
//        mid = (low + high) / 2;
//        printf("mid : %d\n", mid);
//        if (find(mid) == 1) {
//            low = mid + 1;
//            if (ans < mid) ans = mid;
//        }
//        else high = mid - 1;
//    }
//    printf("%d", ans);
//    return 0;
//}