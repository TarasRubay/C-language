#include "Header.h"
void main() {
	srand(time(NULL));
	int task_position = 0, num_task = 12, pause_view = 0, index_pos = 0, t4_num;
	double t2_sum = 0, t2_counter = 0, t2_percent =0;
	long long int you_position = 0; //counter
	const long size = 100,siz_t1 = 10;
	int siz_t7 = 10;
	const int siz_t10 = 20;
	bool automatic_mode, simple;
	int* p_t3 = NULL;
	int* p_t4_fir = NULL;
	int* p_t4_sec = NULL;
	int* p_t5 = NULL;
	int* p_t6_fir = NULL;
	int* p_t6_sec = NULL;
	int** p_p_t6_fir = NULL;
	int** p_p_t6_sec = NULL;
	int* p_t7_ar = NULL;
	const int* p_c_t7_siz_t7 = NULL;
	int* p_t7 = NULL;
	int* p_t8_f = NULL;
	int* p_t8_s = NULL;
	int* p_t8_t = NULL;
	int** p_p_t8_f = NULL;
	int** p_p_t8_s = NULL;
	int** p_p_t8_t = NULL;
	int* p_t9 = NULL;
	const long* p_siz_t11 = NULL;
	const int* p_siz_t10 = NULL;
	double t10_percent2 = 0;
	double t10_percent3 = 0;
	double t10_percent4 = 0;
	double t10_percent5 = 0;
	do {
		cout << "!!!WARNING!!!\nin automatic mode it will be impossible to finish the program\nuntil all tasks are reviewed and the waiting time is exhausted\n\n";
		cout << "enter the task view mode\nmanula mode - 0\nautomatic mood - 1\n";
		if (task_position != 0 && task_position != 1)cout << "You must be enter 0 or 1\n";
		cin >> task_position;
		system("cls");
	} while (task_position != 0 && task_position != 1);

	if (task_position == 0)automatic_mode = false;
	else automatic_mode = true;

	if (automatic_mode == true) {
		do
		{
			cout << "enter pause to view task in automatic mode min - 1 sec  max - 60 sec  ";
			cin >> task_position;
			system("cls");
		} while (task_position < 1 && task_position > 60);
		pause_view = task_position;
		task_position = 0;
	}
	do {
		if (automatic_mode == true) {
			system("cls");
			task_position++;
			if (task_position == num_task+1)task_position = 0;
		}
		else
		{
			print_task(you_position);
			cin >> task_position;
			if (task_position > 0 && task_position <= num_task)you_position = (you_position * 10) + task_position;
			system("cls");
		}

		switch (task_position)
		{
		case 1:
			cout << "1 - array identification, print, swap event and not event numbers\n";
			cout << "\nchar** " << sizeof(char**);
			cout << "\nchar* " << sizeof(char*);
			cout << "\nsizeof(int**)" << sizeof(int**);
			cout << "\nsizeof(int*)" << sizeof(int*);
			cout << "\nsizeof(double**)" << sizeof(double**);
			cout << "\nsizeof(float*)" << sizeof(float*) << endl;
			cout << "sizeof(int)" << sizeof(int) << endl;
			cout << "sizeof(INT64)" << sizeof(INT64) << endl;
			cout << "sizeof(INT16)" << sizeof(INT16) << endl;
			cout << "sizeof(INT32)" << sizeof(INT32) << endl;
			short int s;
			cout << "sizeof(shot int)" << sizeof(s) << endl;
			cout << "sizeof(char)" << sizeof(char) << endl;
			cout << "sizeof(char32_t)" << sizeof(char32_t) << endl;
			cout << "sizeof(double)" << sizeof(double) << endl;
			cout << "sizeof(float)" << sizeof(float) << endl;
			cout << "sizeof(bool)" << sizeof(bool) << endl;
			int ar[siz_t1];
			ar_ind(ar, siz_t1);
			print(ar, siz_t1);
			swaping(ar, siz_t1);
			cout << endl;
			print(ar, siz_t1);
			break;
		case 2:
			cout << "2 - funct indetification ar, print ar, bool prime numb, print prime num, prime sum, prime count, prime percent\nenter a array range max 100: ";
			int array_2t[100];
			int ent,ent1;
			simple = false;
			do {
				cin >> ent;
			} while (ent < 1 && ent > 100);
			t2_ind_ar(array_2t, ent,2,100);
			t2_print(array_2t, ent);
			cout << "\nEnter number o check simple: ";
			cin >> ent1;
			simple = t2_event_num(&ent1,&simple);
			cout << "you simple number " << ent1 << " is   " << simple;
			cout << "\nprint simple num in array: ";
			t2_counter = 0;
			t2_event_num_print(array_2t,&ent,&t2_sum,&t2_counter,&t2_percent);
			cout << "\nsum simple num in array:  " << t2_sum << "\ncount simple num in array:  "<< t2_counter<< "\npercent simple num in array:  "<<t2_percent<<" %";
			break;
		case 3:
			cout << "3(1) - takes pointer to variable asings it a module value\nEnter num: ";
			int t3;
			cin >> t3;
			p_t3 = &t3;
			t3_funct(p_t3);
			cout << "\nmodule " << *p_t3;
			break;
		case 4:
			cout << "4(2) - takes two pointers and two varibles and return pointer min number\nEnter first num: ";
			int t4_first, t4_second;
			cin >> t4_first;
			cout << "enter second number: ";
			cin >> t4_second;
			p_t4_fir = &t4_first;
			p_t4_sec = &t4_second;
			t4_num = t4_funct(p_t4_fir,p_t4_sec);
			cout << "pointer min num: " << t4_num;
			break;
		case 5:
			cout << "5(3) - find sumbol in ACII\nEnter sumb: ";
			int t5;
			cin >> t5;
			p_t5 = &t5;
			t5_funct(p_t5);
			break;
		case 6:
			cout << "6(4) - two double pointers, return sum digit\nEnter first num: ";
			int t6_first, t6_second;
			cin >> t6_first;
			cout << "enter second number: ";
			cin >> t6_second;
			p_t6_fir = &t6_first;
			p_t6_sec = &t6_second;
			p_p_t6_fir = &p_t6_fir;
			p_p_t6_sec = &p_t6_sec;
			cout << t6_funct(p_p_t6_fir, p_p_t6_sec);
			break;
		case 7:
			cout << "7(5) - pointer array and pointer first element array\nenter number in range 1 - 100 do you want find: ";
			int t7;
			p_t7_ar = ar;
			p_c_t7_siz_t7 = &siz_t7;
			cin >> t7;
			p_t7 = &t7;
			cout << "\nfinding num: " << t7_funct(p_t7_ar,p_c_t7_siz_t7,p_t7);
			break;
		case 8:
			cout << "8(6) - three varibles, three pointers to varibles, three pointers to pointers, exchange min max with pointers\nenter three numbers\n";
			int t_8_1, t_8_2, t_8_3;
			cin >> t_8_1 >> t_8_2 >> t_8_3;
			p_t8_f = &t_8_1;
			p_t8_s = &t_8_2;
			p_t8_t = &t_8_3;
			p_p_t8_f = &p_t8_f;
			p_p_t8_s = &p_t8_s;
			p_p_t8_t = &p_t8_t;
			t8_funct(p_p_t8_f, p_p_t8_s, p_p_t8_t);
			cout << t_8_1 << "\n" << t_8_2 << "\n" << t_8_3;
			break;
		case 9:
			cout << "9(7) - find number in array\n";
			int ar_t9[10];
			for (int i = 0; i < 10; i++)
			{
				*(ar_t9 + i) = rand() % 100;
				cout << *(ar_t9 + i) << endl;
			}
			cout << "Enter number do you want find: ";
			int t9;
			cin >> t9;
			p_t9 = &t9;
			cout << "index: "<<t9_funct(ar_t9,p_t9,0,10);

			break;
		case 10:
			cout << "10(8) - sort rating\n";
			
			int ar_t10[siz_t10];
			for (int i = 0; i < siz_t10; i++)
			{
				*(ar_t10 + i) = rand() % (12-1)+1;
				cout << *(ar_t10 + i) << " ";
			}
			p_siz_t10 = &siz_t10;
			t10_funct(ar_t10,&t10_percent2,&t10_percent3,&t10_percent4,&t10_percent5,p_siz_t10);
			cout << "\n\n2: " << t10_percent2 << " %\n3: " << t10_percent3 << " %\n4: " << t10_percent4 << " %\n5: " << t10_percent5 << " %\n";
			break;
		case 11:
			cout << "11(9) - three array, A[n],B[n],C[A+B]\n";
			p_siz_t11 = &siz_t1;
			int ar_a[siz_t1];
			int ar_b[siz_t1];
			int ar_c[siz_t1*2];
			t11_fun_ind(ar_a, *p_siz_t11);
			t11_fun_ind(ar_b, *p_siz_t11);
			t11_fun_print(ar_a, *p_siz_t11);
			cout << endl;
			t11_fun_print(ar_b, *p_siz_t11);
			t11_fun_ind(ar_a,ar_b,ar_c, *p_siz_t11 * 2);
			cout << endl;
			t11_fun_print(ar_c, *p_siz_t11 * 2);
			break;
		case 12:
			cout << "12(10) - three array, A[n],B[n],C[n] - more function\n";
			int t12;
			int a_a[siz_t1];
			int a_b[siz_t1];
			int a_c[siz_t1];
			t12_fun_ind(a_a, siz_t1);
			t12_fun_ind(a_b, siz_t1);
			t12_fun_ind(a_c, siz_t1);
			cout << "\narr a: "<<endl;
			t12_fun_print(a_a, siz_t1);
			cout << "\narr b: " << endl;
			t12_fun_print(a_b, siz_t1);
			cout << "\narr c: " << endl;
			t12_fun_print(a_c, siz_t1);
			cout << "\n\t\t\t\t\t\t\tenter any key:";
			cin >> t12;
			cout << "\narr c=a+b: " << endl;
			t12_fun_ind(a_a, a_b, a_c, siz_t1);
			t12_fun_print(a_c, siz_t1);
			cout << endl;
			cout << "\n\t\t\t\t\t\t\tenter any key:";
			cin >> t12;
			t12_funct_copy(a_a, a_b, siz_t1);
			cout << "\narr a: " << endl;
			t12_fun_print(a_a, siz_t1);
			cout << "\narr copy a to b: " << endl;
			t12_fun_print(a_b, siz_t1);
			cout << "\n\t\t\t\t\t\t\tenter any key:";
			cin >> t12;
			t12_fun_swap(a_a, a_c, siz_t1);
			cout << "\nswap a&c arr a: " << endl;
			t12_fun_print(a_a, siz_t1);
			cout << "\nswap a&c arr c: " << endl;
			t12_fun_print(a_c, siz_t1);
			cout << "\n\t\t\t\t\t\t\tenter any key:";
			cin >> t12;
			t12_fun_zero(a_b, siz_t1);
			cout << "\narr if minus swap to zero b: " << endl;
			t12_fun_print(a_b, siz_t1);
			cout << "\n\t\t\t\t\t\t\tenter any key:";
			cin >> t12;
			t12_fun_div4(a_a, siz_t1);
			cout << "\nswap %4 to 999 arr a : " << endl;
			t12_fun_print(a_a, siz_t1);
			cout << "\n\t\t\t\t\t\t\tenter any key:";
			cin >> t12;
			t12_fun_div2(a_c, siz_t1);
			cout << "\nswap %2 to -1 arr c : " << endl;
			t12_fun_print(a_c, siz_t1);
			cout << "\n\t\t\t\t\t\t\tenter any key:";
			cin >> t12;
			t12_fun_sw_ma_mi(a_c, siz_t1);
			cout << "\nswap max nim arr c : " << endl;
			t12_fun_print(a_c, siz_t1);
			cout << "\n\t\t\t\t\t\t\tenter any key:";
			cin >> t12;
			t12_fun_sum_all(a_a, siz_t1);
			cout << "  in arr a : " << endl;
			t12_fun_print(a_a, siz_t1);
			cout << "\n\t\t\t\t\t\t\tenter any key:";
			cin >> t12;
			t12_fun_mean_aref(a_b, siz_t1);
			cout << "\n\t\t\t\t\t\t\tenter any key:";
			cin >> t12;
			t12_fun_sort_up(a_a, siz_t1);
			cout << "\sort up arr a : " << endl;
			t12_fun_print(a_a, siz_t1);
			cout << "\n\t\t\t\t\t\t\tenter any key:";
			cin >> t12;
			t12_fun_revers(a_b, siz_t1);
			cout << "\nrevers arr b : " << endl;
			t12_fun_print(a_b, siz_t1);
			cout << "\n\t\t\t\t\t\t\tenter any key:";
			cin >> t12;
			t12_fun_copy_revers(a_c,a_a, siz_t1);
			cout << "\ncopy c  arr c : " << endl;
			t12_fun_print(a_c, siz_t1);
			cout << "\npaste in a  revers arr a : " << endl;
			t12_fun_print(a_a, siz_t1);
			cout << "\n\t\t\t\t\t\t\tenter any key:";
			cin >> t12;
			cout << "\nSum odd unm in arr b: " <<  t12_fun_sum_div2(a_b, siz_t1);
			cout << "\n\t\t\t\t\t\t\tenter any key:";
			cin >> t12;
			t12_fun_exchang(a_a,a_c, siz_t1);
			cout << "\nexchang arr c : " << endl;
			t12_fun_print(a_c, siz_t1);
			cout << "\nexchange arr a : " << endl;
			t12_fun_print(a_a, siz_t1);
			cout << "\n\t\t\t\t\t\t\tenter any key:";
			cin >> t12;
			t12_fun_percent_minus(a_b, siz_t1);
			cout << "\n\t\t\t\t\t\t\tenter any key:";
			cin >> t12;
			t12_fun_percent_plus(a_a, siz_t1);
			cout << "\n\t\t\t\t\t\t\tenter any key:";
			cin >> t12;
			t12_fun_max_mean(a_b, siz_t1);
			cout << "\n\t\t\t\t\t\t\tenter any key:";
			cin >> t12;
			cout << "\nsum min max in arr c: "<< t12_fun_su_mi_ma(a_c, siz_t1);
			cout << "\n\t\t\t\t\t\t\tenter any key:";
			cin >> t12;
			t12_fun_exch_su_mi_ma(a_b,a_a,siz_t1);
			cout << "\nexchang sum !%2 arr b : " << endl;
			t12_fun_print(a_b, siz_t1);
			cout << "\nexchange %3=0  arr a : " << endl;
			t12_fun_print(a_a, siz_t1);
			cout << "\n\t\t\t\t\t\t\tenter any key:";
			cin >> t12;
			t12_fun_sum_plu_minus(a_a, siz_t1);

			break;
		default:
			if (task_position < 0)cout << "---------------------------------------\nyou need to enter a larger number 0 !!!\n---------------------------------------\n";
			if (task_position > num_task)cout << "--------------------------------------\nyou need to enter a less number: " << num_task << " !!!\n--------------------------------------\n";
			break;
		}
		if (automatic_mode == true && task_position <= num_task) {
			cout << "\ntime left : \n";
			int pause_view_point = 0;
			int pause_view_itr = pause_view;
			while (pause_view_itr != 0) {
				cout << pause_view_itr << " ";
				pause_view_itr--;
				pause_view_point++;
				if (pause_view_point == 15)cout << "\n";
				Sleep(1000);
			}
		}
	} while (task_position != 0);


}