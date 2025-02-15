#include <stdio.h>
int S(int n);
int P(int n);
int A(int a, int n);

int main(){
    int n, a;
    while(scanf("%d%d", &n, &a) != 2 || n < 0 || a < 0){
        if(!(n >= 0 || a >= 0)) printf("Du lieu khong hop le. Nhap lai gia tri n va a\n");
        else if(n < 0) printf("Du lieu khong hop le.Nhap lai gia tri n\n");
        else printf("Du lieu khong hop le. Nhap lai gia tri a\n");
    };

    int result3 = A(a,n);
    int result1 = S(n);
    int result2 = P(n);
    printf("%d\n%d\n%d\n", result1, result2, result3);
    return 0;
}
int A(int a, int n){
    if(n == 0) return 1;
    return a * A(a,n - 1);
}
int S(int n){
    if(n == 1) return 1;
    return n + S(n - 1);
}
int P(int n){
    if(n == 1) return 1;
    return n * P(n - 1);
}