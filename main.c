#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	printf("heello world");
    char xy[10]={0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A};
     
     printf("Vi tri tren Ram cua phan tu 1(xy) :%d\n",xy);
     printf("Vi tri tren Ram cua phan tu 1(&xy):%d\n",&xy);
     
	return 0;
}