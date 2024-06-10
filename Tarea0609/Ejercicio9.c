#include <stdio.h>
//Declaro las funciones
int bucle(int numero, int aux);
int numeromal(int numero);
void resultadofinal(int resultado);
int main(){
    printf("Programa para contar el numero de digitos de un numero con For\n"); //Indico que tipo de programa estoy realizando
    int numero; //Defino variable
    printf("Escriba un numero para realizar el conteo\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numero); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    if (numeromal(numero)){ //Estructura Condicional Simple para que si numero sea menor a 0, pues que no se ejecute el programa
        printf("El numero que ingresaste es negativo por lo cual no va a funcionar el programa");
        return 1;
    }
    int resultado=bucle((numero),0); /*Le indico a la funcion los valores que van a tomar sus variables, y que su resultado
    se guarde en la variable resultado*/
    resultadofinal(resultado); //LLamo a la funcion
    return 0;
}
/*Bucle For debido a que me permite tener una estructura clara de lo que estoy evaluando dentro del bucle, y en el caso de querer 
estructurarlo para otro bucle, que sea mas facil adaptarlo*/
int bucle(int numero, int aux){
    for(int i=numero;i>0;i/=10){ /*Inicializo que i sea igual a numero, establezco que el bucle termine cuando i sea menor a 0,
    y que en cada iteracion i sea dividido para 10*/
        aux++; //Establezco que en cada iteracion a aux se le sume 1
    }
    return aux; //Devuelvo el valor de aux
}
int numeromal(int numero){
    return (numero<0); //Devuelvo como valor una condicion
}
void resultadofinal(int resultado){
    printf("El numero que presentaste tiene %d digitos",resultado); //Indico el resultado del conteo realizada 
}