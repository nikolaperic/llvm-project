#include "csmith.h"
uint16_t a[] = {3};
int main() {
  int b, c = 0;
  crc32_gentab();
  for (b = 0; b < 9; b++)
    transparent_crc(a[b], "", c);
  platform_main_end(crc32_context, 0);
}
