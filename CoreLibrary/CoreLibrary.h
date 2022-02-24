#ifdef CORELIBRARY_EXPORTS
#define CORELIBRARY_API __declspec(dllexport)
#else
#define CORELIBRARY_API __declspec(dllimport)
#endif

#include <string>
using namespace std;

class CORELIBRARY_API CoreLibrary {
private:
	string language;

public:
	CoreLibrary();
	CoreLibrary(string languageDescriptor);

	void CoreLibraryFunction1(void);
	void CoreLibraryFunction2(void);
	void CoreLibraryFunction3(void);
};

CORELIBRARY_API void CoreLibrary_API_Function1();
CORELIBRARY_API int CoreLibrary_API_Function2();
CORELIBRARY_API bool CoreLibrary_API_Function3();