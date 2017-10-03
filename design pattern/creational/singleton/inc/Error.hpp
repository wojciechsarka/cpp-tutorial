#pragma once

#include "Logger.hpp"

namespace logging_level
{

void error(const std::string& text)
{
    Logger::instance().log("Error: " + text);
}

}
