#include "libcbindgen.hpp"

#include <iostream>
#include <stdlib.h>
#include <unistd.h>
using namespace std;
int main()
{
    printf("-- cbindgen test --\n");
    printf("OptionU16::Tag::None signed : %d \n", OptionU16::Tag::None);
    printf("OptionU16::Tag::Some signed : %d \n", OptionU16::Tag::Some);
    printf("------------------\n");
    OptionU16 some_10 = test_get_some_10();
    printf("some_10.some._0 unsigned: %u \n",some_10.some._0);
    printf("some_10.some._0 signed: %d\n",some_10.some._0);
    printf("some_10.tag signed: %d\n",some_10.tag);
    printf("some_10.tag unsigned: %u\n",some_10.tag);
    printf("------------------\n");
    OptionU16 nothing = test_get_none();
    printf("nothing.some._0 unsigned: %u \n",nothing.some._0);
    printf("nothing.some._0 signed: %d\n",nothing.some._0);
    printf("nothing.tag signed: %d\n",nothing.tag);
    printf("nothing.tag unsigned: %u\n",nothing.tag);
}