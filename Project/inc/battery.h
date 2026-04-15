#ifndef BATTERY_H
#define BATTERY_H

typedef enum {
    OFF = 0, // trạng thái tắt
    ON = 1, // trạng thái bật
} battery_status;

battery_status charge;

typedef struct {
    int high_threeshold; // Ngưỡng pin cao 80%
    int medium_threeshold; // Ngưỡng pin trung bình 60%
    int low_threeshold; // Ngưỡng pin thấp 40%
    int danger_threeshold; // Ngưỡng pin nguy hiểm 20%
} battery_threeshold;

extern battery_threeshold threeshold; // Biến ngưỡng Pin

extern int battery_energy; // Năng lượng của Pin

extern int max_power_battery; // Công suất lớn nhất của pin

extern int present_power_battery; // Công suất hiện tại của pin

extern float battery_percentage; // Phần trăm Pin

#endif
