/*Copyright(c) 2024-present 清遥Singal*/
/*C语言菜鸟库 v1.0*/

#include "noob.h"

/*判断是否奇数*/
int is_even(int num) {
    return num % 2 == 0;
}

/*判断是否偶数*/
int is_odd(int num) {
    return num % 2 != 0;
}

/*判断是否质数*/
int is_prime(int num) {
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) 
            return 0;
    return 1;
}

/*判断是否完全数*/
int is_perfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++)
        if (num % i == 0)
            sum += i;
    return sum == num;
}

/*判断是否水仙花数*/
int is_narcissistic(int num) {
    int sum = 0, temp = num, digits = 0;
    while (temp) {
        digits++;
        temp /= 10;
    }
    temp = num;
    while (temp) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    return sum == num;
}

/*判断是否回文数*/
int is_palindrome(int num) {
    int reversed = 0, original = num;
    while (num) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}


/*判断是否完全平方数*/
int is_perfect_square(int num) {
    int sqrt_num = sqrt(num);
    return sqrt_num * sqrt_num == num;
}

/*判断是否完全立方数*/
int is_perfect_cube(int num) {
    int cbrt_num = cbrt(num);
    return cbrt_num * cbrt_num * cbrt_num == num;
}

/*数列求和*/
int sum_arr(int* arr,int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

/*数列求平均数*/
double avg_arr(int* arr,int size) {
    return (double)sum_arr(arr, size) / size;
}

/*数列求最小值*/
int min_arr(int* arr,int size) {
    int min_value = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] < min_value)
            min_value = arr[i];
    return min_value;
}

/*数列求最大值*/
int max_arr(int* arr,int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

/*多参数求最小值*/
int min(int num,...) {
    va_list args;
    va_start(args, num);
    int min_value = num;
    for (int i = 1; i < num; i++) {
        int temp = va_arg(args, int);
        if (temp < min_value)
            min_value = temp;
    }
    va_end(args);
    return min_value;
}

/*多参数求最大值*/
int max(int num,...) {
    va_list args;
    va_start(args, num);
    int max_value = num;
    for (int i = 1; i < num; i++) {
        int temp = va_arg(args, int);
        if (temp > max_value)
            max_value = temp;
    }
    va_end(args);
    return max_value;
}

/*多参数求最大公因数*/
int gcd(int num,...) {
    va_list args;
    va_start(args, num);
    int gcd_value = num;
    for (int i = 1; i < num; i++) {
        int temp = va_arg(args, int);
        while (temp != 0) {
            int t = temp;
            temp = gcd_value % temp;
            gcd_value = t;
        }
    }
    va_end(args);
    return gcd_value;
}

/*多参数求最小公倍数*/
int lcm(int num,...) {
    va_list args;
    va_start(args, num);
    int lcm_value = num;
    for (int i = 1; i < num; i++) {
        int temp = va_arg(args, int);
        lcm_value = (lcm_value * temp) / gcd(lcm_value, temp);
    }
    va_end(args);
    return lcm_value;
}

/*数列求最大公因数*/
int gcd_arr(int* arr,int size) {
    int gcd_value = arr[0];
    for (int i = 1; i < size; i++) {
        int temp = arr[i];
        while (temp != 0) {
            int t = temp;
            temp = gcd_value % temp;
            gcd_value = t;
        }
    }
    return gcd_value;
}

/*数列求最小公倍数*/
int lcm_arr(int* arr,int size) {
    int lcm_value = arr[0];
    for (int i = 1; i < size; i++) {
        int temp = arr[i];
        lcm_value = (lcm_value * temp) / gcd(lcm_value, temp);
    }
    return lcm_value;
}