typedef enum { OFF = 0, ON = 1} Mode;
typedef enum { Essential = 0, Important, Normal, Minor} Level;
typedef struct {
    char name[50];
    int battery_threshold; // đơn vị: %
    Mode status;
    Mode save_battery; 
    Level priority; // 1. Thiết yếu  2.Quan trọng  3.Bình thường  4.Không quan trọng
    Level power_consumption;
} device;
