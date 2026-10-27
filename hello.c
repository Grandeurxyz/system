#include <stdio.h>
#include <stdlib.h>

void takeANumber(int a){
    printf("The number you chose is %d", a);
}

void swapNumbers(int *pa, int *pb){
    int z = *pa;
    *pa = *pb;
    *pb = z;
     
}

int arrayOfNumbers[6]{0,1,3,4,6,7}


enum Car_Condition {
    good,
    bad,
    mid
};

void startCar(enum Car_Condition c){
    if (c == good){
        puts("Car has started sucessfully");
    }
    else{
        puts("Car is either mid or bad");
    }

}

struct Example{
    char a;
    int b;
    int c;
};


void main(void){
    puts("Hello world\n");
    takeANumber(23);
    int a = 23;
    int b = 40;

    enum Car_Condition c = mid;
    
    startCar(c);
    
    printf("a was %d and b was %d \n", a, b);
    swapNumbers(&a , &b);
    printf("Now a is %d and b is %d \n", a , b);

    printf("The size of the struct is %zu", sizeof(struct Example));
}



