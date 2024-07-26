 #include <stdio.h>

int main(void)
{
    int v = 0;
    float vkms = 0.0;
    
    scanf("%d", &v);

    vkms = (float)(v * 1000) / (float)(60 * 60);
    
    printf("%f", vkms);
    
    return 0;
}