#include <stdio.h>
#include <string.h>

int main(){
    char palavra[] = "palavra";
    
    for(int i = strlen(palavra);i >= 0;i--){
        printf("%c",palavra[i]);
    }
  
}
