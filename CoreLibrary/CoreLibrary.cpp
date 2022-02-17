#include "CoreLibrary.h"
#include <iostream>
using namespace std;

CoreLibrary::CoreLibrary()
{
    return;
}

void CoreLibrary::CoreLibraryFunction1(void)
{
    cout << "LicensingLibrary::LicensingLibraryFunction -> CoreLibrary::CoreLibraryFunction1 - First utility" << endl << endl;
}

void CoreLibrary::CoreLibraryFunction2(void)
{
    cout << "SecurityLibrary::SecurityLibraryFunction -> CoreLibrary::CoreLibraryFunction2 - Second utility" << endl << endl;
}

void CoreLibrary::CoreLibraryFunction3(void)
{
    cout << "StatisticalAnalysisLibrary::StatisticalAnalysisLibraryFunction -> CoreLibrary::CoreLibraryFunction2 - Second utility" << endl << endl;
}
