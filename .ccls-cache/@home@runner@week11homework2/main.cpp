#include <iostream>
using namespace std;

/*
int n = input
arr[n]
for(){
while: check if arr[i] if equal to an other letter in the array
if yes: break;
if no: output;

do something like linear search?

input:
1. 11
2. 1 2 3 4 5 6 7 8 9 10 1

output:
1

var n = 11
var arr[n] = 1 2 3 4 5 6 7 8 9 10 1
for(int i = 0; i<n; i++){
while{
if:arr[i]==arr[j]
break;
else{
continue
}
}
if:j=i{
output
}
}
}



function search(n, arr, arr[i]){
make var for returning or cnt
for(int i){
check if arr[i] is equel to any other arr[i]
if:yes{
cnt++
continue
}
}
return cnt;
}

var n = input
var arr[n] = #2 line input
for(int i = 0){
count = call function search
if(count>0){
continue;
}
output arr[i]
break;
}

*/

int search(int array[], int n, int size){
  int count = 0;
  for(int i = 0; i<size; i++){
    if(array[i] == n){
      count+=1;
      continue;
    }
    continue;
  }
  return count;
}

int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i = 0; i<n; i++){
    cin>>arr[i];
  }
  for(int i = 0; i<n; i++){
    int count = search(arr, arr[i], n);
    if(count>1){
      continue;
    }
    cout<<arr[i];
    break;
  }
  
  // for(int i = 0; i<n; i++){
  //   cin>>arr[i];
  // }
  // for(int i = 0; i<n; i++){
  //   int j = 0;
  //   int c = 0;
  //   while(j!=n){
  //     if(arr[i] == arr[j]){
  //       c = 2;
  //       break;
  //     }
  //     else if (i == j){
  //       continue;
  //     }
  //   }
  //   if(c!=2){
  //     cout<<arr[i];
  //     break;
  //   }
  // }
}