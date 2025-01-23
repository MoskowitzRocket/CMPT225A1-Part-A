#include "AList.h"
#include <iostream>
#include <string>

int main(){

    AList<int> intList;

    std::cout << "Adding 1 to the right" << std::endl;
    intList.addRight(1);
    intList.ddisplay();
    std::cout << "Adding 2, 3, 4 to the right" << std::endl;
    intList.addRight(2);
    intList.addRight(3);
    intList.addRight(4);
    intList.ddisplay();

    std::cout << "Removing from the right" << std::endl;
    std::cout << "Removed: " << intList.removeRight() << std::endl;
    intList.ddisplay();

    std::cout << "Removing from the left" << std::endl;
    std::cout << "Removed: " << intList.removeLeft() << std::endl;
    intList.ddisplay();

    std::cout << "Adding 5 to the left" << std::endl;
    intList.addLeft(5);
    intList.ddisplay();

    std::cout << "Adding 6 to the left" << std::endl;
    intList.addLeft(6);
    intList.ddisplay();

    std::cout << "Removing from the left" << std::endl;
    std::cout << "Removed: " << intList.removeLeft() << std::endl;
    intList.ddisplay();

    std::cout << "Clearing" << std::endl;
    intList.clear();
    intList.ddisplay();

    std::cout << "Adding 1 Through 12 alternating left and right" << std::endl;
    for (int i = 1; i <= 12; i++) {
        if (i % 2 == 0) {
            intList.addRight(i);
            intList.display();
        } else {
            intList.addLeft(i);
            intList.display();
        }
    }
    intList.ddisplay();

    std::cout << "Removing from the right" << std::endl;
    std::cout << "Removed: " << intList.removeRight() << std::endl;
    intList.ddisplay();

    std::cout << "Removing from the left" << std::endl;
    std::cout << "Removed: " << intList.removeLeft() << std::endl;
    intList.ddisplay();

    std::cout << "Clearing" << std::endl;
    intList.clear();
    intList.ddisplay();

    std::cout << "Filling up on the left" << std::endl;
    for (int i = 1; i <= 12; i++) {
        intList.addLeft(i);
        intList.display();
    }
    intList.ddisplay();

    std::cout << "Adding an overflow value on the right" << std::endl;
    intList.addRight(500);
    intList.ddisplay();

    std::cout << "Adding an overflow value on the left" << std::endl;
    intList.addLeft(600);
    intList.ddisplay();

    std::cout << "Removing from the right" << std::endl;
    std::cout << "Removed: " << intList.removeRight() << std::endl;
    intList.ddisplay();

    std::cout << "Removing from the left" << std::endl;
    std::cout << "Removed: " << intList.removeLeft() << std::endl;  
    intList.ddisplay();

    std::cout << "Removing from the right" << std::endl;
    std::cout << "Removed: " << intList.removeRight() << std::endl;
    intList.ddisplay();

    std::cout << "Removing from the right" << std::endl;
    std::cout << "Removed: " << intList.removeRight() << std::endl;
    intList.ddisplay();
    std::cout << "Removing from the right" << std::endl;
    std::cout << "Removed: " << intList.removeRight() << std::endl;
    intList.ddisplay();



    return 0;
}