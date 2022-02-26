#ifdef SECURITYLIBRARY_EXPORTS
#define SECURITYLIBRARY_API __declspec(dllexport)
#else
#define SECURITYLIBRARY_API __declspec(dllimport)
#endif

#include <string>
using namespace std;

class SECURITYLIBRARY_API ClassInSecurityLibrary {
private:
	string language;

public:
	ClassInSecurityLibrary(void);
	ClassInSecurityLibrary(string languageDescriptor);

	void SecurityLibraryFunction(void);
};

SECURITYLIBRARY_API void SecurityLibrary_API_Function1(); 
SECURITYLIBRARY_API int SecurityLibrary_API_Function2(); 
SECURITYLIBRARY_API bool SecurityLibrary_API_Function3();