#pragma once

#include "Logger.hpp"

namespace logging_level
{

void warning(const std::string& text)
{
    Logger::instance().log("WARNING: " + text);
}

}
