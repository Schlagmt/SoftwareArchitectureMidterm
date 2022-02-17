#ifdef STATISTICALANALYSISLIBRARY_EXPORTS
#define STATISTICALANALYSISLIBRARY_API __declspec(dllexport)
#else
#define STATISTICALANALYSISLIBRARY_API __declspec(dllimport)
#endif

class STATISTICALANALYSISLIBRARY_API StatisticalAnalysisLibrary {
public:
	StatisticalAnalysisLibrary(void);

	void StatisticalAnalysisLibraryFunction(void);
};
