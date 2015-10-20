//
//  main.c
//  ZOJ1045
//
//  Created by frank on 15-10-20.
//  Copyright (c) 2015年 frank. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float n;
    while(scanf("%f",&n) &&n !=0.00){
        float sum = 0.00;
        int i;
        for(i=2;sum<=n;i++){
            sum+=1.0/i;
        }
        printf("%d card(s)\n",i-2);
    }
    return 0;
}
