#include "moduleFuel.h"
#include <math.h>

double module_fuel_required( unsigned long mass )
{
    return (uint64_t) floor((double) mass / 3.0) - 2ul;
}