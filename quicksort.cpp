//including library
#include<iostream>
using namespace std;

//swap function


void swap (int i,int j, int arr[]) {
  int a;
  a= arr[i];
//swapping the variables
  arr[i]=arr[j];
  arr[j]=a;
}


//partition function
int partition (int low,int high,int arr[]) {
int i=low-1;
int j;

//sorting out elements around pivot
for(j=low;j<=high;) {
  if (arr[j]<=arr[high]){
     i++;
     swap (i,j,arr);
      j++;
   }
  else {
     j++;
   }
}
//putting the pivot into right pace
  swap(i+1,high,arr);
  return i+1;
}
 
//quicksort function
void quack(int low, int high, int arr[]) {
if(low<high){
   int a;
//for pivot
   a= partition(low,high,arr);
//using recursion   
quack(low,a-1,arr);
   quack(a+1,high,arr);
 }
}

//main function
int main() {
  int n;
//asking the user for array size
  cout<<"the number of elements of array"<<endl;
  cin>>n;
  int arr[n];
  int a=0;
  for(a<n;a++;){
//entering array elements
   cin>>arr[a];
  }
//quicksort
quack(0,a,arr);
//end the program
return 0;
}
