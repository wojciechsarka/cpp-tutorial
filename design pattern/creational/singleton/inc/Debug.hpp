#pragma once

#include "Logger.hpp"

namespace logging_level
{

void debug(const std::string& text)
{
    Logger::instance().log("DEBUG: " + text);
}

}
