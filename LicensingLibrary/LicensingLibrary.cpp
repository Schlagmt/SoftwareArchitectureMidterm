#include "LicensingLibrary.h"
#include <iostream>
#include "../CoreLibrary/CoreLibrary.h"
#include "boost/locale.hpp"
using namespace std;
using namespace boost::locale;

ClassInLicensingLibrary::ClassInLicensingLibrary()
{
    language = "";
}

ClassInLicensingLibrary::ClassInLicensingLibrary(string languageDescriptor)
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

void ClassInLicensingLibrary::LicensingLibraryFunction(void)
{
    cout << translate("LicenseContext", "ClassInApplication1Library::Application1LibraryFunction->ClassInLicensingLibrary::LicensingLibraryFunction - Do some licensing") << endl;

    ClassInCoreLibrary coreClass(language);
    coreClass.CoreLibraryFunction1();
}

// Never Called
void LicensingLibrary_API_Function1()
{
}

// Never Called
int LicensingLibrary_API_Function2()
{
    return 0;
}

// Never Called
bool LicensingLibrary_API_Function3()
{
    return false;
}
