#include "Header.h"
void print_task(int you_position) {
	cout << "\n---------------------------------------------------------------------------\nChoice the number of the task\n\n";
	cout << "1 - array identification, print, swap event and not event numbers\n";
	cout << "2 - funct indetification ar, print ar, bool prime numb, print prime num, prime sum, prime count, prime percent\n";
	cout << "3(1) - takes pointer to variable asings it a module value\n";
	cout << "4(2) - takes two pointers and two varibles and return pointer min number\n";
	cout << "5(3) - find sumbol in ACII\n";
	cout << "6(4) - two double pointers, return sum digit\n";
	cout << "7(5) - pointer array and pointer first element array\n";
	cout << "8(6) - three varibles, three pointers to varibles, three pointers to pointers, exchange min max with pointers\n";
	cout << "9(7) - find number in array\n";
	cout << "10(8) - sort rating\n";
	cout << "11(9) - three array, A[n],B[n],C[A+B]\n";
	cout << "12(10) - three array, A[n],B[n],C[n] - more function\n";
	cout << "0 - EXIT\n\n";
	cout << "you have reviewed the task - " << you_position << endl;
	cout << "enter the number of the task you want to view - ";
}
///////////////////////////////////////////////////////////////////        task 1
void Swap(int* ar, int s) {
	int a = *ar;
	*ar = *(ar + 1);
	*(ar + 1) = a;
}
void ar_ind(int* ar, int siz) {

	for (int i = 0; i < siz; i++)
	{
		*(ar+i) = rand() % 100;
	}
}
void print(int* ar, int s) {
	for (int i = 0; i < s; i++)
	{
		cout << ar[i] << " ";
	}
}
void swaping(int* ar, int s) {
	for (int i = 0; i < s; i += 2)
	{
		Swap(ar + i, s);
	}
}

///////////////////////////////////////////////////////////////////        task 2
void t2_ind_ar(int* ar, int siz,int mi, int ma) {

	for (int i = 0; i < siz; i++)
	{
		*(ar+i) = rand() % (ma-mi)+mi;
	}
}
void t2_print(int* ar, int s) {
	for (int i = 0; i < s; i++)
	{
		cout << *(ar + i) << " ";
	}
}
int t2_event_num(int* n,bool* a) {
	int c = 0;
	for (int i = 1; i <= *n; i++)
	{
		if (*(n) % i == 0)c++;
		if (c > 2)return *a = false;
	}
	return *a = true;
}
void t2_event_num_print(int* ar, int* a, double* t2_sum, double* t2_counter,double* t2_percent) {
	int c;
	
	for (int i = 0; i < *a; i++)
	{
		c = 0;
		for (int j = 1; j <= *(ar + i); j++)
		{
			if (*(ar + i) % j == 0)c++;

		}
		if (c == 2) {
			cout << *(ar + i) << " ";
			*t2_sum += *(ar + i);
			*t2_counter = *t2_counter + 1;
			
		}

	}
	*t2_percent = (100/(*a)) * (*t2_counter);
}
///////////////////////////////////////////////////////////////////        task 3
void t3_funct(int *p_t3) {
	if(*p_t3 <0)*p_t3 = *p_t3 * (-1);
}
///////////////////////////////////////////////////////////////////        task 4
int t4_funct(int* p_t4_fir,int* p_t4_sec) {
	if ((*p_t4_fir) > (*p_t4_sec))return *p_t4_sec;
	else return *p_t4_fir;
}
///////////////////////////////////////////////////////////////////        task 5
void t5_funct(int* p_t5) {
	char c = *p_t5;
	cout << "sumbol: " <<c;
}
///////////////////////////////////////////////////////////////////        task 6
int t6_funct(int**  p_p_t6_fir, int** p_p_t6_sec) {
	int sum = **p_p_t6_fir + **p_p_t6_sec;
	return sum;
}
///////////////////////////////////////////////////////////////////        task 7
int t7_funct(int* p_t7_ar,const int* p_c_t7_siz_t7, int* p_t7) {
	
	for (int i = 0; i < *p_c_t7_siz_t7; i++)
	{
		*(p_t7_ar + i) = rand() % (100 - 1) + 1;
		cout << *(p_t7_ar + i) << " ";
		
	}
	for (int i = 0; i < *p_c_t7_siz_t7; i++)
	{
		if (*(p_t7_ar + i) == (*p_t7)) return *(p_t7_ar + i);
	}
	return 0;
}
///////////////////////////////////////////////////////////////////        task 8
void t8_funct(int** p_p_t8_f, int** p_p_t8_s, int** p_p_t8_t) {
	int tmp;
	int*** max = NULL;
	int*** min = NULL;
	max = &p_p_t8_f;
	min = &p_p_t8_f;
	if ((**p_p_t8_s) > (***max))max = &p_p_t8_s;
	if ((**p_p_t8_t) > (***max))max = &p_p_t8_t;
	if ((**p_p_t8_s) < (***min))min = &p_p_t8_s;
	if ((**p_p_t8_t) < (***min))min = &p_p_t8_t;
	tmp = ***max; ***max = ***min; ***min = tmp;
}
///////////////////////////////////////////////////////////////////        task 9
int t9_funct(int* ar_t9, int* p_t9,int a, int b) {
	
		while (1) {
			if ((*p_t9) != *(ar_t9 + a))a++;
			else return a;
			if ((*p_t9) != *(ar_t9 + b))b--;
			else return b;
			if (a == b)return -1;
		}
}

