#pragma once
#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <ctime>


using namespace std;
void print_task(int you_position);
///////////////////////////////////////////////////////////////////        task 1
void Swap(int* ar, int s);
void ar_ind(int* ar, int siz);
void print(int* ar, int s);
void swaping(int* ar, int s);
///////////////////////////////////////////////////////////////////        task 2
void t2_ind_ar(int*ar,int siz,int mi, int ma);
void t2_print(int* ar, int s);
int t2_event_num(int *n, bool* a);
void t2_event_num_print(int* ar, int* a, double* t2_sum, double* t2_counter,double* t2_percent);
///////////////////////////////////////////////////////////////////        task 3
void t3_funct(int *t_t3);
///////////////////////////////////////////////////////////////////        task 4
int t4_funct(int* p_t4_fir, int* p_t4_sec);
///////////////////////////////////////////////////////////////////        task 5
void t5_funct(int* p_t5);
///////////////////////////////////////////////////////////////////        task 6
int t6_funct(int** p_p_t6_fir, int** p_p_t6_sec);
///////////////////////////////////////////////////////////////////        task 7
int t7_funct(int* p_t7_ar,const int* p_c_t7_siz_t7,int* p_t7);
///////////////////////////////////////////////////////////////////        task 8
void t8_funct(int** p_p_t8_f, int** p_p_t8_s, int** p_p_t8_t);
///////////////////////////////////////////////////////////////////        task 9
int t9_funct(int* ar_t9,int* p_t9,int a,int b);
///////////////////////////////////////////////////////////////////        task 10
void t10_funct(int* ar_t10, double* d, double* c, double* b, double* a,const int* s);
///////////////////////////////////////////////////////////////////        task 11
void t11_fun_ind(int* ar,int siz);
void t11_fun_print(int* ar, int siz);
void t11_fun_ind(int* ar_a, int* ar_b, int* ar_c, int siz);
///////////////////////////////////////////////////////////////////        task 12
void t12_fun_ind(int* a, int s);
void t12_fun_print(int* a, int s);
void t12_fun_ind(int* aa, int* ab, int* ac, int s);
void t12_funct_copy(int* aa, int* ab,int s);
void t12_fun_swap(int* aa,int* ac, int s);
void t12_fun_zero(int* b, int s);
void t12_fun_div4(int* a, int s);
void t12_fun_div2(int* c, int s);
void t12_fun_sw_ma_mi(int* c, int s);
void t12_fun_sum_all(int* a, int s);
void t12_fun_mean_aref(int* b,int s);
void t12_fun_sort_up(int* a, int s);
void t12_fun_revers(int* b, int s);
void t12_fun_copy_revers(int* c, int* a, int s);
int t12_fun_sum_div2(int* b, int s);
void t12_fun_exchang(int* a, int* c, int s);
void t12_fun_print(int* a, int s);
void t12_fun_percent_minus(int* b, int s);
void t12_fun_percent_plus(int* a, int s);
void t12_fun_max_mean(int* b, int s);
int t12_fun_su_mi_ma(int* c, int s);
void t12_fun_exch_su_mi_ma(int* b, int* a, int s);
void t12_fun_sum_plu_minus(int* a, int s);