#pragma once

#include <mutex>

class Logger final
{

public:
    static Logger& instance();

    void log(const std::string&) const;

    Logger(const Logger&) = delete;
    Logger(Logger&&) = delete;
    Logger& operator=(const Logger&) = delete;
    Logger& operator=(Logger&&) = delete;

private:
    Logger() = default;

    static std::mutex constraction_mutex;
    static std::mutex log_mutex;
};
