#include <stdio.h>
//Declaro las funciones
int bucle(int numero, int snumero);
int bucle2(int sum, int aux);
int numeromal(int numero);
void resultadofinal(int resultado);
int main(){
    printf("Programa para calcular la suma de los factoriales de los primeros n numeros con For\n"); //Indico que tipo de programa estoy realizando
    int numero; //Defino variable
    printf("Escriba un numero para realizar el calculo\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numero); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    if (numeromal(numero)){ //Estructura Condicional Simple para que si numero sea menor o igual a 0, pues que no se ejecute el programa
        printf("El numero que ingresaste es negativo o es 0 por lo cual no va a funcionar el programa");
        return 1;
    }
    int resultado=bucle((numero),0); /*Le indico a la funcion los valores que van a tomar sus variables, y que su
    resultado se guarde en la variable resultado*/
    resultadofinal(resultado); //LLamo a la funcion
    return 0;
}
/*Bucle For debido a que es optimo cuando se necesita realizar operaciones de distintos parametros en el menor numero de lineas posibles,
por el hecho de que su sintaxis es tan clara facilitando asi la comprension y mantenimiento de un codigo ante los errores que se puedan presentar*/
int bucle(int numero, int snumero){
    int cantidad[numero]; //Defino un arreglo
    for(int sum=1;sum<=numero;sum++){ /*Inicializo que sum sea igual a 1, establezco que el bucle termine cuando sum sea mayor o igual 
    a numero, y que en cada iteracion a sum se le sume 1*/
        int aux=1; //Defino variable para que se reinicie en cada iteracion
        if(sum==numero){ //Estructura Condicional Doble para saber hasta cuando presentar el +
            printf("%d!=", sum);
        } else{
            printf("%d!+", sum); 
        }
        int resultadobucle2=bucle2((sum),1); /*Le indico a la funcion los valores que van a tomar sus variables, y que su
    resultado se guarde en la variable resultadobucle2*/
        cantidad[sum-1]=resultadobucle2; //Establezco que en cada iteracion al arreglo se le valla asignando el valor de aux
        snumero+=resultadobucle2; //Variable donde se guarda y suma el resultado
    }
    for (int i=0;i<numero;i++){ /*Inicializo que fact sea igual a 1, establezco que el bucle termine cuando fact sea mayor 
        o igual a sum, y que en cada iteracion a fact se le sume 1*/
        if(i==(numero-1)){ //Estructura Condicional Doble para saber hasta cuando presentar el +
            printf("%d=", cantidad[i]);
        } else{
            printf("%d+", cantidad[i]); 
        }
    }
    return snumero; //Devuelvo el valor de snumero
}
int bucle2(int sum, int aux){
    for(int fact=1;fact<=sum;fact++){ /*Inicializo que fact sea igual a 1, establezco que el bucle termine cuando fact sea mayor 
    o igual a sum, y que en cada iteracion a fact se le sume 1*/
        aux*=fact; //Variable donde se guarda y multiplica en cada iteracion por fact
    }
    return aux; //Devuelvo el valor de aux
}
int numeromal(int numero){
    return (numero<=0); //Devuelvo como valor una condicion
}
void resultadofinal(int resultado){
    printf("%d", resultado); //Indico el resultado del calculo realizado
}