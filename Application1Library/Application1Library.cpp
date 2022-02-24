#include "Application1Library.h"
#include <iostream>
#include "../LicensingLibrary/LicensingLibrary.h"
#include "../SecurityLibrary/SecurityLibrary.h"
using namespace std;

Application1Library::Application1Library()
{
    language = "";
}

Application1Library::Application1Library(string languageDescriptor)
{
}

void Application1Library::Application1LibraryFunction(void)
{
    cout << "UILibrary::UILibraryFunction -> Application1Library::Application1LibraryFunction - Routing and Logic" << endl;

    LicensingLibrary licensingLibrary;
    licensingLibrary.LicensingLibraryFunction();

    SecurityLibrary securityLibrary;
    securityLibrary.SecurityLibraryFunction();
}

void Application1Library_API_Function1()
{
}

int Application1Library_API_Function2()
{
    return 0;
}

bool Application1Library_API_Function3()
{
    return false;
}
