#include <stdio.h>
#include <stdlib.h>
#include "problems.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("Menu: \n");
	printf("Problem 1: Tong, Tich, Luy thua\n");
	printf("Problem 2: Cap so cong va Cap so nhan\n");
	printf("Problem 3: Xuat bieu dien nhi phan cua mot so nguyen duong n\n");
	printf("Chon Problem: ");
	
	int menu;
	scanf("%d", &menu);
	switch(menu){
		case 1:
			p1();
			break;
		case 2:
			p2();
			break;
		default: 
			p3();
	}
	

	return 0;
}
