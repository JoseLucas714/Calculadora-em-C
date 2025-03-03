#include<stdio.h>
#include<locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    double a, b;
    char operador;
    printf("Informe o primeiro numero:");
    scanf("%lf", &a);
    printf("Informe o segundo numero:");
    scanf("%lf", &b);
    printf("Informe a operacao que deseja fazer(+, -, *, /):");
    scanf(" %c", &operador);
    switch(operador){
        case '+':
          printf("O resultado da adicao de %.0lf + %.0lf = %.0lf\n ", a, b, a+b);
        break;
        case '-':
          printf("O resultado da subtracao de %.0lf - %.0lf = %.0lf\n ", a, b, a - b);
        break;
        case '*':
          printf("O resultado da multiplicacao de %.0lf x %.0lf = %.0lf\n", a, b, a*b);
        break;
        case '/':
              if (b==0)
              {
                printf("Erro, divisao por 0");
              }else{
                printf("O resultado da divisao %.0f ÷ %.0f = %.2f\n", a, b, a / b);
              }  
              break;
        default:
          printf("Operacao invalida");      
    }
    return 0;
}