#include "../inc/Logger.hpp"

#include <iostream>

std::mutex Logger::constraction_mutex;
std::mutex Logger::log_mutex;

Logger& Logger::instance()
{
    std::lock_guard<std::mutex> guard(constraction_mutex);
    static Logger _instance;
    return _instance;
}

void Logger::log(const std::string& text) const
{
   std::lock_guard<std::mutex> guard(log_mutex);
   std::cout << text << std::endl;
}
