#include "csmith.h"
static int8_t a[] = {5, 5};
int main() {
  int b, c = 0;
  crc32_gentab();
  for (b = 0; b < 9; b++)
    transparent_crc(a[b], "", c);
  platform_main_end(crc32_context, 0);
}
