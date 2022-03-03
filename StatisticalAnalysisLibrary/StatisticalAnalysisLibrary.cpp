#include "StatisticalAnalysisLibrary.h"
#include <iostream>
#include "../CoreLibrary/CoreLibrary.h"
#include "boost/locale.hpp"

using namespace std;
using namespace boost::locale;

ClassInStatisticalAnalysisLibrary::ClassInStatisticalAnalysisLibrary()
{
    language = "";
}

ClassInStatisticalAnalysisLibrary::ClassInStatisticalAnalysisLibrary(string languageDescriptor)
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

void ClassInStatisticalAnalysisLibrary::StatisticalAnalysisLibraryFunction(void)
{
    cout << translate("StatisticalAnalysisContext", "ClassInApplication2Library::Application2LibraryFunction -> ClassInStatisticalAnalysisLibrary::StatisticalAnalysisLibraryFunction - Statistical Analysis Time!!") << endl;

    ClassInCoreLibrary coreClass(language);
    coreClass.CoreLibraryFunction3();
}

// Never Called
void StatisticalAnalysisLibrary_API_Function1()
{
}

// Never Called
int StatisticalAnalysisLibrary_API_Function2()
{
    return 0;
}

// Never Called
bool StatisticalAnalysisLibrary_API_Function3()
{
    return false;
}
