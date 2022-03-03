#include "UILibrary.h"
#include <iostream>
#include "../Application1Library/Application1Library.h"
#include "../Application2Library/Application2Library.h"
#include "boost/locale.hpp"
using namespace std;
using namespace boost::locale;

ClassInUILibrary::ClassInUILibrary()
{
    language = "";
}

ClassInUILibrary::ClassInUILibrary(string languageDescriptor)
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

void ClassInUILibrary::UILibraryFunction(void)
{
    cout << translate("UIContext","UI::Main -> ClassInUILibrary::UILibraryFunction - Create a cool UI") << endl;

    ClassInApplication1Library application1Class(language);
    application1Class.Application1LibraryFunction();

    ClassInApplication2Library application2Class(language);
    application2Class.Application2LibraryFunction1();
}

// Never Called
void UILibrary_API_Function1()
{
}

// Never Called
int UILibrary_API_Function2()
{
    return 0;
}

// Never Called
bool UILibrary_API_Function3()
{
    return false;
}
