#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    char n;
    printf("Escolha: + - * /\n");
    printf("Qual tabuada deseja ver: ");
    scanf("%c", &n);
    switch (n)
    {
    case '+':
        for(int i=1; i<=10; i++){
            printf("\n");
            for (int a=1; a<=10; a++){
                printf("%i + %i = %i\n", i, a, i+a);
            }
        }
        break;
    case '-':
        for(int i=1; i<=10; i++){
            printf("\n");
            for (int a=1; a<=10; a++){
                printf("%i - %i = %i\n", i, a, i-a);
            }
        }
        break;
    case '*':
        for(int i=1; i<=10; i++){
            printf("\n");
            for (int a=1; a<=10; a++){
                printf("%i x %i = %i\n", i, a, i*a);
            }
        }
        break;
    case '/':
        for(float i=1; i<=10; i++){
            printf("\n");
            for (float a=1; a<=10; a++){
                printf("%.0f / %.0f = %.1f\n", i, a, i/a);
            }
        }
        break;
    default:
        break;
    }
    return 0;
}
