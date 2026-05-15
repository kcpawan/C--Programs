#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main() {

	int gdriver = DETECT, gmode, errorcode;
	
	initgraph(&gdriver, &gmode, “”);
	
	errorcode = graphresult();

	if (errorcode != grOk) {
	
		printf(“Graphics error: %s\n”, grapherrormsg(errorcode));
		
		getch();
		
		exit(1); /* return with error code */
	
	}

	setcolor(GREEN);
	
	outtext(“Hello world”);
	
	setcolor(BLUE);
	
	outtextxy(200,200,”Hello World”);
	
	getch();
	
	closegraph();
	
	return 0;

}