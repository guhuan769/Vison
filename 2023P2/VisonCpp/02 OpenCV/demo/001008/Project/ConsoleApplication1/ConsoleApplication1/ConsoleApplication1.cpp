#include <iostream>

namespace NM1
{
    void func1(void);
    class Box {
    public:
        static int age;
        void func2();
        static void func3();
    };
}

using namespace NM1;

int main(void)
{
    func1();
    Box box;
    box.func2();
    box.func3();
    return 0;
}

void NM1::func1(void)
{
    std::cout << "Func1 in NM1" << std::endl;
}



void NM1::Box::func2(void)
{
    func1();
}

void NM1::Box::func3(void)
{
    std::cout << "Func3 in NM1" << std::endl;
}