#include "SecurityLibrary.h"
#include <iostream>
#include "../CoreLibrary/CoreLibrary.h"
using namespace std;

SecurityLibrary::SecurityLibrary()
{
    language = "";
}

SecurityLibrary::SecurityLibrary(string languageDescriptor)
{
}

void SecurityLibrary::SecurityLibraryFunction(void)
{
    cout << "Application1Library::Application1LibraryFunction -> SecurityLibrary::SecurityLibraryFunction - Do some security" << endl;

    CoreLibrary coreLibrary;
    coreLibrary.CoreLibraryFunction2();
}

void SecurityLibrary_API_Function1()
{
}

int SecurityLibrary_API_Function2()
{
    return 0;
}

bool SecurityLibrary_API_Function3()
{
    return false;
}
