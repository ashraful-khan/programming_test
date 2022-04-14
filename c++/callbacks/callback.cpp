#include <stdio.h>

class callback
{
private:
    /* data */
public:
    void BubbleSort(int A[], int n,int (*compare)(int,int));
    //int compare(int a, int b);
    void sum(int a, int b);


//    callback(/* args */);
//    ~callback();
};

int compare(int a, int b){
    if (a<b) return -1;
    return 1;
}

void callback::sum(int a, int b){
    int sum;
    sum = a + b;
    printf("%d \n", sum);
}
void callback::BubbleSort(int A[], int n,int (*ptr)(int , int)){
    int i,j,temp;
    sum(20,102);
    for (i=0; i<n;i++){
        for (j=0; j < i; j++)
        {
            if(compare(A[j], A[j+1])> 0) {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
        
    }

}

int main(){
    int i, A[] = {2,4,26,12,98,23,112,1,0,-8,-5, 9};
    callback obj;
    int (*ptr)(int , int) = &compare;
    obj.BubbleSort(A, 12, ptr);
    for (i=0; i<12;i++) printf("%d ", A[i]);
    printf("\n");
}