#ifdef APPLICATION2LIBRARY_EXPORTS
#define APPLICATION2LIBRARY_API __declspec(dllexport)
#else
#define APPLICATION2LIBRARY_API __declspec(dllimport)
#endif

class APPLICATION2LIBRARY_API Application2Library {
public:
	Application2Library(void);

	void Application2LibraryFunction1(void);
	void Application2LibraryFunction2(void);
};
