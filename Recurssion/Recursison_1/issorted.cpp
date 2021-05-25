// #include<iostream>
// #include<vector>
// using namespace std;

// bool isSorted(std::vector<int> &vec){
//   int n = vec.size();
//   if(n == 0 || n== 1) return true;
//   if(vec.at(n-2) > vec.at(n-1)){
//     return false;
//   }
//   else{
//     return true;
//   }
//   return isSorted(vec.pop_back());
// }

// int main(){
//   vector<int> vec = {1,3,4,2,5};
//   if(isSorted(vec)){
//     cout<<"Sorted"<<endl;
//   }
//   else{
//     cout<<"Not sorted"<<endl;
//   }

//   return 0;
// }

#include<iostream>
using namespace std;

bool isSorted(int a[], int n){
   if(n==0 || n==1){
    return true;
   }
   if(a[0] > a[1]){
    return false;
   }

   /*if(isSmallerSorted){
    return true;
   }else{
     return false;
   }*/
   return isSorted(a+1 , n-1);;

}

bool isSorted2(int a[],int n){
    if(n==0 || n==1){
       return true;
   }
   bool isSmallerSorted = isSorted(a+1 , n-1);
   if(!isSmallerSorted){
    return false;
   }
   if(a[0] > a[1]){
    return false;
   }else{
     return true;
   }
}

bool isSorted3(int a[],int n){
   if(n==0 || n==1){
       return true;
   }
   if(a[n-2] > a[n-1]){
    return false;
   }
   return isSorted3(a,n-1);
}

int main(){
  int a[] = {1,2,3,4,5};
  if(isSorted(a,5)){
    cout<<"Sorted"<<endl;
  }else{
    cout<<"Not Sorted"<<endl;
  }
  return 0;
}
