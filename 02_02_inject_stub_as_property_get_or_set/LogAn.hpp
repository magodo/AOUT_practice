#ifndef LOGAN
#define LOGAN

#include "IFileExtensionManager.hpp"
#include <string>

class LogAn
{
    public:
        LogAn();
        LogAn(IFileExtensionManager*);
       ~LogAn();
        void SetFileExtMgr(IFileExtensionManager *mgr);
        bool IsValidLogFileName(std::string);

    private:
        IFileExtensionManager* m_manager;
};

#endif // LOGAN
