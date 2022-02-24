#include "CoreLibrary.h"
#include <iostream>
#include "boost/locale.hpp"

using namespace std;
using namespace boost::locale;

CoreLibrary::CoreLibrary()
{
    language = "";
}

CoreLibrary::CoreLibrary(string languageDescriptor)
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

void CoreLibrary::CoreLibraryFunction1(void)
{
    cout << translate("CoreContext", "LicensingLibrary::LicensingLibraryFunction -> CoreLibrary::CoreLibraryFunction1 - First utility") << endl << endl;
}

void CoreLibrary::CoreLibraryFunction2(void)
{
    cout << translate("CoreContext", "SecurityLibrary::SecurityLibraryFunction -> CoreLibrary::CoreLibraryFunction2 - Second utility") << endl << endl;
}

void CoreLibrary::CoreLibraryFunction3(void)
{
    cout << translate("CoreContext", "StatisticalAnalysisLibrary::StatisticalAnalysisLibraryFunction -> CoreLibrary::CoreLibraryFunction3 - Third utility") << endl << endl;
}

void CoreLibrary_API_Function1()
{
}

int CoreLibrary_API_Function2()
{
    return 0;
}

bool CoreLibrary_API_Function3()
{
    return false;
}
