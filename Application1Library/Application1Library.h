#ifdef APPLICATION1LIBRARY_EXPORTS
#define APPLICATION1LIBRARY_API __declspec(dllexport)
#else
#define APPLICATION1LIBRARY_API __declspec(dllimport)
#endif

class APPLICATION1LIBRARY_API Application1Library {
public:
	Application1Library(void);
	
	void Application1LibraryFunction(void);
};
