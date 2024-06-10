#include <stdio.h>
//Declaro las funciones
int bucle(int numeros, int ptermino, int snumeros, int diferencia);
int numerosmal(int numeros);
int resultadofinal(int resultado);
int main(){
    printf("Programa para calcular el producto de los primeros n terminos de una serie geometrica con For\n"); //Indico que tipo de programa estoy realizando
    int numeros,ptermino,diferencia; //Defino variables
    printf("Escribe cuantos terminos va a tener la serie geometrica\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numeros); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    if (numerosmal(numeros)){ //Estructura Condicional Simple para que si numeros sea menor o igual a 0, pues que no se ejecute el programa
        printf("El numero que ingresaste es negativo o es 0 por lo cual no va a funcionar el programa");
        return 1;
    }
    printf("Escribe la diferencia que va a tener la serie entre sus terminos\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &diferencia); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    printf("Escribe el termino con el que va a empezar tu serie\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &ptermino); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    int resultado=bucle((numeros),(ptermino),1,(diferencia)); /*Le indico a la funcion los valores que van a tomar sus variables, y que
    su resultado se guarde en la variable resultado*/
    resultadofinal(resultado); //LLamo a la funcion
    return 0;
}
/*Bucle For debido a que me permite tener una estructura clara de lo que estoy evaluando dentro del bucle, y en el caso de querer 
estructurarlo para otro bucle, que sea mas facil adaptarlo*/
int bucle(int numeros, int ptermino, int snumeros, int diferencia){
    for(int i=0;i<numeros;i++){ /*Inicialaizo que i es igual a 0, establezco que el bucle termine cuando i sea mayor a numeros,
    y que en cada iteracion a i se le sume 1*/
        if (i==(numeros-1)){ //Estructura Condicional Doble para que deje de presentarse el *
            printf("%d=", ptermino);
        } else{
            printf("%d*", ptermino);
            
        }
        snumeros*=ptermino; //Variable donde se guarda y se le suma el valor de ptermino
        ptermino*=diferencia; //Se busca que el valor de ptermino cambie por la diferencia
    }
    return snumeros; //Devuelvo el valor de snumeros
}
int numerosmal(int numeros){
    return (numeros<=0); //Devuelvo como valor una condicion
}
int resultadofinal(int resultado){
    printf("%d", resultado); //Indico el resultado del calculo realizada 
}