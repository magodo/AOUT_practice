#ifndef I_FILE_EXTENSION_MANAGER_HPP
#define I_FILE_EXTENSION_MANAGER_HPP

#include <string>

class IFileExtensionManager
{
    public:
        virtual bool IsValid(std::string) = 0;
};

#endif // I_FILE_EXTENSION_MANAGER_HPP
