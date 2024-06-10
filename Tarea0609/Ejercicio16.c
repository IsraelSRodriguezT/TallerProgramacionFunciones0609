#include <stdio.h>
//Declaro las funciones
float bucle(int numeros, float snumeros);
int numerosmal(int numeros);
void resultadofinal(float resultado);
int main(){
    printf("Programa para calcular la suma de una serie de numeros fraccionarios con For\n"); //Indico que tipo de programa estoy realizando
    int numeros; //Defino variable
    printf("Escribe hasta que cantidad de numeros quieres que se sumen\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numeros); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    if (numerosmal(numeros)){ //Estructura Condicional Simple para que si numeros sea menor o igual a 0, pues que no se ejecute el programa
        printf("El numero que ingresaste es negativo o es 0 por lo cual no va a funcionar el programa");
        return 1;
    }
    float resultado=bucle((numeros),0.0); /*Le indico a la funcion los valores que van a tomar sus variables, y que su
    resultado se guarde en la variable resultado*/
    resultadofinal(resultado); //LLamo a la funcion
    return 0;
}
/*Bucle For debido a que es optimo cuando se necesita realizar operaciones de distintos parametros en el menor numero de lineas posibles,
por el hecho de que su sintaxis es tan clara facilitando asi la comprension y mantenimiento de un codigo ante los errores que se puedan presentar*/
float bucle(int numeros, float snumeros){
    for(int i=1;i<=numeros;i++){ /*Inicializo que i sea igual a 1, establezco que el bucle termine cuando i sea mayor o igual a numeros,
    y que en cada iteracion a i se le sume 1*/
        if(i==numeros){ //Estructura Condicional Doble para saber hasta cuando presentar el +
            printf ("1/%d=", i);
        } else{
            printf("1/%d+", i);
        }
        snumeros+=(1.0/i); //Variable donde se guarda y suma el valor de dividir 1 para i
    }
    return snumeros; //Devuelvo el valor de snumeros
}
int numerosmal(int numeros){
    return (numeros<=0); //Devuelvo como valor una condicion
}
void resultadofinal(float resultado){
    printf("%.4f",resultado); //Indico el resultado del calculo realizado
}