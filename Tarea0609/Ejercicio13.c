#include <stdio.h>
//Declaro las funciones
int bucle(int numeros, int snumeros);
int numerosmal(int numeros);
void resultadofinal(int resultado);
int main(){
    printf("Programa para calcular la suma de los numeros pares desde 1 hasta n con For\n"); //Indico que tipo de programa estoy realizando
    int numeros; //Defino variable
    printf("Escribe hasta que numero quieres que se sumen los numeros pares\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numeros); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    if (numerosmal(numeros)){ //Estructura Condicional Simple para que si numeros sea menor o igual a 1, pues que no se ejecute el programa
        printf("El numero que ingresaste es menor a 2 por lo cual no va a funcionar el programa");
        return 1;
    }
    int resultado=bucle((numeros),0); /*Le indico a la funcion los valores que van a tomar sus variables, y que su
    resultado se guarde en la variable resultado*/
    resultadofinal(resultado); //LLamo a la funcion
    return 0;
}
/*Bucle For debido a que me permite demostrar que el código sea fácil de entender, y en el caso de querer 
estructurarlo para otro bucle, que sea mas facil adaptarlo*/
int bucle(int numeros, int snumeros){
    for (int i=1;i<=numeros;i++){ /*Inicializo que i sea igual a 1, establezco que el bucle termine cuando i sea mayor o igual a numeros,
    y que en cada iteracion a i se le sume 1*/
        if(i%2==0){ //Estructura Condicional Multiple para indicar cuando deje de presentarse el +
            if (i==(numeros-1)){
                printf("%d=", i);
            }else if(numeros%2==0 && i==numeros){ 
                printf("%d=", i);
            }else{
                printf("%d+", i);
            }
            snumeros+=i; //Variable donde se guarda y sume el valor de i
        }
    }
    return snumeros; //Devuelvo el valor de snumeros
}
int numerosmal(int numeros){
    return (numeros<=1); //Devuelvo como valor una condicion
}
void resultadofinal(int resultado){
    printf("%d", resultado); //Indico el resultado del calculo realizado
}