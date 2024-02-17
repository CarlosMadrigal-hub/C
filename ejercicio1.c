#include <stdio.h>
int main(){
    int var1 = 10;
    int var2 = 20;
    int var3 = 2;
    int res;
    res = var1 * var2 * var3;

    printf("El resultado de multiplicar %d * %d * %d es: %d \n",var1, var2, var3,res);
    printf("El resultado es: %d \n",res);
    system ("pause");
    return 0;
}