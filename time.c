#include <stdio.h>
#include <time.h>
//

int main(){

    time_t time(time_t *t);
    time_t segs=time(NULL);
    printf("%ld\n", segs);
    printf("%ld\n", ((segs/3600)/24)/365);
}

