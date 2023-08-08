#include "csmith.h"
union a {
} c;
uint8_t b;
uint32_t d = 640096;
uint32_t *f = &d;
uint32_t **g = &f;
static int8_t h = 3;
uint32_t i;
uint8_t l(int32_t, int16_t, int32_t, uint8_t, int8_t);
uint32_t j(int64_t, union a *, int64_t, uint16_t, int32_t);
int64_t k();
uint32_t p() {
  int64_t m = 7;
  l(0, m, b, b, b);
  return 0;
}
uint8_t l(int32_t n, int16_t, int32_t o, uint8_t t, int8_t q) {
  union a *r;
  union a s[] = {c};
  j(0, r, k(s[20]), h, h);
  return 0;
}
uint32_t j(int64_t, union a *c, int64_t e, uint16_t af, int32_t ag) {
  int16_t ah[][1] = {0, 1, 0, 1, 0, 1};
  uint32_t *ai = &i;
  *ai = safe_mul_func_int32_t_s_s(af, ah[5][0] & **g);
  return 0;
}
int64_t k() { return 0; }
int main() {
  int al;
  crc32_gentab();
  p();
  transparent_crc(i, "", al);
  platform_main_end(crc32_context, al);
}
