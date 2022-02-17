#ifdef CORELIBRARY_EXPORTS
#define CORELIBRARY_API __declspec(dllexport)
#else
#define CORELIBRARY_API __declspec(dllimport)
#endif

class CORELIBRARY_API CoreLibrary {
public:
	CoreLibrary(void);

	void CoreLibraryFunction1(void);
	void CoreLibraryFunction2(void);
	void CoreLibraryFunction3(void);
};
