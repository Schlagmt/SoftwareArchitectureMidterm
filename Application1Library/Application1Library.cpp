#include "Application1Library.h"
#include <iostream>
#include "../LicensingLibrary/LicensingLibrary.h"
#include "../SecurityLibrary/SecurityLibrary.h"
using namespace std;

Application1Library::Application1Library()
{
    return;
}

void Application1Library::Application1LibraryFunction(void)
{
    cout << "UILibrary::UILibraryFunction -> Application1Library::Application1LibraryFunction - Routing and Logic" << endl;

    LicensingLibrary licensingLibrary;
    licensingLibrary.LicensingLibraryFunction();

    SecurityLibrary securityLibrary;
    securityLibrary.SecurityLibraryFunction();
}
