// copied from http://heim.ifi.uio.no/haakoh/avr/a
const int font_count = 81;

unsigned const char PROGMEM myfont[81][5] = {
  {0, 0, 0, 0, 0},	// 0 space
  {0x3f, 0x48, 0x48, 0x48, 0x3f},	//1 A
  {0x7f, 0x49, 0x49, 0x49, 0x36},	//2 B
  {0x3e, 0x41, 0x41, 0x41, 0x22},
  {0x7f, 0x41, 0x41, 0x22, 0x1c},
  {0x7f, 0x49, 0x49, 0x49, 0x41},
  {0x7f, 0x48, 0x48, 0x48, 0x40},
  {0x3e, 0x41, 0x49, 0x49, 0x2e},  
  {0x7f, 0x08, 0x08, 0x08, 0x7f},
  {0x00, 0x41, 0x7f, 0x41, 0x00},
  {0x06, 0x01, 0x01, 0x01, 0x7e},
  {0x7f, 0x08, 0x14, 0x22, 0x41},
  {0x7f, 0x01, 0x01, 0x01, 0x01},
  {0x7f, 0x20, 0x10, 0x20, 0x7f},
  {0x7f, 0x10, 0x08, 0x04, 0x7f},
  {0x3e, 0x41, 0x41, 0x41, 0x3e},
  {0x7f, 0x48, 0x48, 0x48, 0x30},  
  {0x3e, 0x41, 0x45, 0x42, 0x3d},
  {0x7f, 0x48, 0x4c, 0x4a, 0x31},
  {0x31, 0x49, 0x49, 0x49, 0x46},
  {0x40, 0x40, 0x7f, 0x40, 0x40},
  {0x7e, 0x01, 0x01, 0x01, 0x7e},
  {0x7c, 0x02, 0x01, 0x02, 0x7c},
  //{0x7f, 0x02, 0x04, 0x02, 0x7f},	//23 W
  {0x7e, 0x01, 0x07, 0x01, 0x7e},	//23 alternate W  
  {0x63, 0x14, 0x08, 0x14, 0x63},	//24 X
  {0x60, 0x10, 0x0f, 0x10, 0x60},
  {0x43, 0x45, 0x49, 0x51, 0x61},	//26  Z
  
  {0x01, 0x00, 0x00, 0x00, 0x00},	//27 .
  {0x00, 0x00, 0x70, 0x00, 0x00},	//28'
  {0x00, 0x00, 0x14, 0x00, 0x00},	//29 :
  {0x7F, 0x3E, 0x1C, 0x08, 0x00},	//30  selector arrow  
  {0x3E, 0x41, 0x41, 0x41, 0x3E},	//31  0
  {0x10, 0x21, 0x7F, 0x01, 0x00},	//32  1
  {0x21, 0x43, 0x45, 0x49, 0x31},	//33 2
  //{0x22, 0x41, 0x49, 0x49, 0x36},	//34 3
  {0x42, 0x41, 0x51, 0x69, 0x46},	//34 3	alternate 3
  {0xC , 0x14, 0x24, 0x7F, 0x4},	//35 4
  {0x72, 0x51, 0x51, 0x51, 0x4E},	//36 5
  {0x3E, 0x49, 0x49, 0x49, 0x26},	//37 6
  //{0x1E, 0x29, 0x49, 0x49, 0x06},	//37 6 more round  
  {0x40, 0x47, 0x48, 0x50, 0x60},	//38  7
  {0x36, 0x49, 0x49, 0x49, 0x36},	//39 8
  {0x32, 0x49, 0x49, 0x49, 0x3E},	//40 9

  {0x2,  0x15, 0x15, 0x15, 0xF },	//41  a
  {0x7F, 0x5,  0x9,  0x9,  0x6 },	//42 b
  {0xE,  0x11, 0x11, 0x11, 0x2 },
  {0x6,  0x9,  0x9,  0x5,  0x7F},
  {0xE,  0x15, 0x15, 0x15, 0xC },
  {0x8,  0x3F, 0x44, 0x40, 0x20},	//46 f
  {0x18, 0x25, 0x25, 0x25, 0x3E},
  {0x7F, 0x8,  0x10, 0x10, 0xF},
  {0x0,  0x0,  0x2F, 0x0,  0x0},
  {0x2,  0x1,  0x11, 0x5E, 0x0},
  {0x7F, 0x4,  0x6,  0x11, 0x0},
  {0x0,  0x41, 0x7F, 0x1,  0x0},	//52 l
  {0x1F, 0x10, 0xC,  0x10, 0xF},
  {0x1F, 0x8,  0x10, 0x10, 0xF},
  {0xE,  0x11, 0x11, 0x11, 0xE},
  {0x1F, 0x14, 0x14, 0x14, 0x8},
  {0x8,  0x14, 0x14, 0xC,  0x1F},	//57 q
  {0x1F, 0x8,  0x10, 0x10, 0x8},
  {0x9,  0x15, 0x15, 0x15, 0x2},
  {0x10, 0x7E, 0x11, 0x1,  0x2},
  {0x1E, 0x1,  0x1,  0x2,  0x1F},	//61 u
  {0x1C, 0x2,  0x1,  0x2,  0x1C},
  {0x1E, 0x1,  0x3,  0x1,  0x1E},
  {0x11, 0xA,  0x4,  0xA,  0x11},
  {0x18, 0x5,  0x5,  0x5,  0x1E}, 
  {0x11, 0x13, 0x15, 0x19, 0x11},	//66  z
  
  // invader sprites - may still need some tweaking
  {0x0,  0x19, 0x3A, 0x6D, 0x7A}, //67 top invader left
  {0x7A, 0x6D, 0x3A, 0x19, 0x0} , //68 top invader right
  {0x0,  0x1A, 0x3D, 0x68, 0x7C}, //69 top invader left wiggle
  {0x7C, 0x68, 0x3D, 0x1A, 0x0},  //70 top invader right wiggle
  {0x38, 0xD,  0x5E, 0x36, 0x1C}, //71 middle invader left
  {0x1C, 0x36, 0x5E, 0xD,  0x38},
  {0xE,  0xC,  0x5E, 0x35, 0x1C}, //73 middle invader left wiggle
  {0x1C, 0x35, 0x5E, 0xC,  0xE},
  {0x19, 0x39, 0x3A, 0x6C, 0x7A}, //75 bottom invader left
  {0x7A, 0x6C, 0x3A, 0x39, 0x19},
  {0x18, 0x39, 0x3B, 0x6C, 0x7C}, //77 bottom invader left wiggle
  {0x7C, 0x6C, 0x3B, 0x39, 0x18}, //78

  {0x00, 0x14, 0x14, 0x14, 0x00}, //79 =

  
};

