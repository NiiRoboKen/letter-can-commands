#pragma once

#include <cstdint>

namespace nnct {
namespace letter_can {

namespace common_commands {
    constexpr uint16_t START        { 0x1000 };
    constexpr uint16_t START_REPORT { 0x1200 };
    constexpr uint16_t KILL         { 0x0001 };
    constexpr uint16_t KILL_REPORT  { 0x1001 };
    constexpr uint16_t ERROR        { 0x0100 };
    constexpr uint16_t PING         { 0x1500 };
    constexpr uint16_t PONG         { 0x1600 };
}

}
}
