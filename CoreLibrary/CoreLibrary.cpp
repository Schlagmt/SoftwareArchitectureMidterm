#include "CoreLibrary.h"
#include <iostream>
#include "boost/locale.hpp"

using namespace std;
using namespace boost::locale;

ClassInCoreLibrary::ClassInCoreLibrary()
{
    language = "";
}

ClassInCoreLibrary::ClassInCoreLibrary(string languageDescriptor)
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

void ClassInCoreLibrary::CoreLibraryFunction1(void)
{
    cout << translate("CoreContext", "ClassInLicensingLibrary::LicensingLibraryFunction -> ClassInCoreLibrary::CoreLibraryFunction1 - First utility") << endl << endl;
}

void ClassInCoreLibrary::CoreLibraryFunction2(void)
{
    cout << translate("CoreContext", "ClassInSecurityLibrary::SecurityLibraryFunction -> ClassInCoreLibrary::CoreLibraryFunction2 - Second utility") << endl << endl;
}

void ClassInCoreLibrary::CoreLibraryFunction3(void)
{
    cout << translate("CoreContext", "ClassInStatisticalAnalysisLibrary::StatisticalAnalysisLibraryFunction -> ClassInCoreLibrary::CoreLibraryFunction3 - Third utility") << endl << endl;
}

// Never Called
void CoreLibrary_API_Function1()
{
    cout << translate("CoreContext", "Application2Library_API_Function3 -> CoreLibrary_API_Function1 - Non-class utility") << endl;
    CoreLibrary_API_Function3();
}

// Never Called
int CoreLibrary_API_Function2()
{
    return 0;
}

// Never Called
bool CoreLibrary_API_Function3()
{
    cout << ("CoreContext", "CoreLibrary_API_Function1 -> CoreLibrary_API_Function3 (not exported) - Support utility") << endl;
    return false;
}
