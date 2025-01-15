#include "AList.h"
#include <iostream>

int main(){

    std::cout << "Hello World" << std::endl;

    AList<int> alist;

    for (int i{1}; i <=14; i++){
        alist.addLeft(i);
        alist.ddisplay();
    }   

    return 0;
}