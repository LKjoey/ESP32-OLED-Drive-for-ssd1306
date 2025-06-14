#include <Arduino.h>

#include "OLED.h"

void setup() {
    // 屏幕初始化
    OLED_Init();
}

void loop() {
    // 显示字符   
    OLED_ShowChar(0, 0, *"B", OLED_8X16);
    // 显示字符串      
    OLED_ShowString(0, 16, "Hello World", OLED_8X16);
    // 显示中文
    OLED_ShowString(0, 32,"中国，你好。", OLED_8X16);
    // 显示数字
    OLED_ShowNum(0, 48, 12345, 5, OLED_8X16);
    // 将OLED显存数组更新到OLED屏幕
    OLED_Update();

    delay(2000);

    OLED_Clear();       // 清屏
    OLED_Update();      // 更新
    delay(1000);        // 等待
}