const int bigfont_count = 10;
unsigned const char PROGMEM mybigfont[10][20] = {
   {0x3F,0x7F,0xE0,0xC1,0xC3,0xC7,0xCE,0xFC,0x7F,0x3F,0xF0,0xF8,0xFC,0xCC,0x8C,0xC,0xC,0x3C,0xF8,0xF0} //0
  ,{0x0,0x0,0x30,0x70,0xFF,0xFF,0x0,0x0,0x0,0x0,0x0,0x0,0xC,0xC,0xFC,0xFC,0xC,0xC,0x0,0x0}
  ,{0x30,0x70,0xE0,0xC0,0xC0,0xC1,0xC3,0xE7,0x7E,0x3C,0xC,0x1C,0x3C,0x7C,0xEC,0xCC,0x8C,0xC,0xC,0xC}
  ,{0x30,0x70,0xE0,0xC0,0xC0,0xC3,0xC3,0xE3,0x7F,0x3C,0x30,0x38,0x1C,0xC,0xC,0xC,0xC,0x1C,0xF8,0xF0}
  ,{0x3,0x7,0xE,0x1C,0x38,0x70,0xFF,0xFF,0x0,0x0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xFC,0xFC,0xC0,0xC0}
  ,{0xFC,0xFC,0xCC,0xCC,0xCC,0xCC,0xCC,0xCE,0xC7,0xC3,0x30,0x38,0x1C,0xC,0xC,0xC,0xC,0x1C,0xF8,0xF0}
  ,{0x3F,0x7F,0xE3,0xC3,0xC3,0xC3,0xC3,0xE3,0x61,0x20,0xF0,0xF8,0x1C,0xC,0xC,0xC,0xC,0x9C,0xF8,0xF0}
  ,{0xC0,0xC0,0xC0,0xC1,0xC3,0xC7,0xCE,0xDC,0xF8,0xF0,0x0,0x0,0x0,0xFC,0xFC,0x0,0x0,0x0,0x0,0x0}
  ,{0x3C,0x7F,0xE7,0xC3,0xC3,0xC3,0xC3,0xE7,0x7F,0x3C,0xF0,0xF8,0x9C,0xC,0xC,0xC,0xC,0x9C,0xF8,0xF0}
  ,{0x3C,0x7E,0xE7,0xC3,0xC3,0xC3,0xC3,0xC3,0x7F,0x3F,0x10,0x18,0x1C,0xC,0xC,0xC,0xC,0x1C,0xF8,0xF0}
};

