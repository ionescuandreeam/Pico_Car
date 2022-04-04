#include <stdio.h>
#include "pico/stdlib.h"


#ifdef 

    gpio_init(NR PINLUI)
    gpio_set_dir(directie)
    gpio_put(NR PINULUI, HIGH SAU LOW)

#endif

int main(void)
{  
    stdio_init_all();
 
    gpio_init(PICO_DEFAULT_LED_PIN);
    gpio_set_dir(PICO_DEFAULT_LED_PIN, GPIO_OUT);

    while (true)
    {
        gpio_put(PICO_DEFAULT_LED_PIN, 1);
        sleep_ms(500);
        gpio_put(PICO_DEFAULT_LED_PIN, 0);
        sleep_ms(200);
    }
}
