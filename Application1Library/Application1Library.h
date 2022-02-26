#ifdef APPLICATION1LIBRARY_EXPORTS
#define APPLICATION1LIBRARY_API __declspec(dllexport)
#else
#define APPLICATION1LIBRARY_API __declspec(dllimport)
#endif

#include <string>
#include "boost/locale.hpp"
using namespace std;
using namespace boost::locale;

class APPLICATION1LIBRARY_API ClassInApplication1Library {
private:
	string language;

public:
	ClassInApplication1Library(void);
	ClassInApplication1Library(string languageDescriptor);
	
	void Application1LibraryFunction(void);
};

APPLICATION1LIBRARY_API void Application1Library_API_Function1();
APPLICATION1LIBRARY_API int Application1Library_API_Function2();
APPLICATION1LIBRARY_API bool Application1Library_API_Function3();

