#include "Test.h"

int main(void)
{
    TEST_LOG_SIZED("One",3);
    TEST_LOG_SIZED("Two",3);
    for(;;)
        ;
    TEST_LOG_SIZED("Three",5);
    return 0;
}
