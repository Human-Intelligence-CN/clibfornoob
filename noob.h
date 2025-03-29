/*Copyright(c) 2024-present 清遥Singal*/
/*C语言菜鸟库 v1.0*/

#ifdef __cplusplus
extern "C" {
#endif

#ifndef noob_h
#define noob_h

#include <stdarg.h>
#include <math.h>

int is_even(int);
int is_odd(int num);
int is_prime(int num);
int is_perfect(int num);
int is_narcissistic(int num);
int is_palindrome(int num);
int is_perfect_square(int num);
int is_perfect_cube(int num);
int sum_arr(int* arr,int size);
double avg_arr(int* arr,int size);
int min_arr(int* arr,int size);
int max_arr(int* arr,int size);
int min(int num,...);
int max(int num,...);
int gcd(int num,...);
int lcm(int num,...);
int gcd_arr(int* arr,int size);
int lcm_arr(int* arr,int size);

#endif

#ifdef __cplusplus
}
#endif