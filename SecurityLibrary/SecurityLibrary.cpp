#include "SecurityLibrary.h"
#include <iostream>
#include "../CoreLibrary/CoreLibrary.h"
#include "boost/locale.hpp"
using namespace std;
using namespace boost::locale;

ClassInSecurityLibrary::ClassInSecurityLibrary()
{
    language = "";
}

ClassInSecurityLibrary::ClassInSecurityLibrary(string languageDescriptor)
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

void ClassInSecurityLibrary::SecurityLibraryFunction(void)
{
    cout << translate("SecurityContext", "ClassInApplication1Library::Application1LibraryFunction->ClassInSecurityLibrary::SecurityLibraryFunction - Do some security") << endl;

    ClassInCoreLibrary coreClass(language);
    coreClass.CoreLibraryFunction2();
}

void SecurityLibrary_API_Function1()
{
}

int SecurityLibrary_API_Function2()
{
    return 0;
}

bool SecurityLibrary_API_Function3()
{
    return false;
}
