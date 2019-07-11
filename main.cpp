#include <iostream>
#include <future>

class Foo
{
private:
    void bar(const size_t)
    {}
public:
    void foo()
    {
        auto handle = std::async(std::launch::async, [this](const size_t num){
            this->bar(num);
        }, 0);
        handle.get();
    }
};

int main()
{
    Foo foo;
    foo.foo();
    return 0;
}