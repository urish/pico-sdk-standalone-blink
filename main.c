/**
 * Blink ALL GPIO pins in an alternating pattern.
 * Copyright (C) 2021, Uri Shaked. MIT License.
 */

#include "pico/stdlib.h"

int main()
{
  for (int i = 0; i < 32; i++)
  {
    gpio_init(i);
    gpio_set_dir(i, GPIO_OUT);
  }
  gpio_set_mask(0xaaaaaaaa); // Alternating GPIO pattern
  while (true)
  {
    gpio_xor_mask(0xffffffff); // Toggle ALL GPIOs
    sleep_ms(250);
  }
}
