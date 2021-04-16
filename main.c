#include <stdio.h>
extern int count;
int main()
{   int var;
    var = increment();
    var = increment();
    var = increment();
    count = count + 3;
    var = count + var;
    printf("%d",var);
    return 0;
}
