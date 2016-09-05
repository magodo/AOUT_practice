#include "IFileExtensionManager.hpp"

class ExtensionManagerFactory{
    public:
        ExtensionManagerFactory();
        ~ExtensionManagerFactory();
        static void SetManager(IFileExtensionManager *mgr);
        static IFileExtensionManager *Create();

    private:
        static IFileExtensionManager *m_custom_manager;
};
