#include <iostream>
#include "person.hpp"

using std::cout;
using std::endl;

int main()
{
    cout << "List of my friends:\n\n";

    Person p1("John", "Bloggs");
    cout << "\t" << p1.ToString() << endl;

    cout << endl;

    return 0;
}