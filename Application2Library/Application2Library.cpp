#include "Application2Library.h"
#include <iostream>
#include "../StatisticalAnalysisLibrary/StatisticalAnalysisLibrary.h"
#include "../CoreLibrary/CoreLibrary.h"
#include "boost/locale.hpp"

using namespace std;
using namespace boost::locale;

ClassInApplication2Library::ClassInApplication2Library()
{
    language = "";
}

ClassInApplication2Library::ClassInApplication2Library(string languageDescriptor)
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

void ClassInApplication2Library::Application2LibraryFunction1(void)
{
    cout << translate("Application2Context", "ClassInUILibrary::UILibraryFunction -> ClassInApplication2Library::Application2LibraryFunction1 - Routing and Logic") << endl;

    ClassInStatisticalAnalysisLibrary statisticalAnalysisClass(language);
    statisticalAnalysisClass.StatisticalAnalysisLibraryFunction();
}

void ClassInApplication2Library::Application2LibraryFunction2(void)
{

    cout << translate("Application2Context", "Batch::Main -> ClassInApplication2Library::Application2LibraryFunction2 - Routing and Logic") << endl;

    Application2Library_API_Function1();
    Application2Library_API_Function2();

    ClassInStatisticalAnalysisLibrary statisticalAnalysisClass(language);
    statisticalAnalysisClass.StatisticalAnalysisLibraryFunction();
}

void ClassInApplication2Library::Application2LibraryFunction3(void)
{
    cout << translate("Application2Context", "UI::Main -> ClassInApplication2Library::Application2LibraryFunction3 - Get Some Info") << endl;
}

APPLICATION2LIBRARY_API void Application2Library_API_Function1()
{
    cout << translate("Application2Context", "ClassInApplication2Library::Application2LibraryFunction2 -> Application2Library_API_Function1 - Do something with data") << endl;
}

APPLICATION2LIBRARY_API int Application2Library_API_Function2()
{
    cout << translate("Application2Context", "ClassInApplication2Library::Application2LibraryFunction2 -> Application2Library_API_Function2 - Record results") << endl;
    return 0;
}

APPLICATION2LIBRARY_API bool Application2Library_API_Function3()
{
    cout << translate("Application2Context", "UI::Main -> Application2Library_API_Function3 - Get graphable data") << endl;
    //CoreLibrary_API_Function1();
    return false;
}
