#ifndef FOO_H
#define FOO_H

#include <stdlib.h>

const char* Foo()
{
    char* buf = (char*)calloc(64, sizeof(char));
    int ret = 20;
    sprintf(buf, "Foo is %d", ret);
    return buf;
}

#endif
