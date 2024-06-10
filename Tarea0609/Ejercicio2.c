#include <stdio.h>
//Declaro las funciones
int bucle(int num, int inum, long numero);
int numeromal(long numero);
void resultadofinal(int resultado);
int main(){
    printf("Programa para obtener el inverso de un numero natural con For\n"); //Indico que tipo de programa estoy realizando
    long numero; //Defino variable
    printf("Escriba un numero para realizar el calculo\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numero); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    if (numeromal(numero)){ //Estructura Condicional Simple para que si el valor de numero fuera negativo pues que el programa no se ejecute
        printf("Ingresaste un numero negativo por lo cual no se va a ejecutar el programa\n");
        return 1;
    }
    int resultado=bucle(0,0,(numero)); /*Le indico a la funcion los valores que van a tomar sus variables, y que su resultado
    se guarde en la variable resultado*/
    resultadofinal(resultado); //LLamo a la funcion
    return 0;
}
/*Bucle For debido a que es el mas optimo, ademas de que me permite tener una estructura clara de lo que estoy evaluando 
dentro del bucle, y como van cambiando los parametros entre cada iteracion*/
int bucle(int num, int inum, long numero){
    for(int i=numero;i>0;i/=10){ /*Inicializo un numero al que necesite invertirlo, especifico que necesito que el bucle se detenga 
    si deja de ser mayor de 0, y que por cada iteracion se valla dividiendo para 10*/
        num=i%10; //En esta variable se guarda el residuo de dividirlo para 10, entonces el valor entero
        inum=inum*10+num; //En cada iteracion multiplico por 10 para que crezca en un digito e ir sumando el valor del residuo
    }
    return inum; //Devuelvo el valor de inum
}
int numeromal(long numero){
    return (numero<0); //Devuelvo como valor una condicion
}
void resultadofinal(int resultado){
    printf("%d\n",resultado); //Indico el numero inverso del numero que se proporciono al principio
}