#include "AList.h"

int main() {
    AList<int> list;
    for (int i = 0; i < 12; ++i) {
        list.addLeft(i); // This should succeed
    }
    list.addLeft(99); // This should trigger an assertion error
    return 0;
}
