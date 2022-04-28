#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
//bash gx.sh gxx.c
void screens(int x ,int y,int colors) ;
void box(int x ,int y,int w ,int h,int colors);
void scroff();
int mains(){
	int w=300;
	int h=200;
	int x=0;
	int y=0;
	screens(300,200,8);
	box(0,0,300,200,15);
	sleep(10);
	scroff();
}
