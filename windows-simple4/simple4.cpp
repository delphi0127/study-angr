// simple4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <string.h>

char buf[10] = "1111";
int main(int argc, char ** argv)
{
  if (argc < 3)
  {
    printf("./my_strcpy password your-comment!\n");
    return 0;     
  }
  else
  {
    if(argv[1][0] == 'a')
    {
    strcpy( buf, argv[1]);
        printf("your-comment:%s", argv[2]);
        return 1;
    }
    else
    {
    printf("didn't hit strcpy()");
        return 2;
    }
  }

}


