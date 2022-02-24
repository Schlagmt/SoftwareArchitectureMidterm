#include "StatisticalAnalysisLibrary.h"
#include <iostream>
#include "../CoreLibrary/CoreLibrary.h"
#include "boost/locale.hpp"

using namespace std;
using namespace boost::locale;

StatisticalAnalysisLibrary::StatisticalAnalysisLibrary()
{
    language = "";
}

StatisticalAnalysisLibrary::StatisticalAnalysisLibrary(string languageDescriptor)
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

void StatisticalAnalysisLibrary::StatisticalAnalysisLibraryFunction(void)
{
    cout << translate("StatisticalAnalysisContext", "Application2Library::Application2LibraryFunction -> StatisticalAnalysisLibrary::StatisticalAnalysisLibraryFunction - Statistical Analysis Time!!") << endl;

    CoreLibrary coreLibrary(language);
    coreLibrary.CoreLibraryFunction3();
}

void StatisticalAnalysisLibrary_API_Function1()
{
}

int StatisticalAnalysisLibrary_API_Function2()
{
    return 0;
}

bool StatisticalAnalysisLibrary_API_Function3()
{
    return false;
}
