#include "LicensingLibrary.h"
#include <iostream>
#include "../CoreLibrary/CoreLibrary.h"
using namespace std;

LicensingLibrary::LicensingLibrary()
{
    return;
}

void LicensingLibrary::LicensingLibraryFunction(void)
{
    cout << "Application1Library::Application1LibraryFunction -> LicensingLibrary::LicensingLibraryFunction - Do some licensing" << endl;

    CoreLibrary coreLibrary;
    coreLibrary.CoreLibraryFunction1();
}
