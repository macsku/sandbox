#ifndef FOO_H
#define FOO_H

#include <stdlib.h>
#include <string.h>

char* Foo()
{
    char* buf = (char*)malloc(64 * sizeof(char));
    memset(buf, 0, 64);
    int ret = 20;
    sprintf(buf, "Foo is %d", ret);
    return buf;
}

#endif
