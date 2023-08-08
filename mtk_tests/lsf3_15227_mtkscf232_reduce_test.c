#include "csmith.h"
struct a {
  int32_t b;
} static c[][1] = {5};
struct a d;
uint8_t e() {
  struct a *f[] = {&c[0][0], &d};
  return 0;
}
int main() {
  int g, h, i = 0;
  crc32_gentab();
  for (g = 0; g < 3; g++)
    for (h = 0; h < 1; h++)
      transparent_crc(c[g][h].b, "", i);
  platform_main_end(crc32_context, 0);
}
