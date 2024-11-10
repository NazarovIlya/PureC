#include<stdio.h>
void mirror_seg(int *px1, int *py1, int *px2, int *py2);

int main(void){
    
    int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
    int *px1 = &x1, *px2 = &x2, *py1 = &y1, *py2 = &y2;
    
    scanf("%d %d %d %d", px1, py1, px2, py2);
    mirror_seg(px1, py1, px2, py2);
    printf("%d %d %d %d", *px1, *py1, *px2, *py2);
    
    return 0;   
}

void mirror_seg(int *px1, int *py1, int *px2, int *py2){
    *py1 *= -1;
    *py2 *= -1;
}