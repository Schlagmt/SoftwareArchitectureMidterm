#ifdef LICENSINGLIBRARY_EXPORTS
#define LICENSINGLIBRARY_API __declspec(dllexport)
#else
#define LICENSINGLIBRARY_API __declspec(dllimport)
#endif

#include <string>
using namespace std;

class LICENSINGLIBRARY_API LicensingLibrary {
private:
	string language;

public:
	LicensingLibrary(void);
	LicensingLibrary(string languageDescriptor);

	void LicensingLibraryFunction(void);
};

LICENSINGLIBRARY_API void LicensingLibrary_API_Function1();
LICENSINGLIBRARY_API int LicensingLibrary_API_Function2();
LICENSINGLIBRARY_API bool LicensingLibrary_API_Function3();