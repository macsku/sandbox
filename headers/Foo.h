#ifndef FOO_H
#define FOO_H

#include <stdlib.h>

const char* Foo()
{
    char* buf = (char*)calloc(64, sizeof(char));
    int ret = 5;
    sprintf(buf, "The return from Foo is %d", ret);
    return buf;
}

#endif
