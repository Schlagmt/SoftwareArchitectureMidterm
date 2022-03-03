#include "Application1Library.h"
#include <iostream>
#include "../LicensingLibrary/LicensingLibrary.h"
#include "../SecurityLibrary/SecurityLibrary.h"
#include "boost/locale.hpp"
using namespace std;
using namespace boost::locale;

ClassInApplication1Library::ClassInApplication1Library()
{
    language = "";
}

ClassInApplication1Library::ClassInApplication1Library(string languageDescriptor)
{
    language = languageDescriptor;
    generator gen;

    // Specify location of dictionaries
    gen.add_messages_path("../");
    gen.add_messages_domain("messages");

    // Generate locales and imbue them to iostream
    locale::global(gen(languageDescriptor));
    cout.imbue(locale());
}

void ClassInApplication1Library::Application1LibraryFunction(void)
{
    cout << translate("Application1Context", "ClassInUILibrary::UILibraryFunction -> ClassInApplication1Library::Application1LibraryFunction - Routing and Logic") << endl;

    ClassInLicensingLibrary licensingClass(language);
    licensingClass.LicensingLibraryFunction();

    ClassInSecurityLibrary securityClass(language);
    securityClass.SecurityLibraryFunction();
}

// Never Called
void Application1Library_API_Function1()
{
}

// Never Called
int Application1Library_API_Function2()
{
    return 0;
}

// Never Called
bool Application1Library_API_Function3()
{
    return false;
}
