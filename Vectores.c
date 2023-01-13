#include<stdio.h>

int main(){
    
int mayor_index, menor_index;
double mayor_val, menor_val, suma_val;


double v1[]={8,5,12,9,3,40,25,122,117,354,478,220,324,6,18,620,220,110,22,37,584,11,13,16,33,44,55,66,77,89};

int longitud=sizeof(v1)/sizeof(v1[0]);


printf("El tamano del vector es: %d",longitud);

void valor_mayor(double v1[], int size, double *mayor_val, int *mayor_index){
    *mayor_val = v1[0];
    *mayor_index = 0;
    for (int i = 1; i < size; i++) {
        if (v1[i] > *mayor_val) {
            *mayor_val = v1[i];
            *mayor_index = i;
        }
    }
}

void valor_mayor_index(double v1[], int size, int *mayor_index) {
    double mayor_val = v1[0];
    *mayor_index = 0;
    for (int i = 1; i < size; i++) {
        if (v1[i] > mayor_val) {
            mayor_val = v1[i];
            *mayor_index = i;
        }
    }
}

void valor_menor(double v1[], int size, double *menor_val, int *menor_index) {
    *menor_val = v1[0];
    *menor_index = 0;
    for (int i = 1; i < size; i++) {
        if (v1[i] < *menor_val) {
            *menor_val = v1[i];
            *menor_index = i;
        }
    }
}


void valor_suma(double v1[], int size, double *suma_val)
 {
   
    for (int i = 1; i <= v1[0] ; i++) {
       
            *suma_val = v1[i]/size;
         
    }

}




valor_mayor(v1,sizeof(v1)/sizeof(v1[0]),&mayor_val,&mayor_index);
valor_mayor_index(v1,sizeof(v1)/sizeof(v1[0]),&mayor_index);
valor_menor(v1,sizeof(v1)/sizeof(v1[0]),&menor_val,&menor_index);

valor_suma(v1,sizeof(v1)/sizeof(v1[0]),&suma_val);


printf("\n El mayor numero es: %.2f: \n en la posicion: %d\n",mayor_val,mayor_index);
printf(" El menor valor es: %.2f \n en la posicion: %d\n",menor_val,menor_index);
printf("La media aritmetica es: %d\n",suma_val);

}
