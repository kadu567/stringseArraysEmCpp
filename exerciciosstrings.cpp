#include <iostream>
#include <cstring>

int main(){
    char str[100];
    printf("Digite uma palavra: \n");
    scanf("%s", str);
    printf("Tamanho de string: %zu\n", strlen(str));
    return 0;
}