#include <string>
#include <iostream>

namespace homework {

template <typename T>

class isRawPointer {
    public:
        static constexpr bool value = false;

};

template <typename T>

class isRawPointer<T*> {
    public:
        static constexpr bool value = true;

};

}