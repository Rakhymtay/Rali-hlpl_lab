#include "std_lib_facilities.h"

void swap_v(int a ,int b){ //will compile but will not swap the values of the given arguments because the copies of the numbers are passed and not the original values. 

int temp;
temp = a;
a = b;
b = temp;
}

void swap_cr(const int& a, const int& b){ // will not compile because trying to change the constant reference which cannot be cahnged because of the constant
int temp;
temp = a;
a = b;
b = temp;

}

void swap_r(int &a, int &b){ //will compile and succesufuly swap the values because it takes the refernece to the original numbers.
int temp;
temp = a;
a = b;
b = temp;
}
int main(){

int x = 7;

int y = 9;

swap_r(x,y);

swap_v(x,y);

int cx = 7;

int cy = 9;

swap_v(cx,cy);

swap_cr(cx,cy);

double dx = 7.7;

double dy = 9.9;

swap_v(dx,dy);

swap_cr(dx,dy);

return 0;
}

