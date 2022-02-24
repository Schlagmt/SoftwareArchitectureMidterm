#ifdef APPLICATION2LIBRARY_EXPORTS
#define APPLICATION2LIBRARY_API __declspec(dllexport)
#else
#define APPLICATION2LIBRARY_API __declspec(dllimport)
#endif

#include <string>
using namespace std;

class APPLICATION2LIBRARY_API Application2Library {
private:
	string language;

public:
	Application2Library();
	Application2Library(string languageDescriptor);

	void Application2LibraryFunction1(void);
	void Application2LibraryFunction2(void);
};

APPLICATION2LIBRARY_API void Application2Library_API_Function1();
APPLICATION2LIBRARY_API int Application2Library_API_Function2();
APPLICATION2LIBRARY_API bool Application2Library_API_Function3();