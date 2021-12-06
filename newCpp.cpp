#include "pxt.h"
#include <cstdint>
#include <math.h>

using namespace pxt;

namespace cppSpace {
    /*
    * comment of cpp
    */
    //%
    uint16_t getLux(int16_t number) {
        return number * .976;
    }
}