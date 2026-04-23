#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    float x, y, S;

    x = 1;
    y = 3;

    while(x<=20){
        S += x/y;

        x++;
        y += 2;

    }

    printf("S = %.2f\n\n", S);

    system("pause");
    return 0;
}
