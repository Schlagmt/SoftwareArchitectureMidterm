#ifdef UILIBRARY_EXPORTS
#define UILIBRARY_API __declspec(dllexport)
#else
#define UILIBRARY_API __declspec(dllimport)
#endif

#include <string>
using namespace std;

class UILIBRARY_API UILibrary {
private:
	string language;

public:
	UILibrary(void);
	UILibrary(string languageDescriptor);

	void UILibraryFunction(void);
};

UILIBRARY_API void UILibrary_API_Function1(); 
UILIBRARY_API int UILibrary_API_Function2(); 
UILIBRARY_API bool UILibrary_API_Function3();