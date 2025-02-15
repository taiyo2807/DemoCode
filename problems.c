#include <stdio.h>
#include "problems.h"

//Problems 1:
long tong(int n){
	if(n == 1) return 1;
	return n + tong(n - 1);
}

long tich(int n){
	if(n == 1) return 1;
	return n * tich(n - 1);
}

double luythua(float a, int n){
	if(n == 1) return a;
	return a * luythua(a, n - 1);
}
void p1(){
	int n; 
	float a;
	printf("Nhap (int)n - (float)a: ");
	while(scanf("%d%f", &n, &a) != 2){
		if(!(n >= 0 || a >= 0)){
			printf("Du lieu khong hop le. Nhap lai gia tri n va a: \n");
		}
		else if(!(n >= 0)){
			printf("Du lieu khong hop le. Nhap lai gia tri n: \n");	
		}
		else{
			printf("Du lieu khong hop le. Nhap lai gia tri a: \n");
		}
	}
	printf("Ket qua: \n");
	printf("S(%d):%ld\nP(%d):%ld\nA(%d,%d):%.2lf\n", n, tong(n), n, tich(n), n, a, luythua(a, n));
	return;
}  

//Problems 2:

double capsocong(int n, int a, int r){
	if(n == 1) return a;
	return r + capsocong(n - 1, a, r);
} // csc de quy

double capsonhan(int n, int a, int q){
	if(n == 1) return a;
	return q * capsonhan(n - 1, a, q);
} // csn de quy

void p2(){
	int a,r,q,n;
	printf("Nhap (int)n - (int)a - (int)r - (int)q: ");
	scanf("%d%d%d%d", &n, &a, &r, &q);
	int i,j;
	printf("+> %d so dau tien cua day cap so cong: \n", n);
	for(i = 1; i <= n; i++){
		printf("%.2lf ", capsocong(i,a,r));
	}
	
	printf("\n");
	printf("+> %d so dau tien cua day cap so nhan: \n", n);
	for(j = 1; j <= n; j++){
		printf("%.2lf ", capsonhan(i,a,q));
	}
	printf("\n");
	return;
} 

// Problems 3:
void xuatnhiphan(int n){
	if(n <= 2){
		printf("%d", n);	
	}
	else{
		xuatnhiphan(n / 2);
		printf("%d", n % 2);
	} 
} // bien doi n -> dang nhi phan bang de quy
void p3(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("Nhi phan cua n: ");
	xuatnhiphan(n);
	return;
} 




