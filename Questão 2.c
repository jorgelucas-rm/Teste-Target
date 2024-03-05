#include <stdio.h>
#include <stdbool.h>

int fibonacci(int x){
    if(x == 0 || x == 1){
        return x;
    }else{
        return fibonacci(x-1) + fibonacci(x-2);
    }
}

int main(){
    
    int entrada, contador;
    
    printf("Digite um número inteiro: ");
    scanf("%d",&entrada);
    
    while(true){
        if(fibonacci(contador) == entrada){
            printf("Esse número pertence à sequência de fibonacci.");
            break;
        }
        else if(entrada < fibonacci(contador)){
            printf("Esse número não pertence à sequência de fibonacci.");
            break;
        }
        contador++;
    }
  
}
