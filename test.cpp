#include <iostream>
#include <string>

int main(){
    std::string name {"Hello World"};
    for (auto i:name){
         if (i == ' '){
        std::cout<<name<<std::endl;
        }
    }
    return 0;
}