﻿

const byte CountDigits[][8] =
{
  {
    B00111000,//0
    B01000100,
    B01000100,
    B01000100,
    B01000100,
    B01000100,
    B01000100,
    B00111000
  },
  {
    B00010000,//1
    B00110000,
    B00010000,
    B00010000,
    B00010000,
    B00010000,
    B00010000,
    B00111000
  }, {
    B00111000,//2
    B01000100,
    B00000100,
    B00000100,
    B00001000,
    B00010000,
    B00100000,
    B01111100
  }, {
    B00111000,//3
    B01000100,
    B00000100,
    B00011000,
    B00000100,
    B00000100,
    B01000100,
    B00111000
  }, {
    B00000100,//4
    B00001100,
    B00010100,
    B00100100,
    B01000100,
    B01111100,
    B00000100,
    B00000100
  }, {
    B01111100,//5
    B01000000,
    B01000000,
    B01111000,
    B00000100,
    B00000100,
    B01000100,
    B00111000
  }, {
    B00111000,//6
    B01000100,
    B01000000,
    B01111000,
    B01000100,
    B01000100,
    B01000100,
    B00111000
  }, {
    B01111100,//7
    B00000100,
    B00000100,
    B00001000,
    B00010000,
    B00100000,
    B00100000,
    B00100000
  }, {
    B00111000,//8
    B01000100,
    B01000100,
    B00111000,
    B01000100,
    B01000100,
    B01000100,
    B00111000
  }, {
    B00111000,//9
    B01000100,
    B01000100,
    B01000100,
    B00111100,
    B00000100,
    B01000100,
    B00111000
  },
  {
    B00111100,//10 Батарейка 0 - 10%        
    B01100110,
    B01000010,
    B01000010,
    B01000010,
    B01000010,
    B01000010,
    B01111110//1
  }, {
    B00111100,//11 Батарейка 10 - 30% 
    B01100110,
    B01000010,
    B01000010,
    B01000010,
    B01000010,
    B01111110,//1
    B01111110//1
  }, {
    B00111100,//12 Батарейка 30 - 50% 
    B01100110,
    B01000010,
    B01000010,
    B01000010,
    B01111110,//1
    B01111110,//1
    B01111110//1
  }, {
    B00111100,//13 Батарейка 50 - 60 % 
    B01100110,
    B01000010,
    B01000010,
    B01111110, //1
    B01111110, //1
    B01111110, //1
    B01111110 //1
  }, {
    B00111100,//14 Батарейка 60 - 80% 
    B01100110,
    B01000010,
    B01111110, //1
    B01111110, //1
    B01111110, //1
    B01111110, //1
    B01111110 //1
  }, {
    B00111100,//15 Батарейка 80% - 90% 
    B01100110,
    B01111110,
    B01111110,//1
    B01111110,//1
    B01111110,//1
    B01111110,//1
    B01111110//1
  }, {
    B00111100,//16 Батарейка  90 -100%
    B01111110,//1
    B01111110,//1
    B01111110,//1
    B01111110,//1
    B01111110,//1
    B01111110,//1
    B01111110//1
  }, {
    B01111110,//17 Ф
    B11011011,
    B11011011,
    B11011011,
    B01111110,
    B00011000,
    B00011000,
    B00000000
  }, {
    B01000010,// 18 рюмка меньше половины
    B01000010,
    B01000010,
    B01111110,
    B01111110,
    B00111100,
    B00011000,
    B01111110
  }, {
    B01000010,// 19 рюмка половина
    B01000010,
    B01111110,
    B01111110,
    B01111110,
    B00111100,
    B00011000,
    B01111110
  }, {
    B01000010,//20 рюмка полная
    B01111110,
    B01111110,
    B01111110,
    B01111110,
    B00111100,
    B00011000,
    B01111110
  }, {
    B01111110,//21 П
    B01100110,
    B01100110,
    B01100110,
    B01100110,
    B01100110,
    B01100110,
    B00000000
  }, {
    B00111100,//22 C
    B01100110,
    B01100000,
    B01100000,
    B01100110,
    B00111100,
    B00000000,
    B00000000
  }, {
    B00000101,// н 23
    B00000111,
    B00000101,
    B00000000,
    B00000100,
    B00010100,
    B01010100,
    B00000000
  }
};
