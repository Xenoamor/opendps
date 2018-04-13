const uint8_t cc[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0xc3, 0x31, 0xa6, 0x18, 0xe3, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0xc3, 0x31, 0xa6, 0x18, 0xe3, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x21, 0x04, 0xc6, 0x58, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbd, 0xf7, 0x00, 0x00,
  0x00, 0x00, 0x21, 0x04, 0xc6, 0x58, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbd, 0xf7, 0x00, 0x00,
  0x00, 0x00, 0xde, 0xfb, 0xf7, 0xbe, 0x63, 0x2c, 0x29, 0x65, 0x52, 0x8a, 0x73, 0xce, 0x00, 0x00,
  0x00, 0x00, 0xde, 0xfb, 0xf7, 0xbe, 0x63, 0x2c, 0x29, 0x65, 0x52, 0x8a, 0x73, 0xce, 0x00, 0x00,
  0x52, 0x8a, 0xff, 0xff, 0x63, 0x4c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x52, 0x8a, 0xff, 0xff, 0x63, 0x4c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xad, 0x55, 0xf7, 0xde, 0x10, 0x82, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xad, 0x55, 0xf7, 0xde, 0x10, 0x82, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xce, 0x59, 0xd6, 0xba, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xce, 0x59, 0xd6, 0xba, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xe7, 0x3c, 0xc6, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xe7, 0x3c, 0xc6, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xf7, 0xde, 0xb5, 0xd6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xf7, 0xde, 0xb5, 0xd6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xe7, 0x3c, 0xc6, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xe7, 0x3c, 0xc6, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xce, 0x79, 0xde, 0xfb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xce, 0x79, 0xde, 0xfb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xa5, 0x54, 0xff, 0xff, 0x18, 0xe3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xa5, 0x54, 0xff, 0xff, 0x18, 0xe3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x4a, 0x49, 0xff, 0xff, 0x7c, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x4a, 0x49, 0xff, 0xff, 0x7c, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xce, 0x99, 0xf7, 0xde, 0x7b, 0xef, 0x31, 0xa6, 0x42, 0x48, 0x8c, 0x71, 0x00, 0x00,
  0x00, 0x00, 0xce, 0x99, 0xf7, 0xde, 0x7b, 0xef, 0x31, 0xa6, 0x42, 0x48, 0x8c, 0x71, 0x00, 0x00,
  0x00, 0x00, 0x10, 0x82, 0xb5, 0xd6, 0xf7, 0xde, 0xff, 0xff, 0xff, 0xff, 0xce, 0x79, 0x08, 0x41,
  0x00, 0x00, 0x10, 0x82, 0xb5, 0xd6, 0xf7, 0xde, 0xff, 0xff, 0xff, 0xff, 0xce, 0x79, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x61, 0x31, 0xc6, 0x18, 0xe3, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x61, 0x31, 0xc6, 0x18, 0xe3, 0x00, 0x00, 0x00, 0x00
};
#define cc_width  16
#define cc_height  15
