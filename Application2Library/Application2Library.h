#ifdef APPLICATION2LIBRARY_EXPORTS
#define APPLICATION2LIBRARY_API __declspec(dllexport)
#else
#define APPLICATION2LIBRARY_API __declspec(dllimport)
#endif

#include <string>
#include "boost/locale.hpp"
using namespace std;
using namespace boost::locale;

class APPLICATION2LIBRARY_API ClassInApplication2Library {
private:
	string language;

public:
	ClassInApplication2Library();
	ClassInApplication2Library(string languageDescriptor);

	void Application2LibraryFunction1(void);
	void Application2LibraryFunction2(void);
	void Application2LibraryFunction3(void);
};

extern "C" {
	APPLICATION2LIBRARY_API void Application2Library_API_Function1();
	APPLICATION2LIBRARY_API int Application2Library_API_Function2();
	APPLICATION2LIBRARY_API bool Application2Library_API_Function3();
};