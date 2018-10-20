//
//  privateCalc.c
//  privateCalc
//
//  Created by James Carter on 11/10/2018.
//  Copyright © 2018 James Carter. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    system("clear");
    
    int mod = 0;
    int e = 0;
    int temp = 0;
    int num = 0;
    int count = 0;
    
    printf("Welcome to privateCalc! Created by @jamescarter2001\n");
    
    
    printf("\nEnter value for Phi(N): ");
    scanf("%d", &mod);
    
    printf("\nEnter value for e: ");
    scanf("%d", &e);
    
    printf("\n\nThe following numbers can be used as the decryption key (d): \n\n");
    
    for (int i = 1; i < 500; i++) {
        
        temp = num % mod;
        
        if (temp == 1 && ((num / e) != e)) {
            
            printf("-> %d\n", (num / e));
             num = e * i;
            count++;
            
        } else {
            
            num = e * i;
            
        }
        
    }
    
    if (count == 0) {
        
        printf("No possible decryption keys could be calulated. Please double check your previous calculations.\n");
        
    }
    
}

