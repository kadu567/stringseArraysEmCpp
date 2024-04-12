#include <iostream>
#include <string>

int main(){

    std::string str = "Hello, world!";
    int pos = str.find("World");
    if (pos != std::string::npos){
        printf("Encontrado na posicao: %d\n", pos);
    }else {
        printf("Nao encotrado.\n");
        }
    return 0;
}