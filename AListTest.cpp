#include "AList.h"
#include <iostream>

int main(){

    std::cout << "Hello World" << std::endl;

    AList<int> alist;

    for (int i{1}; i <=14; i++){
        alist.addLeft(i);
        alist.display();
    }   
    alist.clear();
    for (int i{1}; i <=4; i++){
        alist.addRight(i);
        alist.display();
    }   
    // AList<std::string> blist;

    // for (int i{1}; i <= 14; i++){
    //     blist.addRight(to_string(i));
    //     blist.display();
    // }
    alist.clear();
    alist.display();
    alist.addRight(4);
    alist.display();

    AList<int> blist;
    blist.ddisplay();
    blist.addRight(4);
    blist.ddisplay();
    blist.addRight(2134);
    blist.addLeft(41);
    blist.ddisplay();



    return 0;
}