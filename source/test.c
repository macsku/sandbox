#include <stdio.h>
#include "test.h"
#include "Foo.h"


int main()
{
    printf("%s", GetMsg());
    const char* strRet = Foo();
    printf("%s\n", strRet);
    free((char*)strRet);
    return 0;
}
