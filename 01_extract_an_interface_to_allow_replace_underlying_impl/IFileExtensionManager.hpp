#include <string>

class IFileExtensionManager
{
    public:
        virtual ~IFileExtensionManager() {} // class be inherited should always make its destructor as virtual function
        virtual IsValid(std::string) = 0;
}
