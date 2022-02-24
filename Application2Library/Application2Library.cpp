#include "Application2Library.h"
#include <iostream>
#include "../StatisticalAnalysisLibrary/StatisticalAnalysisLibrary.h"
#include "boost/locale.hpp"

using namespace std;
using namespace boost::locale;

Application2Library::Application2Library()
{
    language = "";
}

Application2Library::Application2Library(string languageDescriptor)
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

void Application2Library::Application2LibraryFunction1(void)
{
    cout << translate("Application2Context", "UILibrary::UILibraryFunction -> Application2Library::Application2LibraryFunction1 - Routing and Logic") << endl;

    StatisticalAnalysisLibrary statisticalAnalysisLibrary(language);
    statisticalAnalysisLibrary.StatisticalAnalysisLibraryFunction();
}

void Application2Library::Application2LibraryFunction2(void)
{
    cout << translate("Application2Context", "Batch::Main -> Application2Library::Application2LibraryFunction2 - Routing and Logic") << endl;

    StatisticalAnalysisLibrary statisticalAnalysisLibrary(language);
    statisticalAnalysisLibrary.StatisticalAnalysisLibraryFunction();
}

void Application2Library_API_Function1()
{
}

int Application2Library_API_Function2()
{
    return 0;
}

bool Application2Library_API_Function3()
{
    return false;
}
