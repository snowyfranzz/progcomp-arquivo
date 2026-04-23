#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    float x, y, S;

    x = 1;
    y = 1;

    while(x<=99){
        S += x/y;
        x += 2;
        y++;
    }

    printf("S = %.2f\n\n", S);

    system("pause");
    return 0;
}
