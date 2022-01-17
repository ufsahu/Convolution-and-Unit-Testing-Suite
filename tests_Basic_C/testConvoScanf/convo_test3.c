#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    uint32_t  m[4][4];
    uint32_t  imp[2][2];
    uint32_t  i, j, a, b;

    printf("Enter 4x4 Input Matrix Elements: ");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("\n[%d][%d] =", i, j);
            scanf("%d",&m[i][j]);
        } 
    }

    printf("\n Input Matrix Elements are: \n\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    printf("Enter 2x2 Impulse Matrix Elements: ");
    for(a = 0; a < 2; a++){
        for(b = 0; b < 2; b++){
            printf("\n[%d][%d] =", a, b);
            scanf("%d",&m[a][b]);
        }
    }

    printf("\n Impulse Matrix Elements are: \n\n");
    for(a = 0; a < 2; a++){
        for(b = 0; b < 2; b++){
            printf("%d ",m[a][b]);
        }
        printf("\n");
    }
    return 0;
}

