#include "soc.h"

float CalculateSOC(float soc,
                   float current,
                   float timeHours,
                   float capacityAh)
{
    float consumedAh;

    consumedAh = current * timeHours;

    soc = soc - ((consumedAh / capacityAh) * 100.0f);

    if (soc < 0.0f)
    {
        soc = 0.0f;
    }

    return soc;
}
