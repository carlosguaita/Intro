#include <stdio.h>

int main (int argc, char *argv[]) {

    double resp, num1, num2;
    int opc1=0, opc2=0;
    do{
    printf("Ingrese el num1: ");
    scanf("%lf",&num1);
    printf("Ingrese el num2: ");
    scanf("%lf",&num2);

    printf("Elija una opcion:\n1.Suma\n2.Resta\n3.Multiplicacion\n4.Division\n>>");
    scanf("%d",&opc1);
    switch (opc1)
    {
    case 1:
        resp=num1+num2;
        printf("El resultado de la suma es: %.2lf\n",resp);
        break;
    case 2:
        resp=num1-num2;
        printf("El resultado de la resta es: %.2lf\n",resp);
        break;
    case 3:
        resp=num1*num2;
        printf("El resultado de la multiplicacion es: %.2lf\n",resp);
        break;
    case 4:
        if (num2!=0)
        {
            resp=num1/num2;
            printf("El resultado de la division es: %.2lf\n",resp);
        }else{
            printf("No se puede dividir para 0\n");
        } 
        break;
    default:
        printf("No existe la opcion\n");
        break;
    }
    printf("Desea realizar otra operacion?\n1.Si\n2.No\n>>");
    scanf("%d",&opc2);
    }while (opc2==1);
    
    return 0;
}