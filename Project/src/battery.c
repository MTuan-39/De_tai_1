#include <stdio.h>
#include "battery.h"
#include "device.h"

int max_power_battery; // khai báo công suất lớn nhất của Pin

int battery_energy; // khai báo dung lượng của Pin

int present_battery; // khai báo pin hiện tại

int present_power_battery; // Công suất hiện tại của pin

float battery_percentage; // Phần trăm Pin

battery_threeshold threeshold; // Khai báo biến ngưỡng Pin

void MAX_POWER_BATTERY (void) // Hàm khai báo công suất Pin
{
    printf ("Công suất lớn nhất mà Pin có thể cấp cho các thiết bị là: ");
    scanf ("%d", &max_power_battery);
}

void BATTERY_ENERGY (void) // Hàm khai báo dung lượng Pin
{
    printf ("Dung lượng của Pin là: ");
    scanf ("%d", &battery_energy);
}

float BATTERY_PERCENTAGE(void)
{
return ((float)present_power_battery/max_power_battery * 100); // Phần trăm pin
}

