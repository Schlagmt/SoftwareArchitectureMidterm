#ifdef STATISTICALANALYSISLIBRARY_EXPORTS
#define STATISTICALANALYSISLIBRARY_API __declspec(dllexport)
#else
#define STATISTICALANALYSISLIBRARY_API __declspec(dllimport)
#endif

#include <string>
using namespace std;

class STATISTICALANALYSISLIBRARY_API StatisticalAnalysisLibrary {
private:
	string language;

public:
	StatisticalAnalysisLibrary();
	StatisticalAnalysisLibrary(string languageDescriptor);

	void StatisticalAnalysisLibraryFunction(void);
};

STATISTICALANALYSISLIBRARY_API void StatisticalAnalysisLibrary_API_Function1();
STATISTICALANALYSISLIBRARY_API int StatisticalAnalysisLibrary_API_Function2();
STATISTICALANALYSISLIBRARY_API bool StatisticalAnalysisLibrary_API_Function3();

