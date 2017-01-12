#include "BMPwriter.h"
#include <vector>

using namespace std;

BMP* BMPwriter::blacken(BMP* bmp, int posX, int posY){
	RGBApixel black;
	black.Red=0; black.Green=0; black.Blue =0; black.Alpha=1;
	bmp->SetPixel(posX, posY,black);
	return bmp;
}

BMP* BMPwriter::write(BMP* bmp, char letter, int posX, int posY){
	RGBApixel black;
	black.Red = 255; black.Green = 255; black.Blue = 255; black.Alpha = 1;
	if(letter == 'a'){
		for(int a = 3; a<9; a++){
			pixelX.push_back(a); pixelY.push_back(8);
		}
		for(int a = 1; a<10; a++){
			pixelX.push_back(a); pixelY.push_back(9);
		}
		for(int a = 1; a<12; a++){
			pixelX.push_back(a); pixelY.push_back(10);
		}
		pixelX.push_back(1); pixelY.push_back(11);
		pixelX.push_back(2); pixelY.push_back(11);
		pixelX.push_back(10); pixelY.push_back(11);
		pixelX.push_back(11); pixelY.push_back(11);
		pixelX.push_back(12); pixelY.push_back(11);
		for(int b = 12; b<25; b++){
			pixelX.push_back(11); pixelY.push_back(b);
			pixelX.push_back(12); pixelY.push_back(b);
		}
		for(int a = 4; a<11; a++){
			for(int b = 15; b<18; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a = 2; a<4; a++){
			for(int b = 16; b<19; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int b = 17; b<23; b++){
			pixelX.push_back(1); pixelY.push_back(b);
		}
		for(int b = 19; b<22; b++){
			pixelX.push_back(0); pixelY.push_back(b);
		}
		for(int b = 21; b<24; b++){
			pixelX.push_back(2); pixelY.push_back(b);
		}
		for(int a = 3; a<8; a++){
			for(int b = 22; b<25; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a = 9; a<11; a++){
			pixelX.push_back(a); pixelY.push_back(21);
		}
		for(int a = 8; a<11; a++){
			pixelX.push_back(a); pixelY.push_back(22);
		}
		for(int a = 8; a<10; a++){
			pixelX.push_back(a); pixelY.push_back(23);
		}
	}
	else if(letter == 'b'){
		for(int b = 0; b<25; b++){
			pixelX.push_back(0); pixelY.push_back(b);
			pixelX.push_back(1); pixelY.push_back(b);
		}
		for(int b = 20; b<23; b++){
			pixelX.push_back(2); pixelY.push_back(b);
		}
		pixelX.push_back(3); pixelY.push_back(21);
		pixelX.push_back(4); pixelY.push_back(21);
		pixelX.push_back(3); pixelY.push_back(22);
		for(int a =4; a<10; a++){
			pixelX.push_back(a); pixelY.push_back(22);
			pixelX.push_back(a); pixelY.push_back(23);
		}
		for(int a = 6; a<10; a++){
			pixelX.push_back(a); pixelY.push_back(24);
		}
		for(int b =21; b<24; b++){
			pixelX.push_back(10); pixelY.push_back(b);
		}
		for(int b=20; b<23; b++){
			pixelX.push_back(11); pixelY.push_back(b);
		}
		for(int b=11; b<22; b++){
			pixelX.push_back(12); pixelY.push_back(b);
		}
		for(int b=13; b<20; b++){
			pixelX.push_back(13); pixelY.push_back(b);
		}
		for(int b=9; b<14; b++){
			pixelX.push_back(11); pixelY.push_back(b);
		}
		pixelX.push_back(10); pixelY.push_back(9);
		pixelX.push_back(10); pixelY.push_back(10);
		pixelX.push_back(10); pixelY.push_back(11);
		for(int a =4; a<10; a++){
			pixelX.push_back(a); pixelY.push_back(9);
			pixelX.push_back(a); pixelY.push_back(10);
		}
		for(int a =6; a<10; a++){
			pixelX.push_back(a); pixelY.push_back(8);
		}
		pixelX.push_back(4); pixelY.push_back(9);
		pixelX.push_back(5); pixelY.push_back(9);
		pixelX.push_back(5); pixelY.push_back(10);
		for(int a =2; a<5; a++){
			pixelX.push_back(a); pixelY.push_back(10);
			pixelX.push_back(a); pixelY.push_back(11);
		}
		pixelX.push_back(2); pixelY.push_back(12);
	}
    else if(letter == 'c'){
		pixelX.push_back(10); pixelY.push_back(10);
		pixelX.push_back(10); pixelY.push_back(11);
		pixelX.push_back(11); pixelY.push_back(10);
		pixelX.push_back(11); pixelY.push_back(11);
		pixelX.push_back(10); pixelY.push_back(9);
		for(int a =5; a<10; a++){
			for(int b=8; b<11; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int b =9; b<12; b++){
			pixelX.push_back(3); pixelY.push_back(b);
			pixelX.push_back(4); pixelY.push_back(b);
		}
		for(int b=10; b<15; b++){
			pixelX.push_back(2); pixelY.push_back(b);
		}
		for(int b=11; b<22; b++){
			pixelX.push_back(1); pixelY.push_back(b);
		}
		for(int b=14; b<20; b++){
			pixelX.push_back(0); pixelY.push_back(b);
		}
		for(int b =18; b<23; b++){
			pixelX.push_back(2); pixelY.push_back(b);
		}
		for(int b =21; b<24; b++){
			pixelX.push_back(3); pixelY.push_back(b);
			pixelX.push_back(4); pixelY.push_back(b);
		}
		for(int a =5; a<10; a++){
			for(int b = 22; b<25; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int b= 21; b<24; b++){
			pixelX.push_back(10); pixelY.push_back(b);
			pixelX.push_back(11); pixelY.push_back(b);
		}
		pixelX.push_back(11); pixelY.push_back(20);
    }
    else if(letter == 'd'){
		for(int b = 0; b<25; b++){
			pixelX.push_back(12); pixelY.push_back(b);
			pixelX.push_back(13); pixelY.push_back(b);
		}
		pixelX.push_back(11); pixelY.push_back(12);
		for(int a =9; a<12; a++){
			pixelX.push_back(a); pixelY.push_back(10);
			pixelX.push_back(a); pixelY.push_back(11);
		}
		pixelX.push_back(9); pixelY.push_back(9);
		for(int a =3; a<9; a++){
			pixelX.push_back(a); pixelY.push_back(9);
			pixelX.push_back(a); pixelY.push_back(10);
		}
		for(int a =4; a<9; a++){
			pixelX.push_back(a); pixelY.push_back(8);
		}
		pixelX.push_back(2); pixelY.push_back(10);
		for(int a=1; a<4; a++){
			pixelX.push_back(a); pixelY.push_back(11);
		}
		for(int b=12; b<15; b++){
			pixelX.push_back(1); pixelY.push_back(b);
			pixelX.push_back(2); pixelY.push_back(b);
		}
		pixelX.push_back(0); pixelY.push_back(13);
		pixelX.push_back(0); pixelY.push_back(14);
		for(int b=15; b<19; b++){
			pixelX.push_back(0); pixelY.push_back(b);
			pixelX.push_back(1); pixelY.push_back(b);
		}
		pixelX.push_back(2); pixelY.push_back(18);
		pixelX.push_back(0); pixelY.push_back(19);
		for(int b =19; b<22; b++){
			pixelX.push_back(1); pixelY.push_back(b);
			pixelX.push_back(2); pixelY.push_back(b);
		}
		pixelX.push_back(2); pixelY.push_back(22);
		for(int b = 21; b<24; b++){
			pixelX.push_back(3); pixelY.push_back(b);
		}
		for(int a =4; a<9; a++){
			for(int b = 22; b<25; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(9); pixelY.push_back(23);
		pixelX.push_back(11); pixelY.push_back(20);
		for(int a = 9; a<12; a++){
			for(int b = 21; b<23; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
    }
    else if(letter == 'e'){
		pixelX.push_back(12); pixelY.push_back(21);
		for(int a = 11; a<13; a++){
			for(int b = 22; b<24; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a =5; a<11; a++){
			for(int b =22; b<25; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(3); pixelY.push_back(23);
		pixelX.push_back(4); pixelY.push_back(23);
		for(int a=2; a<5; a++){
			pixelX.push_back(a); pixelY.push_back(22);
		}
		for(int a=1; a<4; a++){
			pixelX.push_back(a); pixelY.push_back(21);
		}
		pixelX.push_back(1); pixelY.push_back(20);
		pixelX.push_back(1); pixelY.push_back(20);
		for(int b = 14; b<20; b++){
			pixelX.push_back(0); pixelY.push_back(b);
			pixelX.push_back(1); pixelY.push_back(b);
		}
		for(int b =11; b<14; b++){
			pixelX.push_back(1); pixelY.push_back(b);
			pixelX.push_back(2); pixelY.push_back(b);
		}
		pixelX.push_back(2); pixelY.push_back(10);
		pixelX.push_back(3); pixelY.push_back(11);
		for(int a = 3; a<11; a++){
			pixelX.push_back(a); pixelY.push_back(9);
			pixelX.push_back(a); pixelY.push_back(10);
		}
		for(int a = 5; a<10; a++){
			pixelX.push_back(a); pixelY.push_back(8);
		}
		for(int b =9; b<12; b++){
			pixelX.push_back(10); pixelY.push_back(b);
		}
		for(int b=10; b<13; b++){
			pixelX.push_back(11); pixelY.push_back(b);
		}
		pixelX.push_back(12); pixelY.push_back(11);
		pixelX.push_back(12); pixelY.push_back(12);
		for(int b=13; b<18; b++){
			pixelX.push_back(12); pixelY.push_back(b);
			pixelX.push_back(13); pixelY.push_back(b);
		}
		for(int a =2; a<12; a++){
			for(int b = 15; b<18; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
	}
    else if(letter == 'f'){
		for(int a =0; a<9; a++){
			for(int b=8; b<11; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int b=11; b<25; b++){
			pixelX.push_back(3); pixelY.push_back(b);
			pixelX.push_back(4); pixelY.push_back(b);
		}
		for(int b =2; b<8; b++){
			pixelX.push_back(3); pixelY.push_back(b);
			pixelX.push_back(4); pixelY.push_back(b);
		}
		pixelX.push_back(4); pixelY.push_back(1);
		for(int b =1; b<4; b++){
			pixelX.push_back(5); pixelY.push_back(b);
		}
		for(int a =6; a<10; a++){
			for(int b=0; b<3; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
    }

    else if(letter == 'g'){
		for(int a =4; a<14; a++){
			for(int b =8; b<11; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int b = 9; b<12; b++){
			pixelX.push_back(2); pixelY.push_back(b);
			pixelX.push_back(3); pixelY.push_back(b);
		}
		pixelX.push_back(2); pixelY.push_back(12);
		for(int b =10; b<17; b++){
			pixelX.push_back(1); pixelY.push_back(b);
		}
		for(int b =13; b<19; b++){
			pixelX.push_back(2); pixelY.push_back(b);
		}
		pixelX.push_back(3); pixelY.push_back(16);
		pixelX.push_back(3); pixelY.push_back(17);
		pixelX.push_back(3); pixelY.push_back(18);
		for(int a =4; a<9; a++){
			for(int b =17; b<20; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int b=16; b<19; b++){
			pixelX.push_back(9); pixelY.push_back(b);
		}
		pixelX.push_back(10); pixelY.push_back(17);
		pixelX.push_back(9); pixelY.push_back(11);
		pixelX.push_back(10); pixelY.push_back(11);
		for(int b = 12; b<17; b++){
			pixelX.push_back(10); pixelY.push_back(b);
			pixelX.push_back(11); pixelY.push_back(b);
		}
		pixelX.push_back(1); pixelY.push_back(18);
		for(int b =19; b<22; b++){
			pixelX.push_back(0); pixelY.push_back(b);
			pixelX.push_back(1); pixelY.push_back(b);
		}
		for(int a=1; a<11; a++){
			for(int b=22; b<25; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int b=24; b<29; b++){
			pixelX.push_back(0); pixelY.push_back(b);
		}
		pixelX.push_back(2); pixelY.push_back(25);
		for(int b=25; b<30; b++){
			pixelX.push_back(1); pixelY.push_back(b);
		}
		pixelX.push_back(2); pixelY.push_back(28);
		pixelX.push_back(2); pixelY.push_back(29);
		for(int a=3; a<10; a++){
			for(int b=28; b<31; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int b=27; b<30; b++){
			pixelX.push_back(10); pixelY.push_back(b);
			pixelX.push_back(11); pixelY.push_back(b);
		}
		for(int b=23; b<26;b++){
			pixelX.push_back(11); pixelY.push_back(b);
		}
		for(int b=23; b<29; b++){
			pixelX.push_back(12); pixelY.push_back(b);
		}
		for(int b=24; b<28; b++){
			pixelX.push_back(13); pixelY.push_back(b);
		}
    }

    else if(letter == 'h'){
		for(int b=0; b<25; b++){
			pixelX.push_back(0); pixelY.push_back(b);
			pixelX.push_back(1); pixelY.push_back(b);
		}
		pixelX.push_back(2); pixelY.push_back(12);
		pixelX.push_back(2); pixelY.push_back(10);
		pixelX.push_back(2); pixelY.push_back(11);
		pixelX.push_back(3); pixelY.push_back(11);
		for(int a =3; a<11; a++){
			for(int b=9; b<11; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=5; a<9; a++){
			pixelX.push_back(a); pixelY.push_back(8);
		}
		pixelX.push_back(8); pixelY.push_back(11);
		pixelX.push_back(9); pixelY.push_back(11);
		pixelX.push_back(9); pixelY.push_back(12);
		for(int a= 10; a<12; a++){
			for(int b=11; b<25; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
    }

    else if(letter == 'i'){
		for(int a= 0; a<2; a++){
			for(int b=2; b<5; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=0; a<2; a++){
			for(int b=8; b<25; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
    }

    else if(letter == 'j'){
		for(int a=4; a<6; a++){
			for(int b=2; b<5; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=4; a<6; a++){
			for(int b=8; b<28; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(3); pixelY.push_back(27);
		for(int a =0; a<6; a++){
			for(int b=28; b<30; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=0; a<4; a++){
			pixelX.push_back(a); pixelY.push_back(30);
		}
    }

    else if(letter == 'k'){
		for(int a =0; a<3; a++){
			for(int b=0; b<25; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=3; a<6; a++){
			pixelX.push_back(a); pixelY.push_back(15);
		}
		pixelX.push_back(4); pixelY.push_back(14);
		pixelX.push_back(5); pixelY.push_back(14);
		for(int a =5; a<8; a++){
			pixelX.push_back(a); pixelY.push_back(13);
		}
		for(int a=6; a<9; a++){
			pixelX.push_back(a); pixelY.push_back(12);
		}
		for(int a=7; a<10; a++){
			pixelX.push_back(a); pixelY.push_back(11);
		}
		for(int a =8; a<11; a++){
			pixelX.push_back(a); pixelY.push_back(10);
		}
		for(int a =9; a<12; a++){
			for(int b=8; b<10; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=4; a<7; a++){
			pixelX.push_back(a); pixelY.push_back(16);
		}
		for(int a=5; a<8; a++){
			pixelX.push_back(a); pixelY.push_back(17);
		}
		for(int a=5; a<8; a++){
			pixelX.push_back(a); pixelY.push_back(18);
		}
		for(int a=6; a<9; a++){
			pixelX.push_back(a); pixelY.push_back(19);
		}
		for(int a=7; a<10; a++){
			pixelX.push_back(a); pixelY.push_back(20);
		}
		for(int a=8; a<11; a++){
			pixelX.push_back(a); pixelY.push_back(21);
		}
		for(int a=9; a<12; a++){
			for(int b=22; b<24; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=10; a<13; a++){
			pixelX.push_back(a); pixelY.push_back(24);
		}
    }

    else if(letter == 'l'){
        for(int b=0; b<25; b++){
			pixelX.push_back(0); pixelY.push_back(b);
			pixelX.push_back(1); pixelY.push_back(b);
		}
    }

    else if(letter == 'm'){
		for(int a=0; a<2; a++){
			for(int b=8; b<25; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int b=10; b<14; b++){
			pixelX.push_back(2); pixelY.push_back(b);
		}
		for(int b=10; b<13; b++){
			pixelX.push_back(3); pixelY.push_back(b);
		}
		for(int b=9; b<12; b++){
			pixelX.push_back(4); pixelY.push_back(b);
		}
		for(int a =6; a<10; a++){
			pixelX.push_back(a); pixelY.push_back(8);
		}
		for(int a=5; a<12; a++){
			for(int b=9; b<11; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=9; a<16; a++){
			pixelX.push_back(a); pixelY.push_back(11);
		}
		for(int a=10; a<15; a++){
			pixelX.push_back(a); pixelY.push_back(12);
		}
		for(int a=11; a<13; a++){
			for(int b=13; b<25; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a = 12; a<23; a++){
			pixelX.push_back(a); pixelY.push_back(10);
		}
		for(int a=15; a<22; a++){
			pixelX.push_back(a); pixelY.push_back(9);
		}
		for(int a=17; a<21; a++){
			pixelX.push_back(a); pixelY.push_back(8);
		}
		for(int a=20; a<24; a++){
			pixelX.push_back(a); pixelY.push_back(11);
		}
		for(int a=21; a<24; a++){
			pixelX.push_back(a); pixelY.push_back(12);
		}
		for(int a=22; a<24; a++){
			for(int b=13; b<25; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
    }

    else if(letter == 'n'){
        for(int a=0; a<2; a++){
            for(int b=8; b<25; b++){
                pixelX.push_back(a); pixelY.push_back(b);
            }
        }
        for(int b=10; b<14; b++){
            pixelX.push_back(2); pixelY.push_back(b);
        }
        for(int b=10; b<13; b++){
            pixelX.push_back(3); pixelY.push_back(b);
        }
        for(int b=9; b<12; b++){
            pixelX.push_back(4); pixelY.push_back(b);
        }
        for(int a =6; a<10; a++){
            pixelX.push_back(a); pixelY.push_back(8);
        }
        for(int a=5; a<12; a++){
            for(int b=9; b<11; b++){
                pixelX.push_back(a); pixelY.push_back(b);
            }
        }
		for(int a =9; a<13; a++){
			pixelX.push_back(a); pixelY.push_back(11);
		}
		for(int a=10; a<13; a++){
			pixelX.push_back(a); pixelY.push_back(12);
		}
		for(int a=11; a<13; a++){
			for(int b=13; b<25; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
    }

    else if(letter == 'o'){
		for(int a=5; a<11; a++){
			for(int b=8; b<11; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=5; a<11; a++){
			for(int b=22; b<25; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=0; a<2; a++){
			for(int b=14; b<20; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(2); pixelY.push_back(14);
		pixelX.push_back(2); pixelY.push_back(18);
		pixelX.push_back(2); pixelY.push_back(19);
		for(int a=1; a<3; a++){
			for(int b=12; b<14; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(3); pixelY.push_back(12);
		for(int a=2; a<5; a++){
			for(int b=10; b<12; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(3); pixelY.push_back(9);
		pixelX.push_back(4); pixelY.push_back(9);
		for(int a=11; a<13; a++){
			for(int b=9; b<12; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int b=10; b<15; b++){
			pixelX.push_back(13); pixelY.push_back(b);
		}
		for(int b=11; b<22; b++){
			pixelX.push_back(14); pixelY.push_back(b);
		}
		for(int b=13; b<19; b++){
			pixelX.push_back(15); pixelY.push_back(b);
		}
		for(int b=18; b<23; b++){
			pixelX.push_back(13); pixelY.push_back(b);
		}
		pixelX.push_back(12); pixelY.push_back(20);
		for(int a=11; a<13; a++){
			for(int b=21; b<24; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=1; a<4; a++){
			pixelX.push_back(a); pixelY.push_back(20);
		}
		for(int a=1; a<5; a++){
			pixelX.push_back(a); pixelY.push_back(21);
		}
		for(int a=2; a<6; a++){
			pixelX.push_back(a); pixelY.push_back(22);
		}
		for(int a=3; a<6; a++){
			pixelX.push_back(a); pixelY.push_back(23);
		}
    }

    else if(letter == 'p'){
		for(int a=0; a<2; a++){
			for(int b=8; b<31; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(2); pixelY.push_back(12);
		pixelX.push_back(2); pixelY.push_back(20);
		pixelX.push_back(4); pixelY.push_back(9);
		pixelX.push_back(4); pixelY.push_back(23);
		for(int a=2; a<5; a++){
			for(int b=10; b<12; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=6; a<10; a++){
			pixelX.push_back(a); pixelY.push_back(8);
		}
		for(int a=5; a<12; a++){
			for(int b=9; b<11; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(10); pixelY.push_back(11);
		for(int a=11; a<13; a++){
			for(int b=11; b<14; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(13); pixelY.push_back(13);
		for(int a=12; a<14; a++){
			for(int b=14; b<20; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(11); pixelY.push_back(19);
		for(int a=2; a<5; a++){
			for(int b=21; b<23; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=6; a<10; a++){
			pixelX.push_back(a); pixelY.push_back(24);
		}
		for(int a=5; a<11; a++){
			for(int b=22; b<24; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(10); pixelY.push_back(21);
		for(int b=20; b<23; b++){
			pixelX.push_back(11); pixelY.push_back(b);
		}
		for(int b=20; b<22; b++){
			pixelX.push_back(12); pixelY.push_back(b);
		}
    }

    else if(letter == 'q'){
		for(int a=12; a<14; a++){
			for(int b=8; b<31; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int b=10; b<13; b++){
			pixelX.push_back(11); pixelY.push_back(b);
		}
		for(int b=10; b<12; b++){
			pixelX.push_back(10); pixelY.push_back(b);
		}
		for(int b=9; b<12; b++){
			pixelX.push_back(9); pixelY.push_back(b);
		}
		for(int a=4; a<9; a++){
			pixelX.push_back(a); pixelY.push_back(8);
		}
		for(int a=3; a<9; a++){
			for(int b=8; b<11; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(2); pixelY.push_back(10);
		pixelX.push_back(11); pixelY.push_back(20);
		for(int a =1; a<5; a++){
			pixelX.push_back(a); pixelY.push_back(11);
		}
		for(int a=1; a<4; a++){
			pixelX.push_back(a); pixelY.push_back(12);
		}
		for(int a =9; a<12; a++){
			for(int b=21; b<23; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(8); pixelY.push_back(22);
		pixelX.push_back(8); pixelY.push_back(23);
		pixelX.push_back(9); pixelY.push_back(23);
		for(int a=4; a<8; a++){
			for(int b=22; b<25; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(3); pixelY.push_back(23);
		pixelX.push_back(2); pixelY.push_back(23);
		for(int a=2; a<4; a++){
			for(int b=21; b<23; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int b=13; b<22; b++){
			pixelX.push_back(1); pixelY.push_back(b);
		}
		for(int b=14; b<19; b++){
			pixelX.push_back(0); pixelY.push_back(b);
		}
		pixelX.push_back(2); pixelY.push_back(19);
		pixelX.push_back(2); pixelY.push_back(20);
		pixelX.push_back(2); pixelY.push_back(13);
		pixelX.push_back(2); pixelY.push_back(14);
    }

    else if(letter == 'r'){
		for(int a=0; a<2; a++){
			for(int b=8; b<25; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int b=11; b<14; b++){
			pixelX.push_back(2); pixelY.push_back(b);
		}
		for(int b=10; b<13; b++){
			pixelX.push_back(3); pixelY.push_back(b);
		}
		for(int b=9; b<12; b++){
			pixelX.push_back(4); pixelY.push_back(b);
		}
		for(int a=5; a<9; a++){
			for(int b=8; b<11; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
    }

    else if(letter == 's'){
		for(int b=9; b<11; b++){
			pixelX.push_back(8); pixelY.push_back(b);
		}
		for(int a=3; a<8; a++){
			for(int b=8; b<11; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int b=9; b<12; b++){
			pixelX.push_back(2); pixelY.push_back(b);
		}
		for(int b=10; b<15; b++){
			pixelX.push_back(1); pixelY.push_back(b);
		}
		pixelX.push_back(0); pixelY.push_back(12);
		for(int b=13; b<16; b++){
			pixelX.push_back(2); pixelY.push_back(b);
		}
		pixelX.push_back(3); pixelY.push_back(14);
		for(int a=3; a<6; a++){
			for(int b=15; b<17; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(5); pixelY.push_back(17);
		pixelX.push_back(7); pixelY.push_back(18);
		for(int a=6; a<8; a++){
			for(int b=16; b<18; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int b=21; b<24; b++){
			pixelX.push_back(0); pixelY.push_back(b);
		}
		for(int a=1; a<7; a++){
			for(int b=22; b<25; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int b=21; b<24; b++){
			pixelX.push_back(7); pixelY.push_back(b);
		}
		for(int b=17; b<24; b++){
			pixelX.push_back(8); pixelY.push_back(b);
		}
		for(int b=18; b<23; b++){
			pixelX.push_back(9); pixelY.push_back(b);
		}
    }

    else if(letter == 't'){
		for(int a=3; a<5; a++){
			for(int b=4; b<23; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=0; a<3; a++){
			for(int b=8; b<11; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=5; a<10; a++){
			for(int b=8; b<11; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(5); pixelY.push_back(21);
		pixelX.push_back(4); pixelY.push_back(23);
		for(int a=5; a<9; a++){
			for(int b=22; b<25; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int b=22; b<24; b++){
			pixelX.push_back(9); pixelY.push_back(b);
		}
    }

    else if(letter == 'u'){
		for(int a=11; a<13; a++){
			for(int b=8; b<25; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(10); pixelY.push_back(20);
		for(int a=8; a<11; a++){
			for(int b=21; b<23; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(7); pixelY.push_back(22);
		pixelX.push_back(7); pixelY.push_back(23);
		pixelX.push_back(8); pixelY.push_back(23);
		for(int a=3; a<7; a++){
			for(int b=22; b<25; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(3); pixelY.push_back(21);
		for(int a=0; a<2; a++){
			for(int b=8; b<21; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(2); pixelY.push_back(20);
		for(int a=1; a<3; a++){
			for(int b=21; b<23; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(2); pixelY.push_back(23);
    }

    else if(letter == 'v'){
		pixelX.push_back(0); pixelY.push_back(8);
		pixelX.push_back(1); pixelY.push_back(8);
		for(int a=1; a<3; a++){
			for(int b=9; b<12; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int b=12; b<15; b++){
			pixelX.push_back(2); pixelY.push_back(b);
		}
		for(int b=12; b<18; b++){
			pixelX.push_back(3); pixelY.push_back(b);
		}
		for(int b=15; b<20; b++){
			pixelX.push_back(4); pixelY.push_back(b);
		}
		for(int b=18; b<24; b++){
			pixelX.push_back(5); pixelY.push_back(b);
		}
		pixelX.push_back(6); pixelY.push_back(20);
		pixelX.push_back(6); pixelY.push_back(21);
		for(int a=6; a<9; a++){
			for(int b=22; b<25; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(8); pixelY.push_back(21);
		pixelX.push_back(14); pixelY.push_back(8);
		for(int b=8; b<12; b++){
			pixelX.push_back(13); pixelY.push_back(b);
		}
		for(int b=9; b<15; b++){
			pixelX.push_back(12); pixelY.push_back(b);
		}
		for(int b=12; b<18; b++){
			pixelX.push_back(11); pixelY.push_back(b);
		}
		for(int b=15; b<20; b++){
			pixelX.push_back(10); pixelY.push_back(b);
		}
		for(int b=18; b<24; b++){
			pixelX.push_back(9); pixelY.push_back(b);
		}
    }

    else if(letter == 'w'){
		for(int b=8; b<12; b++){
			pixelX.push_back(0); pixelY.push_back(b);
		}
		for(int b=8; b<15; b++){
			pixelX.push_back(1); pixelY.push_back(b);
		}
		for(int b=11; b<18; b++){
			pixelX.push_back(2); pixelY.push_back(b);
		}
		for(int b=14; b<21; b++){
			pixelX.push_back(3); pixelY.push_back(b);
		}
		for(int b=18; b<25; b++){
			pixelX.push_back(4); pixelY.push_back(b);
		}
		for(int a=5; a<7; a++){
			for(int b=21; b<25; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int b=19; b<25; b++){
			pixelX.push_back(7); pixelY.push_back(b);
		}
		for(int b=15; b<21; b++){
			pixelX.push_back(8); pixelY.push_back(b);
		}
		for(int b=11; b<18; b++){
			pixelX.push_back(9); pixelY.push_back(b);
		}
		for(int a=10; a<12; a++){
			for(int b=8; b<14; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int b=9; b<16; b++){
			pixelX.push_back(12); pixelY.push_back(b);
		}
		for(int b=12; b<20; b++){
			pixelX.push_back(13); pixelY.push_back(b);
		}
		for(int b=15; b<23; b++){
			pixelX.push_back(14); pixelY.push_back(b);
		}
		for(int b=19; b<25; b++){
			pixelX.push_back(15); pixelY.push_back(b);
		}
		pixelX.push_back(17); pixelY.push_back(20);
		for(int a=16; a<18; a++){
			for(int b=21; b<25; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int b=17; b<24; b++){
			pixelX.push_back(18); pixelY.push_back(b);
		}
		for(int b=13; b<20; b++){
			pixelX.push_back(19); pixelY.push_back(b);
		}
		for(int b=10; b<17; b++){
			pixelX.push_back(20); pixelY.push_back(b);
		}
		for(int b=8; b<14; b++){
			pixelX.push_back(21); pixelY.push_back(b);
		}
		for(int b=8; b<11; b++){
			pixelX.push_back(22); pixelY.push_back(b);
		}
    }

    else if(letter == 'x'){
		for(int a=0; a<4; a++){
			pixelX.push_back(a); pixelY.push_back(8);
		}
		for(int a=1; a<4; a++){
			pixelX.push_back(a); pixelY.push_back(9);
		}
		pixelX.push_back(3); pixelY.push_back(12);
		for(int a=2; a<5; a++){
			for(int b=10; b<12; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(4); pixelY.push_back(14);
		for(int a=4; a<6; a++){
			for(int b=12; b<14; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=5; a<9; a++){
			for(int b=14; b<19; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(4); pixelY.push_back(18);
		pixelX.push_back(8); pixelY.push_back(19);
		pixelX.push_back(8); pixelY.push_back(13);
		for(int a=3; a<6; a++){
			for(int b=19; b<21; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=2; a<5; a++){
			pixelX.push_back(a); pixelY.push_back(21);
		}
		for(int a=1; a<4; a++){
			for(int b=22; b<24; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=0; a<3; a++){
			pixelX.push_back(a); pixelY.push_back(24);
		}
		for(int b=17; b<22; b++){
			pixelX.push_back(9); pixelY.push_back(b);
		}
		for(int b=19; b<24; b++){
			pixelX.push_back(10); pixelY.push_back(b);
		}
		for(int b=20; b<25; b++){
			pixelX.push_back(11); pixelY.push_back(b);
		}
		for(int b=22; b<25; b++){
			pixelX.push_back(12); pixelY.push_back(b);
		}
		for(int a=13; a<15; a++){
			pixelX.push_back(a); pixelY.push_back(24);
		}
		for(int b=11; b<16; b++){
			pixelX.push_back(9); pixelY.push_back(b);
		}
		for(int b=10; b<14; b++){
			pixelX.push_back(10); pixelY.push_back(b);
		}
		for(int b=8; b<13; b++){
			pixelX.push_back(11); pixelY.push_back(b);
		}
		for(int b=8; b<11; b++){
			pixelX.push_back(12); pixelY.push_back(b);
		}
		for(int a=13; a<15; a++){
			pixelX.push_back(a); pixelY.push_back(8);
		}
    }

    else if(letter == 'y'){
		for(int a=0; a<3; a++){
			for(int b=8; b<10; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=1; a<3; a++){
			for(int b=10; b<13; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(2); pixelY.push_back(13);
		pixelX.push_back(2); pixelY.push_back(14);
		for(int b=11; b<18; b++){
			pixelX.push_back(3); pixelY.push_back(b);
		}
		for(int b=14; b<21; b++){
			pixelX.push_back(4); pixelY.push_back(b);
		}
		for(int b=17; b<23; b++){
			pixelX.push_back(5); pixelY.push_back(b);
		}
		for(int b=19; b<31; b++){
			pixelX.push_back(6); pixelY.push_back(b);
		}
		pixelX.push_back(4); pixelY.push_back(30);
		for(int b=27; b<31; b++){
			pixelX.push_back(5); pixelY.push_back(b);
		}
		for(int b=21; b<29; b++){
			pixelX.push_back(7); pixelY.push_back(b);
		}
		for(int b=20; b<26; b++){
			pixelX.push_back(8); pixelY.push_back(b);
		}
		for(int b=17; b<23; b++){
			pixelX.push_back(9); pixelY.push_back(b);
		}
		for(int b=14; b<21; b++){
			pixelX.push_back(10); pixelY.push_back(b);
		}
		for(int b=11; b<18; b++){
			pixelX.push_back(11); pixelY.push_back(b);
		}
		for(int b=8; b<15; b++){
			pixelX.push_back(12); pixelY.push_back(b);
		}
		for(int b=8; b<12; b++){
			pixelX.push_back(13); pixelY.push_back(b);
		}
		pixelX.push_back(14); pixelY.push_back(8);
    }

    else if(letter == 'z'){
		for(int a=0; a<10; a++){
			for(int b=8; b<11; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(9); pixelY.push_back(11);
		for(int b=11; b<14; b++){
			pixelX.push_back(8); pixelY.push_back(b);
		}
		for(int b=12; b<15; b++){
			pixelX.push_back(7); pixelY.push_back(b);
		}
		for(int b=13; b<17; b++){
			pixelX.push_back(6); pixelY.push_back(b);
		}
		for(int b=14; b<18; b++){
			pixelX.push_back(5); pixelY.push_back(b);
		}
		for(int b=16; b<19; b++){
			pixelX.push_back(4); pixelY.push_back(b);
		}
		for(int b=17; b<21; b++){
			pixelX.push_back(3); pixelY.push_back(b);
		}
		for(int b=19; b<22; b++){
			pixelX.push_back(2); pixelY.push_back(b);
		}
		for(int b=20; b<22; b++){
			pixelX.push_back(1); pixelY.push_back(b);
		}
		pixelX.push_back(0); pixelY.push_back(21);
		for(int a=0; a<11; a++){
			for(int b=22; b<25; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
    }

    else if(letter == 'A'){

    }

    else if(letter == 'B'){

    }

    else if(letter == 'C'){

    }

    else if(letter == 'D'){

    }

    else if(letter == 'E'){

    }

    else if(letter == 'F'){

    }

    else if(letter == 'G'){

    }

    else if(letter == 'H'){

    }

    else if(letter == 'I'){

    }

    else if(letter == 'J'){

    }

    else if(letter == 'K'){

    }

    else if(letter == 'L'){

    }

    else if(letter == 'M'){

    }

    else if(letter == 'N'){

    }

    else if(letter == 'O'){

    }

    else if(letter == 'P'){

    }

    else if(letter == 'Q'){

    }

    else if(letter == 'R'){

    }

    else if(letter == 'S'){

    }

    else if(letter == 'T'){

    }

    else if(letter == 'U'){

    }

    else if(letter == 'V'){

    }

    else if(letter == 'W'){

    }

    else if(letter == 'X'){

    }

    else if(letter == 'Y'){

    }

    else if(letter == 'Z'){

    }

    else if(letter == '0'){
		for(int a=5; a<11; a++){
			for(int b=0; b<3; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(10); pixelY.push_back(3);
		for(int b=1; b<5; b++){
			pixelX.push_back(11); pixelY.push_back(b);
		}
		for(int b=2; b<7; b++){
			pixelX.push_back(12); pixelY.push_back(b);
		}
		for(int b=3; b<20; b++){
			pixelX.push_back(13); pixelY.push_back(b);
		}
		for(int b=5; b<18; b++){
			pixelX.push_back(14); pixelY.push_back(b);
		}
		for(int b=16; b<21; b++){
			pixelX.push_back(12); pixelY.push_back(b);
		}
		for(int b=18; b<22; b++){
			pixelX.push_back(11); pixelY.push_back(b);
		}
		for(int b=19; b<22; b++){
			pixelX.push_back(10); pixelY.push_back(b);
		}
		for(int a=5; a<10; a++){
			for(int b=20; b<23; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=0; a<2; a++){
			for(int b=5; b<18; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int b=3; b<5; b++){
			pixelX.push_back(1); pixelY.push_back(b);
		}
		for(int b=2; b<7; b++){
			pixelX.push_back(2); pixelY.push_back(b);
		}
		for(int b=1; b<5; b++){
			pixelX.push_back(3); pixelY.push_back(b);
		}
		for(int b=1; b<4; b++){
			pixelX.push_back(4); pixelY.push_back(b);
		}
		for(int b=18; b<20; b++){
			pixelX.push_back(1); pixelY.push_back(b);
		}
		for(int b=16; b<21; b++){
			pixelX.push_back(2); pixelY.push_back(b);
		}
		for(int b=18; b<22; b++){
			pixelX.push_back(3); pixelY.push_back(b);
		}
		for(int b=19; b<22; b++){
			pixelX.push_back(4); pixelY.push_back(b);
		}
    }

    else if(letter == '1'){
		for(int b=4; b<6; b++){
			pixelX.push_back(0); pixelY.push_back(b);
		}
		for(int b=3; b<5; b++){
			pixelX.push_back(1); pixelY.push_back(b);
		}
		for(int b=2; b<4; b++){
			for(int a=2; a<4; a++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int b=1; b<3; b++){
			pixelX.push_back(4); pixelY.push_back(b);
		}
		for(int a=5; a<8; a++){
			for(int b=0; b<20; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=0; a<12; a++){
			for(int b=20; b<23; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
    }

    else if(letter == '2'){
		for(int b=2; b<5; b++){
			pixelX.push_back(0); pixelY.push_back(b);
		}
		for(int a=1; a<3; a++){
			for(int b=1; b<4; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=3; a<9; a++){
			for(int b=0; b<3; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(8); pixelY.push_back(3);
		for(int b=1; b<5; b++){
			pixelX.push_back(9); pixelY.push_back(b);
		}
		for(int b=2; b<12; b++){
			pixelX.push_back(10); pixelY.push_back(b);
		}
		for(int b=3; b<10; b++){
			pixelX.push_back(11); pixelY.push_back(b);
		}
		for(int b=8; b<13; b++){
			pixelX.push_back(9); pixelY.push_back(b);
		}
		for(int b=10; b<14; b++){
			pixelX.push_back(8); pixelY.push_back(b);
		}
		for(int b=12; b<15; b++){
			pixelX.push_back(7); pixelY.push_back(b);
		}
		for(int b=13; b<16; b++){
			pixelX.push_back(6); pixelY.push_back(b);
		}
		for(int b=14; b<17; b++){
			pixelX.push_back(5); pixelY.push_back(b);
		}
		for(int b=15; b<18; b++){
			pixelX.push_back(4); pixelY.push_back(b);
		}
		for(int b=16; b<19; b++){
			pixelX.push_back(3); pixelY.push_back(b);
		}
		for(int b=17; b<20; b++){
			pixelX.push_back(2); pixelY.push_back(b);
		}
		pixelX.push_back(1); pixelY.push_back(18);
		pixelX.push_back(1); pixelY.push_back(19);
		pixelX.push_back(0); pixelY.push_back(19);
		for(int a=0; a<13; a++){
			for(int b=20; b<23; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
    }

    else if(letter == '3'){
		for(int b=2; b<5; b++){
			pixelX.push_back(0); pixelY.push_back(b);
		}
		for(int a=1; a<3; a++){
			for(int b=1; b<4; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=3; a<9; a++){
			for(int b=0; b<3; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(8); pixelY.push_back(3);
		for(int b=1; b<4; b++){
			pixelX.push_back(9); pixelY.push_back(b);
		}
		pixelX.push_back(10); pixelY.push_back(1);
		for(int a=10; a<12; a++){
			for(int b=2; b<8; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(9); pixelY.push_back(7);
		pixelX.push_back(9); pixelY.push_back(9);
		for(int a=8; a<11; a++){
			pixelX.push_back(a); pixelY.push_back(8);
		}
		for(int a=2; a<9; a++){
			for(int b=9; b<12; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(8); pixelY.push_back(12);
		pixelX.push_back(9); pixelY.push_back(11);
		pixelX.push_back(9); pixelY.push_back(12);
		for(int b= 11; b<14; b++){
			pixelX.push_back(10); pixelY.push_back(b);
		}
		for(int b=12; b<21; b++){
			pixelX.push_back(11); pixelY.push_back(b);
		}
		for(int b=13; b<20; b++){
			pixelX.push_back(12); pixelY.push_back(b);
		}
		for(int b=18; b<22; b++){
			pixelX.push_back(10); pixelY.push_back(b);
		}
		for(int b=19; b<22; b++){
			pixelX.push_back(9); pixelY.push_back(b);
		}
		for(int a=2; a<9; a++){
			for(int b=20; b<23; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=0; a<2; a++){
			for(int b=19; b<22; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
    }

    else if(letter == '4'){
		for(int a=8; a<12; a++){
			for(int b=0; b<3; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=10; a<12; a++){
			for(int b=3; b<23; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=12; a<15; a++){
			for(int b=15; b<18; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=0; a<10; a++){
			for(int b=15; b<18; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(8); pixelY.push_back(3);
		for(int b=2; b<6; b++){
			pixelX.push_back(7); pixelY.push_back(b);
		}
		pixelX.push_back(6); pixelY.push_back(4);
		for(int a=5; a<7; a++){
			for(int b=5; b<7; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int b=7; b<9; b++){
			pixelX.push_back(5); pixelY.push_back(b);
		}
		for(int b=7; b<10; b++){
			pixelX.push_back(4); pixelY.push_back(b);
		}
		for(int b=8; b<12; b++){
			pixelX.push_back(3); pixelY.push_back(b);
		}
		for(int b=10; b<14; b++){
			pixelX.push_back(2); pixelY.push_back(b);
		}
		for(int b=11; b<15; b++){
			pixelX.push_back(1); pixelY.push_back(b);
		}
		for(int b=13; b<15; b++){
			pixelX.push_back(0); pixelY.push_back(b);
		}
    }

    else if(letter == '5'){
		for(int a= 1; a<13; a++){
			for(int b=0; b<3; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=1; a<4; a++){
			for(int b=3; b<11; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=4; a<10; a++){
			pixelX.push_back(a); pixelY.push_back(8);
		}
		for(int a=4; a<12; a++){
			for(int b=9; b<11; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(12); pixelY.push_back(10);
		for(int a=9; a<14; a++){
			pixelX.push_back(a); pixelY.push_back(11);
		}
		pixelX.push_back(11); pixelY.push_back(12);
		for(int a=12; a<14; a++){
			for(int b=12; b<19; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(12); pixelY.push_back(19);
		for(int b=18; b<21; b++){
			pixelX.push_back(11); pixelY.push_back(b);
		}
		for(int a=9; a<11; a++){
			for(int b=19; b<22; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=3; a<9; a++){
			for(int b=20; b<23; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(2); pixelY.push_back(20);
		pixelX.push_back(2); pixelY.push_back(21);
		for(int a=0; a<2; a++){
			for(int b=19; b<22; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
    }

    else if(letter == '6'){
		for(int b=1; b<4; b++){
			pixelX.push_back(12); pixelY.push_back(b);
		}
		for(int a=6; a<12; a++){
			for(int b=0; b<3; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=4; a<6; a++){
			for(int b=1; b<4; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=2; a<4; a++){
			for(int b=2; b<5; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int b=5; b<7; b++){
			pixelX.push_back(2); pixelY.push_back(b);
		}
		for(int b=4; b<21; b++){
			pixelX.push_back(1); pixelY.push_back(b);
		}
		for(int b=6; b<19; b++){
			pixelX.push_back(0); pixelY.push_back(b);
		}
		for(int b=17; b<22; b++){
			pixelX.push_back(2); pixelY.push_back(b);
		}
		for(int b=19; b<22; b++){
			pixelX.push_back(3); pixelY.push_back(b);
		}
		for(int a=4; a<10; a++){
			for(int b=20; b<23; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(9); pixelY.push_back(19);
		for(int a=2; a<4; a++){
			for(int b=10; b<13; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=5; a<11; a++){
			for(int b=9; b<12; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(4); pixelY.push_back(10);
		pixelX.push_back(4); pixelY.push_back(11);
		pixelX.push_back(10); pixelY.push_back(12);
		for(int b=10; b<14; b++){
			pixelX.push_back(11); pixelY.push_back(b);
		}
		for(int b=10; b<21; b++){
			pixelX.push_back(12); pixelY.push_back(b);
		}
		for(int b=12; b<19; b++){
			pixelX.push_back(13); pixelY.push_back(b);
		}
		for(int b=17; b<21; b++){
			pixelX.push_back(11); pixelY.push_back(b);
		}
		for(int b=19; b<22; b++){
			pixelX.push_back(10); pixelY.push_back(b);
		}
    }

    else if(letter == '7'){
		for(int a=0; a<15; a++){
			for(int b=0; b<3; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(14); pixelY.push_back(3);
		for(int b=3; b<6; b++){
			pixelX.push_back(13); pixelY.push_back(b);
		}
		for(int b=3; b<8; b++){
			pixelX.push_back(12); pixelY.push_back(b);
		}
		for(int b=5; b<10; b++){
			pixelX.push_back(11); pixelY.push_back(b);
		}
		for(int b=7; b<13; b++){
			pixelX.push_back(10); pixelY.push_back(b);
		}
		for(int b=9; b<15; b++){
			pixelX.push_back(9); pixelY.push_back(b);
		}
		for(int b=11; b<17; b++){
			pixelX.push_back(8); pixelY.push_back(b);
		}
		for(int b=13; b<19; b++){
			pixelX.push_back(7); pixelY.push_back(b);
		}
		for(int b=15; b<22; b++){
			pixelX.push_back(6); pixelY.push_back(b);
		}
		for(int b=17; b<23; b++){
			pixelX.push_back(5); pixelY.push_back(b);
		}
		for(int b=19; b<23; b++){
			pixelX.push_back(4); pixelY.push_back(b);
		}
		for(int b=21; b<23; b++){
			pixelX.push_back(3); pixelY.push_back(b);
		}
    }

    else if(letter == '8'){
		for(int a=4; a<9; a++){
			for(int b=0; b<3; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=4; a<9; a++){
			for(int b=10; b<13; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=3; a<10; a++){
			for(int b=20; b<23; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=11; a<13; a++){
			for(int b=3; b<8; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=0; a<2; a++){
			for(int b=3; b<8; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=12; a<14; a++){
			for(int b=14; b<20; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=2; a<4; a++){
			for(int b=1; b<4; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=9; a<11; a++){
			for(int b=1; b<4; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=10; a<12; a++){
			for(int b=19; b<22; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=9; a<12; a++){
			for(int b=12; b<14; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=9; a<11; a++){
			for(int b=8; b<10; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=2; a<4; a++){
			for(int b=8; b<10; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(1); pixelY.push_back(2);
		pixelX.push_back(2); pixelY.push_back(4);
		pixelX.push_back(11); pixelY.push_back(2);
		pixelX.push_back(10); pixelY.push_back(4);
		pixelX.push_back(1); pixelY.push_back(8);
		pixelX.push_back(2); pixelY.push_back(7);
		pixelX.push_back(10); pixelY.push_back(7);
		pixelX.push_back(11); pixelY.push_back(8);
		pixelX.push_back(4); pixelY.push_back(9);
		pixelX.push_back(3); pixelY.push_back(10);
		pixelX.push_back(8); pixelY.push_back(9);
		pixelX.push_back(9); pixelY.push_back(11);
		pixelX.push_back(12); pixelY.push_back(13);
		pixelX.push_back(11); pixelY.push_back(18);
		pixelX.push_back(12); pixelY.push_back(20);
		pixelX.push_back(10); pixelY.push_back(14);
		pixelX.push_back(11); pixelY.push_back(14);
		pixelX.push_back(11); pixelY.push_back(15);
		pixelX.push_back(3); pixelY.push_back(12);
		pixelX.push_back(3); pixelY.push_back(13);
		for(int b=12; b<15; b++){
			pixelX.push_back(2); pixelY.push_back(b);
		}
		for(int b=13; b<16; b++){
			pixelX.push_back(1); pixelY.push_back(b);
		}
		for(int b=14; b<21; b++){
			pixelX.push_back(0); pixelY.push_back(b);
		}
		pixelX.push_back(1); pixelY.push_back(18);
		for(int a=1; a<3; a++){
			for(int b=19; b<22; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
    }

    else if(letter == '9'){
		for(int a=12; a<15; a++){
			for(int b=5; b<16; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		pixelX.push_back(11); pixelY.push_back(5);
		for(int a=11; a<14; a++){
			pixelX.push_back(a); pixelY.push_back(4);
		}
		for(int a=10; a<14; a++){
			pixelX.push_back(a); pixelY.push_back(3);
		}
		pixelX.push_back(12); pixelY.push_back(2);
		for(int a=3; a<12; a++){
			for(int b=1; b<3; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=5; a<10; a++){
			pixelX.push_back(a); pixelY.push_back(0);
		}
		pixelX.push_back(3); pixelY.push_back(3);
		pixelX.push_back(3); pixelY.push_back(4);
		pixelX.push_back(4); pixelY.push_back(3);
		for(int b=2; b<7; b++){
			pixelX.push_back(2); pixelY.push_back(b);
		}
		for(int b=4; b<11; b++){
			pixelX.push_back(0); pixelY.push_back(b);
		}
		for(int b=3; b<12; b++){
			pixelX.push_back(1); pixelY.push_back(b);
		}
		for(int b=8; b<10; b++){
			pixelX.push_back(2); pixelY.push_back(b);
		}
		for(int a=2; a<4; a++){
			for(int b=10; b<13; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=4; a<10; a++){
			for(int b=11; b<14; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=10; a<12; a++){
			for(int b=10; b<13; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a =11; a<14; a++){
			for(int b=16; b<18; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=0; a<2; a++){
			for(int b=19; b<22; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=2; a<8; a++){
			for(int b=20; b<23; b++){
				pixelX.push_back(a); pixelY.push_back(b);
			}
		}
		for(int a=8; a<10; a++){
			pixelX.push_back(a); pixelY.push_back(21);
		}
		for(int a=8; a<12; a++){
			pixelX.push_back(a); pixelY.push_back(20);
		}
		for(int a=8; a<13; a++){
			pixelX.push_back(a); pixelY.push_back(19);
		}
		for(int a=10; a<13; a++){
			pixelX.push_back(a); pixelY.push_back(18);
		}
    }

    else if(letter == '.'){
		for(int a=0; a<2; a++){
			pixelX.push_back(a); pixelY.push_back(23);
			pixelX.push_back(a); pixelY.push_back(24);
		}
    }

	for(int i = 0; i<pixelX.size(); i++){
		bmp->SetPixel(posX + pixelX[i], posY + pixelY[i],black);
	}
	pixelX.clear();
	pixelY.clear();
	return bmp;
}

int BMPwriter::getWidth(char arc){
	if(arc=='a'){return 12;}
	if(arc=='b'){return 13;}
	if(arc=='c'){return 11;}
	if(arc=='d'){return 13;}
	if(arc=='e'){return 13;}
	if(arc=='f'){return 9;}
	if(arc=='g'){return 13;}
	if(arc=='h'){return 11;}
	if(arc=='i'){return 1;}
	if(arc=='j'){return 5;}
	if(arc=='k'){return 12;}
	if(arc=='l'){return 1;}
	if(arc=='m'){return 23;}
	if(arc=='n'){return 12;}
	if(arc=='o'){return 15;}
	if(arc=='p'){return 13;}
	if(arc=='q'){return 13;}
	if(arc=='r'){return 8;}
	if(arc=='s'){return 9;}
	if(arc=='t'){return 9;}
	if(arc=='u'){return 12;}
	if(arc=='v'){return 14;}
	if(arc=='w'){return 22;}
	if(arc=='x'){return 14;}
	if(arc=='y'){return 14;}
	if(arc=='z'){return 10;}
	if(arc=='0'){return 14;}
	if(arc=='1'){return 11;}
	if(arc=='2'){return 12;}
	if(arc=='3'){return 12;}
	if(arc=='4'){return 14;}
	if(arc=='5'){return 13;}
	if(arc=='6'){return 13;}
	if(arc=='7'){return 14;}
	if(arc=='8'){return 13;}
	if(arc=='9'){return 14;}
	if(arc=='.'){return 3;}
}
