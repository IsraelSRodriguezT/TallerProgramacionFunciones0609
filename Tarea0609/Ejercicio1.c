#include <stdio.h>
//Declaro las funciones
int bucle (int aux, int pdec, long numero);
int numeromal (long numero);
void resultadofinal (int resultado);
int main (){
    printf("Programa para sumar los digitos de un numero natural con For\n"); //Indico que tipo de programa estoy realizando
    long numero; //Defino variable
    printf("Escriba un numero para realizar el calculo\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numero); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    if (numeromal(numero)){ //Estructura Condicional Simple para que si el valor de numero fuera negativo pues que el programa no se ejecute
        printf("Ingresaste un numero negativo por lo cual no se va a ejecutar el programa\n");
        return 1;
    }
    int resultado=bucle (0,0,(numero)); /*Le indico a la funcion los valores que van a tomar sus variables, y que su resultado
    se guarde en la variable resultado*/
    resultadofinal(resultado); //LLamo a la funcion
    return 0;
}
/*Bucle For debido a que es el mas optimo, ademas de que me permite tener una estructura clara de lo que estoy evaluando 
dentro del bucle, y como van cambiando los parametros entre cada iteracion*/
int bucle (int aux, int pdec, long numero){
    for (int i=numero;i>0;i/=10){ /*Inicializo i con el numero al que necesito que se sumen los digitos,
    busco que el bucle termine cuando el valor de i deje de ser mayor de 0, y que en cada iteracion i sea dividido para 10*/
        pdec= i%10; //En esta variable se guarda el residuo de dividirlo para 10, entonces el valor entero
        aux+=pdec; // En esta variable se va guardando y sumando cada residuo, para asi presentarlo al final  
        if (i<10){ //Estructura Condicional Doble para especificar cuando debe dejar de mostrarme al final el +
            printf("%d=",pdec);
        }else{
            printf("%d+",pdec);
        }
    }
    return aux; //Devuelvo el valor de aux
}
int numeromal (long numero){
    return (numero<0); //Devuelvo como valor una condicion
}
void resultadofinal (int resultado){
    printf("%d\n",resultado); //Indico la suma de los digitos del numero que utilize al principio
}


