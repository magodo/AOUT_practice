#include "IFileExtensionManager.hpp"
#include <string>

class FakeFileExtensionManager: public IFileExtensionManager
{
    public:
        FakeFileExtensionManager();
        virtual ~FakeFileExtensionManager();
        bool virtual IsValid(std::string filename);
        void setIsValid(bool);
    private:
        bool m_isValid;
};
