#include <stdio.h>
//Declaro las funciones
int bucle(int numero, int aux);
int numeromal(int numero);
void resultadofinal(int resultado); 
int main(){
    printf("Programa para calcular el factorial de un numero con For\n"); //Indico que tipo de programa estoy realizando
    int numero; //Defino variable
    printf("Escriba un numero para realizar el calculo\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numero); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    if (numeromal(numero)){ //Estructura Condicional Simple para que si numero sea menor o igual a 0, pues que no se ejecute el programa
        printf("El numero que ingresaste es negativo o es 0 por lo cual no va a funcionar el programa");
        return 1;
    }
    printf("%d!=",numero); //Indico que tipo de calculo estoy realizando
    int resultado=bucle((numero), 1); /*Le indico a la funcion los valores que van a tomar sus variables, y que su resultado
    se guarde en la variable resultado*/
    resultadofinal(resultado); //LLamo a la funcion
    return 0;
}
/*Bucle For debido a que me permite tener una estructura clara de lo que estoy evaluando dentro del bucle, y en el caso de querer 
estructurarlo para otro bucle, que sea mas facil adaptarlo*/
int bucle(int numero, int aux){
    for(int i=numero;i>0;i--){/*Iniciaizo que el valor de i sea igual al de numero, establezo que mi condicion pare el bucle si 
    i es mayor a 0, y que en cada iteracion a i se le reste 1*/
        if (i==1){ //Estructura Condicional Doble para indicar cuando deberia dejar de presentarse el +
            printf("%d=",i);
        } else {
            printf("%d*",i);
        }
        aux*=i; //Variable donde se va a guardar las multiplicaciones por i
    }
    return aux; //Devuelvo el valor de aux
}
int numeromal(int numero){
    return (numero<=0); //Devuelvo como valor una condicion
}
void resultadofinal(int resultado){
    printf("%d\n",resultado); //Indico el resultado del calculo realizada 
} 