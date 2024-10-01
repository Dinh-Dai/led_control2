#include <Arduino.h>
#include "LED.h"
#include <OneButton.h>

#define LED1_PIN 2 // Đổi thành chân GPIO cho LED1
#define LED2_PIN 3 // Đổi thành chân GPIO cho LED2
#define BTN_PIN 4   // Đổi thành chân GPIO cho nút bấm

LED led1(LED1_PIN, HIGH); // LED1
LED led2(LED2_PIN, HIGH); // LED2
bool isLED1Active = true; // Biến theo dõi LED đang được điều khiển

void btnPush();
void btnDoubleClick();
void btnHold();
OneButton button(BTN_PIN, HIGH); // Cấu hình nút bấm

void setup()
{
    led1.off();
    led2.off();
    button.attachClick(btnPush);
    button.attachDoubleClick(btnDoubleClick);
    button.attachLongPressStart(btnHold);
}

void loop()
{
    led1.loop();
    led2.loop();
    button.tick();
}

void btnPush()
{
    // Bật tắt LED đang được điều khiển
    if (isLED1Active) {
        led1.flip();
    } else {
        led2.flip();
    }
}

void btnDoubleClick()
{
    // Chuyển đổi giữa LED1 và LED2
    isLED1Active = !isLED1Active;
}

void btnHold()
{
    // Nhấp nháy LED đang được điều khiển
    for (int i = 0; i < 10; i++) { // Nhấp nháy 10 lần
        if (isLED1Active) {
            led1.on();
        } else {
            led2.on();
        }
        delay(200);
        if (isLED1Active) {
            led1.off();
        } else {
            led2.off();
        }
        delay(200);
    }
}
