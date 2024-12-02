#include<stdio.h>
#include"math.h"
int main(void){
    int a,b;
    int risultato;
    char operazione;
    printf("che operazione vuoi eseguire?\n"); 
    printf("1)somma 2)differenza 3)moltiplicazione 4)divizione ");
    scanf("%c" &operazione);
    switch (operazione){
    case'1':
        printf("iserire il primo operando\n");
        scanf("%d" ,&a);

        printf("iserire il secondo operando\n");
        scanf("%d" ,&b);
        risultato =somma(a,b);
        printf("%d", &risultato);
        break;
        case'2':
        printf("iserire il primo operando\n");
        scanf("%d" ,&a);

        printf("iserire il secondo operando\n");
        scanf("%d" ,&b);
        risultato =diferenza(a,b);
        printf("%f", &risultato);
    
    default:
        break;
         case'3':
        printf("iserire il primo operando\n");
        scanf("%d" ,&a);

        printf("iserire il secondo operando\n");
        scanf("%d" ,&b);
        risultato =moltiplicazione(a,b);
        printf("%f", &risultato);
        break;
        case'4':
        printf("iserire il primo operando\n");
        scanf("%d" ,&a);

        printf("iserire il secondo operando\n");
        scanf("%f" ,&b);
        risultato =divisione(a,b);
        printf("%d", &risultato);
        break;
       
       
        default:

        return 0;
    }
}