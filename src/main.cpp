#include "mbed.h"
#include "PinNames.h"

DigitalOut led1(LED1);

#define SLEEP_TIME_MS                  500

int main()
{
    while (true) {
        led1 = !led1;
        wait_ms(SLEEP_TIME_MS);
    }
}
