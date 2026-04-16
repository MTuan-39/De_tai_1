#include <time.h>
#include <stdio.h>
#include "battery.h"
#include "device.h"
#include "simulation.h"

time_t simulation_seconds = 0; // Khai báo biến thời gian giả lập

struct tm *info; // Khai báo biến thời gian quy đổi

void time_device (void)
{
    while (simulation_seconds < 2592000) // thời gian mô phỏng là 30 ngày
    {
        
    }
}
