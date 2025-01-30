#include "AList.h"

int main() {
    AList<int> list;
    list.addLeft(5); // Add an element to remove
    list.removeLeft(); // This should succeed
    list.removeLeft(); // This should trigger an assertion error
    return 0;
}
