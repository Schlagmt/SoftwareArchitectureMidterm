#include "LicensingLibrary.h"
#include <iostream>
#include "../CoreLibrary/CoreLibrary.h"
using namespace std;

LicensingLibrary::LicensingLibrary()
{
    language = "";
}

LicensingLibrary::LicensingLibrary(string languageDescriptor)
{
}

void LicensingLibrary::LicensingLibraryFunction(void)
{
    cout << "Application1Library::Application1LibraryFunction -> LicensingLibrary::LicensingLibraryFunction - Do some licensing" << endl;

    CoreLibrary coreLibrary;
    coreLibrary.CoreLibraryFunction1();
}

void LicensingLibrary_API_Function1()
{
}

int LicensingLibrary_API_Function2()
{
    return 0;
}

bool LicensingLibrary_API_Function3()
{
    return false;
}
