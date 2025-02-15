#include <stdio.h>
#include <string.h>

const char* pt_b1(double, double, float*);

int main(){
    float result;
    double a, b;
    scanf("%lf %lf", &a, &b);
    char str[100];
    strcpy(str, pt_b1(a, b, &result));
    int i = strcmp(str, "Vo so nghiem");
    int j = strcmp(str, "Vo nghiem");
    if (i == 0) printf("Vo so nghiem\n");
    if (j == 0) printf("Vo nghiem\n");
    else printf("x = %.3f\n", result);
    return 0;
}

const char* pt_b1(double a, double b, float* result){
    if (a == 0) {
        if (b == 0) {
            return "Vo so nghiem";
        }
        else {
            return "Vo nghiem";
        }
    }
    else {
        *result = -b / a;  
        return "Nghiem tot";     
    }
}
