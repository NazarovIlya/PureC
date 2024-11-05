#include <stdio.h>

int main(void){
    int x = 0, y = 0, dx = 0, dy = 0;
    int *px = &x, *py = &y;
    
    scanf("%d %d %d %d", px, py, &dx, &dy);
    move(px, py, dx, dy);
    printf("%d %d", *px, *py);
        
    return 0;
}

void move(int *px, int *py, int dx, int dy){
    *px += dx;
    *py += dy;    
}
