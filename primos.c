#include <stdio.h>

int encontrar_primeiro_divisor(int inteiro){
    for(int i = 2; i <= inteiro; i++){
        if(inteiro % i == 0){
            return i;
        }
    }
    return inteiro;
}

int verificar_repeticao(int encontrados[], int vetorTamanho, int inteiro){
    for(int i = 0; i < vetorTamanho; i++){
        if(encontrados[i] == inteiro){
            return 1;
        }
    }
    return 0;
}




int main(){
    int encontrados[10000];
    int i = 0;
    int iEncontrados = 0;

    for(int n = 2; n < 10000; n++){
        int divisor = encontrar_primeiro_divisor(n);

        if(verificar_repeticao(encontrados, i, divisor) == 0){
            iEncontrados++;
            encontrados[i] = divisor;
            printf("%d", divisor);
            i++;
        }
    }
    
    
    printf("Foram encontrados %d primos.", iEncontrados );
}
