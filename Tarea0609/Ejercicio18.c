#include <stdio.h>
//Declaro las funciones
int bucle(int numeros, int cont);
int bucle2(int numerador, int contp);
int numerosmal(int numeros);
void resultadofinal(int numeros, int resultado);
int main(){
    printf("Programa para contar cuantos numeros primos hay desde 1 hasta n con For\n"); //Indico que tipo de programa estoy realizando
    int numeros; //Defino variable
    printf("Escribe hasta que numero quieres que se presenten los numeros primos\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numeros); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    if (numerosmal(numeros)){ //Estructura Condicional Simple para que si numeros sea menor o igual a 0, pues que no se ejecute el programa
        printf("El numero que ingresaste es negativo o es 0 por lo cual no va a funcionar el programa");
        return 1;
    }
    int resultado=bucle((numeros),0); /*Le indico a la funcion los valores que van a tomar sus variables, y que su
    resultado se guarde en la variable resultado*/
    resultadofinal((numeros),(resultado)); //LLamo a la funcion
    return 0;
}
/*Bucle For debido a que es optimo cuando se necesita realizar operaciones de distintos parametros en el menor numero de lineas posibles,
por el hecho de que su sintaxis es tan clara facilitando asi la comprension y mantenimiento de un codigo ante los errores que se puedan presentar*/
int bucle(int numeros, int cont){
    for(int numerador=1;numerador<=numeros;numerador++){ /*Inicializo que numerador sea igual a 1, establezco que el bucle se termine 
    cuando numerador sea mayor o igual a numeros, y que en cada iteracion a numerador se le sume 1*/
        int resultadobucle2=bucle2((numerador),0); /*Le indico a la funcion los valores que van a tomar sus variables, y que su
    resultado se guarde en la variable resultadobucle2*/
        if(resultadobucle2==2){ //Estructura Condicional Multiple para presentar la secuencia de numeros primos dentro de []
            if (numerador==2){
                printf("[%d", numerador);
            } else{
                printf(",%d", numerador);
            }
            cont++; //Establezco que en cada iteracion a cont se le sume 1
        } else if (numeros==1){
            printf("[");
        }
    }
    printf("]\n"); //Para cerrar el []
    return cont; //Devuelvo el valor de cont
}
int bucle2(int numerador, int contp){
    for(int denominador=1;denominador<=numerador;denominador++){ /*Inicializo que denominador sea igual a 1, establezco que el bucle se 
    termine cuando denominador sea mayor o igual a numerador, y que en cada iteracion a denominador se le sume 1*/
        if(numerador%denominador==0){ //Estructura Condicional Simple para que se contee cuando sea numero primo
            contp++; //Establezco que en cada iteracion a contp se le sume 1
        }
    }
    return contp; //Devuelvo el valor de contp
}
int numerosmal(int numeros){
    return (numeros<=0); //Devuelvo como valor una condicion
}
void resultadofinal(int numeros, int resultado){
    printf("Hasta %d hay %d numeros primos", numeros,resultado); //Indico el resultado del calculo realizado
}