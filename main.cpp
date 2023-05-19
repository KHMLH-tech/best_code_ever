#include <iostream>

using namespace std;

int main() { 
    int i, k = 0, count_Of_Repeat = 1;
    int a[15] = { 1, 2, 3, 4, 23, 2342, 345, 1231245, 346465, 8, 1, 2, 3, 4 ,5 }; 
    for (i = 0; i < 15; i++) 
    { 
      if(a[i] == a[i+1]){
        k++;
      }else{
        if(count_Of_Repeat < k){
            if(i == 14){
              count_Of_Repeat = k;
            }else{
              count_Of_Repeat = k+1;    
            }
        }
        k=1;
      }
    } 
    printf("\ncount of longest sequenses = %d\n", count_Of_Repeat); 
    return 0;
    }
