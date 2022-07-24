#include <stdio.h>

int main()
{
    int M, D, S;
    scanf("%d %d", &M, &D);
    S = (M * 2 + D) % 3;
    printf("%s\n", (S == 0) ? "普通" : (S == 1) ? "吉" : "大吉");
    
    return 0;
}
