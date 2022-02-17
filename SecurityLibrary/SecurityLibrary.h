#ifdef SECURITYLIBRARY_EXPORTS
#define SECURITYLIBRARY_API __declspec(dllexport)
#else
#define SECURITYLIBRARY_API __declspec(dllimport)
#endif

class SECURITYLIBRARY_API SecurityLibrary {
public:
	SecurityLibrary(void);

	void SecurityLibraryFunction(void);
};
