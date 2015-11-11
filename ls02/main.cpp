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
    int *p,*q;
    p = (int *)malloc(16*4);
    q = (int *)malloc(16*4);
    if(p == 0)
        exit(0);
    if(p == 0)
        exit(1);

    for(int i=0;i<16;i++)
        p[i]=i*10;
    for(int i=0;i<16;i++)
        q[i]=i*100;
    
    for(int j=0;j<16;j++)
        printf("p[%d]=%d \n",p[j]);
    for(int j=0;j<16;j++)
        printf("q[%d]=%d \n",q[j]);
    
    printf("%x %x \n",p,q);
    printf("%x \n",p[1]);
    
    free(p);
    free(q);
    return 0;
}
