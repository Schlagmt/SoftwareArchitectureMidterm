#ifdef LICENSINGLIBRARY_EXPORTS
#define LICENSINGLIBRARY_API __declspec(dllexport)
#else
#define LICENSINGLIBRARY_API __declspec(dllimport)
#endif

class LICENSINGLIBRARY_API LicensingLibrary {
public:
	LicensingLibrary(void);

	void LicensingLibraryFunction(void);
};
