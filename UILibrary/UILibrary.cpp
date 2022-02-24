#include "UILibrary.h"
#include <iostream>
#include "../Application1Library/Application1Library.h"
#include "../Application2Library/Application2Library.h"
using namespace std;

UILibrary::UILibrary()
{
    language = "";
}

UILibrary::UILibrary(string languageDescriptor)
{
}

void UILibrary::UILibraryFunction(void)
{
    cout << "UI::Main -> UILibrary::UILibraryFunction - Create a cool UI" << endl;

    Application1Library application1Library;
    application1Library.Application1LibraryFunction();

    Application2Library application2Library;
    application2Library.Application2LibraryFunction1();
}

void UILibrary_API_Function1()
{
}

int UILibrary_API_Function2()
{
    return 0;
}

bool UILibrary_API_Function3()
{
    return false;
}
