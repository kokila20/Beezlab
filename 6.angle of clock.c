#include <stdio.h>
int findAngle(int hour, int min){
	int h = (hour * 360) / 12 + (min * 360) / (12 * 60);
	int m = (min * 360) / (60);
	int angle =abs(h - m);
	if (angle > 180) {
		angle=360-angle;
	}
    return angle;
}
int main(){
    int hour,min;
    scanf("%d:%d",&hour,&min);
    printf("%d degree",findAngle(hour,min));
}