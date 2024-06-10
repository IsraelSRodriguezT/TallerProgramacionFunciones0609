#include <stdio.h>
//Declaro las funciones
int bucle(int num, int pot, int aux);
int numeromal(int pot);
void resultadofinal(int resultado);
int main(){
    printf("Programa para calcular la potencia de un numero mediante sumas sucesivas con For\n"); //Indico que tipo de programa estoy realizando
    int num,pot; //Defino variables
    printf("Escriba un numero para realizar el calculo\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &num); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    printf("Escriba el numero al que debe estar elevado\n"); //Indico que el usuario ingrese el numero del exponente
    scanf("%d", &pot); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    if (numeromal(pot)){ //Estructura Condicional Simple para que si pot sea menor o igual a 0, pues que no se ejecute el programa
        printf("El numero que ingresaste es negativo por lo cual no va a funcionar el programa");
        return 1;
    }
    int resultado=bucle((num),(pot),1); /*Le indico a la funcion los valores que van a tomar sus variables, y que su resultado
    se guarde en la variable resultado*/
    resultadofinal(resultado); //LLamo a la funcion
    return 0;
}
/*Bucle For debido a que es el mas optimo, ademas de que me permite tener una estructura clara de lo que estoy evaluando 
dentro del bucle, y como van cambiando los parametros entre cada iteracion*/
int bucle(int num, int pot, int aux){
    printf("%d^%d=",num,pot); //Indico que tipo de calculo estoy realizando
    for (int i=0;i<pot;i++){ /*Inicializo con i=0, busco que el bucle continue mientras i 
    sea menor al valor de pot, y que se le sume uno a i por cada iteracion del bucle*/ 
        if (i==(pot-1)){ //Estructura Condicional Doble para especificar cuando debe dejar de mostrarme al final el *
            printf("%d=",num);
        } else {
            printf("%d*",num);
        }
        aux*=num; //Aqui se va a ir guardando la multiplicacion de lo que se guardo anteriormente y lo multiplica por num
    } 
    return aux; //Devuelvo el valor de aux
}
int numeromal(int pot){
    return (pot<0); //Devuelvo como valor una condicion
}
void resultadofinal(int resultado){
    printf("%d\n",resultado); //Indico el resultado de la potencia realizada
}