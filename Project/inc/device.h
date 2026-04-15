#ifndef DEVICE_H
#define DEVICE_H

typedef enum { OFF = 0, ON = 1} Mode;

typedef enum { Essential = 1, Important, Normal, Minor} Level;

typedef struct {
    char name[50];
    int power_consumption; // Công suất tiêu thụ
    int save_power_consumption; // Công suất tiêu thụ tiết kiệm
    Mode status; // Trạng thái bật hoặc tắt
    Mode save_battery; // Chế độ tiết kiệm Pin
    Level priority; // 1. Thiết yếu  2.Quan trọng  3.Bình thường  4.Không quan trọng
} device;

extern float sum_power_consumption; // Tổng công suất tiêu thụ

extern device list_devices; // Danh sách thiết bị 

extern int device_count; // Số lượng thiết bị hoạt động

#endif