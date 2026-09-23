#include <windows.h>
#include <iostream>

int main() {

    Beep(750, 300); // A nice medium beep
    Beep(500, 500); // A deep beep
    Beep(1000, 100); // A sharp quick beep

    /*
    first is for frequency and sceond is for duration
    */
    return 0;
}
