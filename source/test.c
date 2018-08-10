#include <stdio.h>
#include "test.h"
#include "Foo.h"


int main()
{
    printf("%s", GetMsg());
    char* strRet = Foo();
    printf("%s", strRet);
    free(strRet);
    return 0;
}
