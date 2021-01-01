//#include<iostream>
//#include<cstdio>
//#define N 1000005
//using namespace std;        
//int ary_min[N + 1] = { 0 }, ary_max[N + 1] = { 0 };
//char str[N + 1];
//int main()
//{
//    int T;
//    cin >> T;
//    while (T--)
//    {
//        for (int i = 0; i <= N; i++) 
//            ary_min[i] = 0, ary_max[i] = 0;
//
//        int len;
//        cin >> len >> str;
//        int min_idx = 0, max_idx = 0;
//        for (int i = 0; i < len; i++)
//        {
//            if (str[i] == '1') ary_min[++min_idx] = i + 1;
//            if (str[i] == '?' || str[i] == '1') ary_max[++max_idx] = i+1;
//        }
//
//        int min_len = (len - ary_min[1] + 1) + (len); 
//        int max_len = (len - ary_max[1] + 1) + (len);
//        if (min_idx == 1) min_len--;
//        if (max_idx == 1) max_len--;
//        
//        if (min_idx == 0) min_len = 1;
//        if (max_idx == 0) max_len = 1;
//
//        printf("%d %d\n", max_len, min_len);
//    }
//    return 0;
//}