///////////////////////////////////////////////////////////////////        task 10
 void t10_funct(int* ar_t10,double* d,double* c,double* b,double* a,const int* s) {
	 for (int i = 0; i < *s; i++)
	 {
		 if (*(ar_t10 + i) >= 1 && *(ar_t10 + i) <= 3)*d = *d + 1;
		 if (*(ar_t10 + i) >= 4 && *(ar_t10 + i) <= 6)*c = *c + 1;
		 if (*(ar_t10 + i) >= 7 && *(ar_t10 + i) <= 9)*b = *b + 1;
		 if (*(ar_t10 + i) >= 10 && *(ar_t10 + i) <= 12)*a = *a + 1;
	 }
	 *a = *a * (100 / *s);
	 *b = *b * (100 / *s);
	 *c = *c * (100 / *s);
	 *d = *d * (100 / *s);
}
///////////////////////////////////////////////////////////////////        task 11
 void t11_fun_ind(int* ar, int siz) {
	 for (int i = 0; i < siz; i++)
	 {
		 *(ar + i) = rand() % 10;
	 }
 }
 void t11_fun_print(int* ar, int siz) {
	 for (int i = 0; i < siz; i++)
	 {
		 cout << *(ar + i) <<" ";
	 }
 }
 void t11_fun_ind(int* ar_a, int* ar_b, int* ar_c, int siz) {
	 for (int i = 0; i < siz; i++)
	 {
		 if(i < siz/2)*(ar_c + i) = *(ar_a + i);
		 if(i >= siz/2)*(ar_c + i) = *(ar_b + (i-(siz/2)));

	 }
 }
