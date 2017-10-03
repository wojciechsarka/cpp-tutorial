
#include "inc/Debug.hpp"
#include "inc/Info.hpp"
#include "inc/Error.hpp"
#include "inc/Warning.hpp"

#include <thread>

int main()
{
    const std::string text = "Hello world!";

    std::thread t1(logging_level::debug, text);
    std::thread t2(logging_level::info, text);
    std::thread t3(logging_level::warning, text);
    std::thread t4(logging_level::error, text);
    t1.join();
    t2.join();
    t3.join();
    t4.join();

}
