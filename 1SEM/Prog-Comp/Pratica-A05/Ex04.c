#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    float i, icelsius;
    
    for(i=30; i<51; i+=2){

        icelsius = (i-32)/1,8;
        printf("Farenheit: %.2f -> Celsius: %.2f\n", i, icelsius);
    }

    printf("\n");

    system("pause");
    return 0;
}
