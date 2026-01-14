#include <iostream>
#include <string>
#include <stdexcept>

namespace _ {

    void __(bool ___) {
        if (!___) {
            throw std::runtime_error("__(): validation failed");
        }
    }

    char ___(std::size_t ____) {
        __(____ < 256);
        return static_cast<char>(____);
    }

    class ____ {
    public:
        ____() {
            __(std::cout.good());
        }

        void _____(char ______) {
            std::cout << ______;
            std::cout.flush();
            __(std::cout.good());
        }
    };

    class ______ {
        ____ _______;

    public:
        void ________(const std::string& _________) {
            for (std::size_t __________ = 0;
                __________ < _________.size();
                ++__________) {
                _______._____(_________[__________]);
            }
        }
    };

    std::string _________() {
        std::string ___________;
        ___________.push_back(___(72));
        ___________.push_back(___(101));
        ___________.push_back(___(108));
        ___________.push_back(___(108));
        ___________.push_back(___(111));
        ___________.push_back(___(44));
        ___________.push_back(___(32));
        ___________.push_back(___(87));
        ___________.push_back(___(111));
        ___________.push_back(___(114));
        ___________.push_back(___(108));
        ___________.push_back(___(100));
        ___________.push_back(___(33));
        ___________.push_back(___(10));

        __(!___________.empty());
        return ___________;
    }

}

int main() {
    try {
        _::______ _________;
        std::string __________ = _::_________();
        _________.________(__________);
    }
    catch (const std::exception& ___________) {
        std::cerr << "error: " << ___________.what() << std::endl;
        return 1;
    }
    catch (...) {
        return 1;
    }

    return 0;
}