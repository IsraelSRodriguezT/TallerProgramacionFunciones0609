#include <stdio.h> 
//Declaro las funciones
double bucle(double numero, double raiz);
void resultadofinal(double numero, double resultado);
int main() {
    printf("Programa para calcular la raiz cubica de un numero utilizando restas sucesivas con For\n"); //Indico que tipo de programa estoy realizando
    double numero; //Defino variable
    printf("Escribe un numero entero al que le quieras sacar raiz cubica\n"); //Indico que el usuario ingrese un numero
    scanf("%lf", &numero); //Utilizo scanf %lf para que se pueda leer un valor numerico decimal desde el teclado
    double resultado=bucle((numero), 0.0); /*Le indico a la funcion los valores que van a tomar sus variables, y que su resultado
    se guarde en la variable resultado*/
    resultadofinal((numero),(resultado)); //LLamo a la funcion
    return 0;
}
double bucle(double numero, double raiz){
    if(numero>0){ //Estructura Condicional Simple para que de acuerdo a si fuera poristivo negativo, pues se le sumen o resten decimales
        for(raiz = 0.0; raiz * raiz * raiz <= numero; raiz += 0.001) {} /*Inicializo que raiz empieze con 0.0 
        (para indicar que es flotante), establezco que el bucle termine si el resultado de multiplicar 3 veces raiz es mayor o 
        igual a numero, y que en cada iteracion a raiz se le sume 0.001*/
        raiz -= 0.001; //Variable donde se le resta en decimal para ser un poco mas precisos con el resultado
    } else{
        for(raiz = 0.0; raiz * raiz * raiz >= numero; raiz -= 0.001) {} /*Inicializo que raiz empieze con 0.0 
        (para indicar que es flotante), establezco que el bucle termine si el resultado de multiplicar 3 veces raiz es menor o 
        igual a numero, y que en cada iteracion a raiz se le reste 0.001*/
        raiz += 0.001; //Variable donde se le suma en decimal para ser un poco mas precisos con el resultado
    }
    return raiz; //Devuelvo el valor de raiz
}
void resultadofinal(double numero, double resultado){
    printf("La raiz cubica de %.2lf es %.2lf\n", numero, resultado); //Indico el resultado del calculo realizado
}