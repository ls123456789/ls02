//
//  main.cpp
//  ls02
//
//  Created by 梁爽 on 15/11/11.
//  Copyright (c) 2015年 梁爽. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int *a;
    a = (int *)malloc(4);
    if(a == 0)
        exit(0);
    *a = 100;
    printf("a=%x *a=%x\n",a,*a);
    return 0;
}
