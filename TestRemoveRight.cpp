#include "AList.h"

int main() {
    AList<int> list;
    list.addRight(10); // Add an element to remove
    list.removeRight(); // This should succeed
    list.removeRight(); // This should trigger an assertion error
    return 0;
}
