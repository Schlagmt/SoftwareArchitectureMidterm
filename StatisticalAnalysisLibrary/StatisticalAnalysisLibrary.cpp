#include "StatisticalAnalysisLibrary.h"
#include <iostream>
#include "../CoreLibrary/CoreLibrary.h"
using namespace std;

StatisticalAnalysisLibrary::StatisticalAnalysisLibrary()
{
    return;
}

void StatisticalAnalysisLibrary::StatisticalAnalysisLibraryFunction(void)
{
    cout << "Application2Library::Application2LibraryFunction -> StatisticalAnalysisLibrary::StatisticalAnalysisLibraryFunction - Statistical Analysis Time!!" << endl;

    CoreLibrary coreLibrary;
    coreLibrary.CoreLibraryFunction3();
}
