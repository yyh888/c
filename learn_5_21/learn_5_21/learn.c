#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



#include<stdio.h>


//int main()
//{
//    int n = 0, m = 0;
//    scanf("%d %d", &n, &m);
//    int arr1[1000] = { 0 };
//    int arr2[1000] = { 0 };
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (int i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//
//    int i = 0, j = 0;
//    int arr3[2000] = { 0 };
//    int k = 0;
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            arr3[k++] = arr1[i];
//            i++;
//        }
//        else
//        {
//            arr3[k++] = arr2[j];
//            j++;
//        }
//    }
//
//    if (i != n)
//    {
//        for (; i < n; i++)
//        {
//            arr3[k++] = arr1[i];
//        }
//    }
//    if (j != m)
//    {
//        for (; j < m; j++)
//        {
//            arr3[k++] = arr2[j];
//        }
//    }
//
//    for (i = 0; i < m + n; i++)
//    {
//        printf("%d ", arr3[i]);
//    }
//    return 0;
//}



//#include<stdio.h>
//#include<stdio.h>
//
//
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    //每一位放到数组中
//    int arr[10] = { 0 };
//    int i = 0;
//    while (n)
//    {
//        int tmp = n % 10;
//        if (tmp % 2 == 0)
//        {
//            arr[i++] = 0;
//        }
//        else
//        {
//            arr[i++] = 1;
//        }
//        n /= 10;
//    }
//
//    int sum = 0;
//    int j = 0;
//    for (j = 0; j < i; j++)
//    {
//        sum += arr[j] * pow(10, j);
//    }
//    printf("%d", sum);
//    return 0;
//}




//#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0, j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                if (i + j >= n - 1)
//                {
//                    printf("* ");
//                }
//                else
//                {
//                    printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}



//#include<stdio.h>
//
//int main()
//{
//    double val = 0.0;
//    int month = 0, day = 0, ticket = 0;
//    scanf("%lf %d %d %d", &val, &month, &day, &ticket);
//    double money = 0;
//    if (month == 11)
//    {
//        if (ticket)
//        {
//            money = val * 0.7 - 50;
//        }
//        else
//        {
//            money = val * 0.7;
//        }
//        if (money < 0)
//        {
//            money = 0;
//        }
//    }
//    else
//    {
//        if (ticket)
//        {
//            money = val * 0.8 - 50;
//        }
//        else
//        {
//            money = val * 0.8;
//        }
//        if (money < 0)
//        {
//            money = 0;
//        }
//    }
//    printf("%.2lf", money);
//    return 0;
//}



//#include<stdio.h>
//
//int main()
//{
//    int a = 0, b = 0;
//    scanf("%d %d", &a, &b);
//    int i = 1;
//    while (a * i % b != 0)
//    {
//        i++;
//    }
//    printf("%d", a * i);
//    return 0;
//}



//#include<stdio.h>
//#include<string.h>
//
//void reverse(char* left, char* right)
//{
//    while (left < right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        right--;
//        left++;
//    }
//}
//
//
//int main()
//{
//    char ch[101] = { 0 };
//    gets(ch);
//    int len = strlen(ch);
//    reverse(ch, ch + len - 1);
//    char* str = ch, * end = ch;
//    while (*str != '\0')
//    {
//        while (*end != '\0' && *end != ' ')
//        {
//            end++;
//        }
//        reverse(str, end - 1);
//        if (*end != '\0')
//            end++;
//        str = end;
//    }
//    printf("%s", ch);
//    return 0;
//}