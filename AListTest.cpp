#include "AList.h"
#include <iostream>
#include <string>

void testAList() {
    AList<int> intList;

    // Test initial state
    std::cout << "Initial state:\n";
    intList.ddisplay();

    // Test adding elements to the left
    std::cout << "Adding elements to the left:\n";
    intList.addLeft(10);
    intList.addLeft(20);
    intList.addLeft(30);
    intList.ddisplay();

    // Test adding elements to the right
    std::cout << "Adding elements to the right:\n";
    intList.addRight(40);
    intList.addRight(50);
    intList.ddisplay();

    // Test removing elements from the right
    std::cout << "Removing elements from the right:\n";
    std::cout << "Removed: " << intList.removeRight() << "\n";
    std::cout << "Removed: " << intList.removeRight() << "\n";
    intList.ddisplay();

    // Test removing elements from the left
    std::cout << "Removing elements from the left:\n";
    std::cout << "Removed: " << intList.removeLeft() << "\n";
    std::cout << "Removed: " << intList.removeLeft() << "\n";
    intList.ddisplay();

    // Test clearing the list
    std::cout << "Clearing the list:\n";
    intList.clear();
    intList.ddisplay();

    // Test adding and removing in a mixed pattern
    std::cout << "Mixed operations:\n";
    intList.addLeft(5);
    intList.addRight(15);
    intList.addLeft(25);
    intList.addRight(35);
    intList.ddisplay();

    std::cout << "Removing from both ends:\n";
    std::cout << "Removed Left: " << intList.removeLeft() << "\n";
    std::cout << "Removed Right: " << intList.removeRight() << "\n";
    intList.ddisplay();

    // Test boundary conditions
    std::cout << "Testing boundary conditions:\n";
    for (int i = 0; i < 12; ++i) {
        intList.addRight(i);
    }
    intList.ddisplay();

    std::cout << "Removing all elements:\n";
    while (!intList.empty()) {
        std::cout << "Removed: " << intList.removeLeft() << "\n";
    }
    intList.ddisplay();

    // Test with strings
    std::cout << "Testing with strings:\n";
    AList<std::string> stringList;
    stringList.addRight("Hello");
    stringList.addLeft("World");
    stringList.addRight("!");
    stringList.ddisplay();
    
    stringList.removeLeft();
    stringList.removeRight();
    stringList.ddisplay();
}

int main() {
    testAList();

    AList<int> alist;
    alist.addLeft(5);
    alist.ddisplay();

    return 0;
}