///////////////////////////////////////////////////////////////////        task 12
 void t12_fun_ind(int* a, int s) {
	 for (int i = 0; i < s; i++)
	 {
		 *(a + i) = rand() % 20-10;
	 }
 }
 void t12_fun_print(int* a, int s) {
	 for (int i = 0; i < s; i++)
	 {
		 cout << setw(4) << *(a + i);
	 }
 }
 void t12_fun_ind(int* aa, int* ab, int* ac, int s) {
	 for (int i = 0; i < s; i++)
	 {
		 *(ac + i) = *(aa + i) + *(ab + i);

	 }
 }
 void t12_funct_copy(int* aa, int* ab, int s) {
	 for (int i = 0; i < s; i++)*(ab + i) = *(aa + i);
 }
 void t12_fun_swap(int* aa, int* ac, int s) {
	 int tmp;
	 for (int i = 0; i < s; i++)
	 {
		 tmp = *(aa + i); *(aa + i) = *(ac + i); *(ac + i) = tmp;
	 }
 }
 void t12_fun_zero(int* b, int s) {
	 for (int i = 0; i < s; i++)
	 {
		 if (*(b + i) < 0)*(b + i) = 0;
	 }
 }
 void t12_fun_div4(int* a, int s) {
	 for (int i = 0; i < s; i++)
	 {
		 if (*(a + i) % 4 == 0)*(a + i) = 999;
	 }
 }
 void t12_fun_div2(int* c, int s) {
	 for (int i = 0; i < s; i++)
	 {
		 if (*(c + i) % 2 == 0)*(c + i) = -1;
	 }
 }
 void t12_fun_sw_ma_mi(int* c, int s) {
	 int max = -100, min = +100, i_ma,i_mi,tmp;
	 for (int i = 0; i < s; i++)
	 {
		 if (*(c + i) > max) {
			 max = *(c + i);
			 i_ma = i;
		 }
		 if (*(c + i) < min) {
			 min = *(c + i);
			 i_mi = i;
		 }
	 }
	 tmp = *(c + i_ma); *(c + i_ma) = *(c + i_mi); *(c + i_mi) = tmp;
 }
 void t12_fun_sum_all(int* a, int s) {
	 int sum = 0;
	 for (int i = 0; i < s; i++)
	 {
		 sum += *(a + i);
	 }
	 cout << "\nsum all: " << sum;
 }
 void t12_fun_mean_aref(int* b, int s) {
	 double sum = 0;
	 for (int i = 0; i < s; i++)
	 {
		 sum += *(b+i);
	 }
	 cout << "\narchmetic mean in arr b: " << sum / s;
}
 void t12_fun_sort_up(int* a, int s) {
	 int tmp;
	 for (int i = 0; i < s; i++)
	 {
		 for (int j = 0; j < s; j++)
		 {
			 if (*(a + i) > * (a + j)) {
				 tmp = *(a + i); *(a + i) = *(a + j); *(a + j) = tmp;
			 }
		 }
	 }
}
 void t12_fun_revers(int* b, int s) {
	 int tmp;
	 for (int i = 0; i < s/2; i++)
	 {
		 tmp = *(b + i); *(b + i) = *(b + ((s - 1) - i)); *(b + ((s-1)-i)) = tmp;
	 }
}
 void t12_fun_copy_revers(int* c, int* a, int s) {
	 for (int i = 0; i < s; i++)
	 {
		 *(a + ((s - 1) - i)) = *(c + i);
	 }
}
 int t12_fun_sum_div2(int* b, int s) {
	 int sum = 0;
	 for (int i = 0; i < s; i++)
	 {
		 if (*(b + i) % 2 != 0)sum += *(b + i);
	 }
	 return sum;
}
 void t12_fun_exchang(int* a, int* c, int s) {
	 int tmp;
	 for (int i = 0; i < s; i+=2)
	 {
		 tmp = *(a + i); *(a + i) = *(c + i); *(c + i) = tmp;
	 }
}

 void t12_fun_percent_minus(int* b, int s) {
	 int perc = 0;
	 for (int i = 0; i < s; i++)
	 {
		 if (*(b + i) < 0)perc += 1;
	 }
	 perc = perc * (100 / s);
	 cout << "\npercent minus num in arr a: " << perc << " %";
}
 void t12_fun_percent_plus(int* a, int s) {
	 int perc = 0;
	 for (int i = 0; i < s; i++)
	 {
		 if (*(a + i) > 0)perc += 1;
	 }
	 perc = perc * (100 / s);
	 cout << "\npercent plus num in arr b: " << perc << " %";
}
 void t12_fun_max_mean(int* b, int s) {
	 int counter = 0;
	 double sum_mean = 0;
	 for (int i = 0; i < s; i++)
	 {
		 sum_mean += *(b + i);
	 }
	 for (int i = 0; i < s; i++)
	 {
		 if(*(b + i)>sum_mean)counter++;
	 }
	 cout << "\nthe: "<<counter<<" number its so larger arefmatic mean in arr b";
}
 int t12_fun_su_mi_ma(int* c, int s) {
	 int max = -100, min = +100;
	 for (int i = 0; i < s; i++)
	 {
		 if (*(c + i) > max) max = *(c + i);
		 if (*(c + i) < min) min = *(c + i);
	 }
	 return max + min;
}
 void t12_fun_exch_su_mi_ma(int* b, int* a, int s) {
	 for (int i = 0; i < s; i++)
	 {
		 if(*(a+i)%3==0)*(a+i) = t12_fun_sum_div2(b, s);
	 }
}
 void t12_fun_sum_plu_minus(int* a, int s) {
	 int sum1 = 0, sum2 = 0;
	 for (int i = 0; i < s; i++)
	 {
		 if (*(a + i) > 0)sum1 += *(a + i);
		 if (*(a + i) < 0)sum2 += *(a + i);
	 }
	 sum2 = sum2 * (-1);
	 cout << "Difference plus num and module minus num in arr a: " << sum1 - sum2;
}
///////////////////////////////////////////////////////////////////        task 13