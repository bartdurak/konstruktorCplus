#include <iostream>
#include "event.h"

using namespace std;

int main() {
    //konstruktor
    Event w1("Wracamy z rekolekcji: ");
    //Event w1 ("Apokalipsa zombie", 6,8,2045,8,15);
    w1.show();
    return 0;
}
