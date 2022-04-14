#include <iostream>

int* processeddata(int a = 15, int payload=90){
    int b = 5;
    int c = payload;

    static int d[3];
    d[0] = a;
    d[1] = b;
    d[2] = c;

    return &d[0];
}

int main(){
     int* sum = processeddata();
     int array[] = {*(sum), *(sum+1), *(sum+2),*(sum+3)};

     for (int i=0; i<3; i++){
         std::cout << array[i] << std::endl;
     }
    std::cout << *(sum) << " " << *(sum+1) << " " << *(sum+2) <<  std::endl;
    std::cout << &sum << std::endl;
}
