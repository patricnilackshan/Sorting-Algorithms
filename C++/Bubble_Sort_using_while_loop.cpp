/* Bubble Sort - using for loop
** Worst Case Time Complexity - O(n^2)
** Stable (Order of duplicate entries do not change)
*/

#include <iostream>
using namespace std;

int main(){
    int num[] = {1,6,2,4,3}; //Sample unsorted array
    int size=sizeof(num)/sizeof(num[0]); //Get size of the array
    
    bool swapped=false;
    do{
        swapped=false;
        for (int i=1;i<size;i++){
            if (num[i-1]>num[i]){
                int temp=num[i];
                num[i]=num[i-1];
                num[i-1]=temp;
                swapped=true;
            };
        }
        size--;
    }
    while (swapped);

    //Print the sorted array
    for (int k:num){cout<<k<<" ";}
}