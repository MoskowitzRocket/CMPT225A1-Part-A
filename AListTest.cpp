#include "AList.h"
#include <iostream>

int main(){

    

    AList<int> alist;

    // for (int i{1}; i <=12; i++){
    //     alist.addLeft(i);
    //     alist.display();
    // }  
    // for (int i{1}; i <=12; i++){
    //     alist.removeLeft();
    //     alist.display();
    // }  
    alist.addLeft(53);
    alist.display();
    // alist.ddisplay();
    alist.clear();
    alist.display();
    // alist.display();

    alist.addLeft(58);
    //alist.display();
    alist.display();
    alist.addRight(59);
    alist.addRight(59);
    alist.display();



    return 0;
}