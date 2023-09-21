#include <stdio.h>

// 간단한 enum 정의
enum Days {
    SUNDAY,    // 0
    MONDAY,    // 1
    TUESDAY,   // 2
    WEDNESDAY, // 3
    THURSDAY,  // 4
    FRIDAY,    // 5
    SATURDAY   // 6
};

int main() {
    
    enum Days today = FRIDAY;

    if (today == WEDNESDAY) {
        printf("오늘은 수요일입니다.\n");
    }
    else {
        printf("오늘은 다른 요일입니다.\n");
    }

    return 0;
}