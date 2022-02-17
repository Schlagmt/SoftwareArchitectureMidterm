#include "SecurityLibrary.h"
#include <iostream>
#include "../CoreLibrary/CoreLibrary.h"
using namespace std;

SecurityLibrary::SecurityLibrary()
{
    return;
}

void SecurityLibrary::SecurityLibraryFunction(void)
{
    cout << "Application1Library::Application1LibraryFunction -> SecurityLibrary::SecurityLibraryFunction - Do some security" << endl;

    CoreLibrary coreLibrary;
    coreLibrary.CoreLibraryFunction2();
}
