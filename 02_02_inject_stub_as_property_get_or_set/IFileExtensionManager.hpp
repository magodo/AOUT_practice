#ifndef IFILEEXTENSIONMANAGER
#define IFILEEXTENSIONMANAGER

#include <string>

class IFileExtensionManager
{
    public:
        virtual bool IsValid(std::string) = 0;
};

#endif // IFILEEXTENSIONMANAGER
