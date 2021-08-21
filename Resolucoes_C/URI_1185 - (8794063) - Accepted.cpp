#include <stdio.h>

int main() {
    int i, j;
    double z, s=0.0;
    char F;

    scanf("%c", &F);

    for(i=0; i<12; ++i) {
        for(j=0; j<12; ++j) {
            scanf("%lf", &z);

            if(j < (11-i)) {
                s += z;
            }
        }
    }

    if(F == 'S')
        printf("%.1lf\n", s);
    else if(F == 'M')
        printf("%.1lf\n", s/66.0);

    return 0;
}
