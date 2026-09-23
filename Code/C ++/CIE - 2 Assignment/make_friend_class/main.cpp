

// #include "ClassA.h"
#include "ClassB.h"

int main() {
    ClassA objA;
    ClassB objB;

    objB.showSecret(objA);  // Access private data of ClassA via ClassB
    return 0;
}
