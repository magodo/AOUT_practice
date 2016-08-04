#include "IFileExtensionManager.hpp"
#include <string>

class FileExtensionManager: public IFileExtensionManager
{
    public:
        FileExtensionManager() {}
        virtual ~FileExtensionManager() {}
        virtual bool IsValid(std::string filename);
};
