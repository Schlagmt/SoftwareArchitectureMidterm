#include <iostream>
#include <string>
#include "../Application2Library/Application2Library.h"
#include "boost/locale.hpp"

using namespace std;
using namespace boost::locale;


int main()
{    
    int language;
    cout << "Pick the language: 1 = English | 2 = German" << endl;
    cin >> language;

    generator gen;

    // Specify location of dictionaries
    gen.add_messages_path("../");
    gen.add_messages_domain("messages");

    string languageDescriptor;
    // Generate locales and imbue them to iostream
    if (language == 1) {
        // English
        locale::global(gen(""));
        languageDescriptor = "";
    }
    else {
        // German
        locale::global(gen("de_DE.UTF - 8"));
        languageDescriptor = "de_DE.UTF - 8";
    }
    cout.imbue(locale());

    cout << translate("BatchContext","Batch::Main - Run Statistical Analysis behind the scene") << endl;
  
    ClassInApplication2Library application2Class(languageDescriptor);
    application2Class.Application2LibraryFunction2();

    Application2Library_API_Function1();
    Application2Library_API_Function2();
}
