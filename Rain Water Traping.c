#include <stdio.h>

void main(){
    int array[] = {4, 2, 0, 3, 2, 5};
    int i, j, lb, rb, wl, tw, total, len = sizeof(array)/sizeof(int);

    if(len <= 2){
        printf("Trapped Water: 0\n");
    }
    else{
        total = 0;
        for(i = 1; i < len - 1; i++){
            
            lb = array[i];
            for(j = 0; j < i; j++){
                if(array[j] > lb){
                    lb = array[j];
                }
            }

            rb = array[i];
            for(j = i + 1; j < len; j++){
                if(array[j] > rb){
                    rb = array[j];
                }
            }

            if(rb < lb){
                wl = rb;
            } else{
                wl = lb;
            }
            tw = wl - array[i];
            total += tw;
        }
    }
    printf("Trapped Water: %d\n", total);
}
