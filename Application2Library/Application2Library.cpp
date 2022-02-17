#include "Application2Library.h"
#include <iostream>
#include "../StatisticalAnalysisLibrary/StatisticalAnalysisLibrary.h"
using namespace std;

Application2Library::Application2Library()
{
    return;
}

void Application2Library::Application2LibraryFunction1(void)
{
    cout << "UILibrary::UILibraryFunction -> Application2Library::Application2LibraryFunction1 - Routing and Logic" << endl;

    StatisticalAnalysisLibrary statisticalAnalysisLibrary;
    statisticalAnalysisLibrary.StatisticalAnalysisLibraryFunction();
}

void Application2Library::Application2LibraryFunction2(void)
{
    cout << "Batch::Main -> Application2Library::Application2LibraryFunction2 - Routing and Logic" << endl;

    StatisticalAnalysisLibrary statisticalAnalysisLibrary;
    statisticalAnalysisLibrary.StatisticalAnalysisLibraryFunction();
}
