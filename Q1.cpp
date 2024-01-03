sort 0 1 2
solution


#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   // We can solve this using dutch national flag algorithim
   int low=0;
   int mid=0;
   int high=n-1;
   while(mid<=high){
     switch (arr[mid]) {
     case 0:
       swap(arr[low++], arr[mid++]);
       break;
     case 1:
       mid++;
       break;
     case 2:
       swap(arr[mid], arr[high--]);
       break;
     }
   }
}