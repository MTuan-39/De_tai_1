#include <stdio.h>
#include "device.h"
#include "battery.h"

float sum_power_consumption; // Tổng công suất tiêu thụ

int device_count; // Số lượng thiết bị hoạt động

device list_devices [30]; // Khai báo danh sách thiết bị


void read_data (void) // đọc dữ liệu từ docs device_config
{
    int i = 0;
    FILE *f = fopen("device_config.txt", "r");
    if (f == NULL){ // Kiểm tra xem con trỏ f có trỏ đến đúng file docx ko
        printf("Khong mo duoc file!");
        return;
    }
    while (fscanf(f,"%s %d %d %d", &list_devices[i].name, &list_devices[i].power_consumption, 
        &list_devices[i].save_power_consumption, &list_devices[i].priority) !=EOF) // Vòng lặp đọc dữ liệu
        {
            i++;
            if (i >= 30)
            {
                break; // Chỉ đọc số lượng thiết bị đủ trong mảng
            }
        }
    device_count = i; // Số lượng thiết bị thực tế triển khai
    fclose(f); // đóng file docx
}