const int tinyfont_count = 47;
unsigned const int PROGMEM mytinyfont[47][3] = {
  
   //a-z
   {0, 0, 0}   //0 space!   
  //,{0x1F, 0x14, 0x1F}	//1 A
  ,{0x0F, 0x14, 0x0F}	// 1 A
  ,{0x1F, 0x15, 0xA}	// 2 B
  //,{0x1F, 0x11, 0x11}	//3 C
  ,{0x0E, 0x11, 0x11}	// 3 C  
  ,{0x1F, 0x11, 0xE}
  ,{0x1F, 0x15, 0x11}	// 5 E
  ,{0x1F, 0x14, 0x10}
  ,{0x1F, 0x11, 0x17}
  ,{0x1F, 0x4,  0x1F}
  ,{0x11, 0x1F, 0x11}
  ,{0x3,  0x1,  0x1F}	// 10 J
  ,{0x1F, 0x4,  0x1B}
  ,{0x1F, 0x1,  0x1}
  ,{0x1F, 0x8,  0x1F}
  ,{0x1F, 0x10, 0x0F}	// 14 N
  ,{0x1F, 0x11, 0x1F}	// 15 O
  ,{0x1F, 0x14, 0x1C}
  ,{0x1C, 0x14, 0x1F}
  //,{0x1F, 0x16, 0x1D}	// 18 R
  ,{0x1F, 0x14, 0x1B}	// 18 R
  ,{0x0D, 0x15, 0x16}	// 19 S
  //,{0x1D, 0x15, 0x17}	// 19 S  
  ,{0x10, 0x1F, 0x10}	//20 T
  ,{0x1F, 0x1,  0x1F}	//21 U
  ,{0x1E, 0x1,  0x1E}	//22 V
  ,{0x1F, 0x2,  0x1F}	//23 W
  ,{0x1B, 0x4,  0x1B}
  ,{0x1C, 0x7,  0x1C}
  ,{0x13, 0x15, 0x19}	//26 Z
  
  ,{0x01, 0x00, 0x00}	//27 .
  ,{0x00, 0x0A, 0x00}	// 28 :
  ,{0x18, 0x00, 0x00}	// 29 '
  ,{0x1D, 0x00, 0x00}	// 30 !
  ,{0x10, 0x15, 0x1C}	// 31 ?
  
  ,{0x1F, 0x11, 0x1F}	//32 0 
  ,{0x09, 0x1F, 0x01}	//33 1
  ,{0x17, 0x15, 0x1D}	//34 2
  ,{0x11, 0x15, 0x1F}	//35 3
  ,{0x1C, 0x4,  0x1F}	//36 4
  ,{0x1D, 0x15, 0x17}	//37 5
  //,{0x1F, 0x15, 0x17}	//38 6
  ,{0x0F, 0x15, 0x17}	//38 6 rounded
  ,{0x10, 0x17, 0x18}	//39 7
  ,{0x1F, 0x15, 0x1F}	//40 8
  //,{0x1D, 0x15, 0x1F}	//41 9
  ,{0x1D, 0x15, 0x1E}	//41 9 rounded
  
  ,{0x04, 0x04, 0x04}	//42  - minus
  ,{0x00, 0x18, 0x18}	//43  # used as degree-symbol
  ,{0x1F, 0x0E, 0x04}	//44 > selector-arrow
  ,{0x17, 0x01, 0x17}	//45 ~ �
  ,{0x17, 0x05, 0x17}	//46 * �
};
