#include <iostream>
#include <stdint.h>
#include <bits/stdc++.h>


int getNeg(int base ,uint16_t x){ //x = 9 , base = 16 that is sum of all bits=1 plus 1
    int neg = x - base;
    return neg;
}
bool isNeg(int base, uint16_t x){ // base is value in decimal if only leftmost bit is one
    if(x >= base)
        return true;
    else return false;
}



int main(){

    std::cout << isNeg(8,9);


}