#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
//progression in sorting algs i know ( without the use of STL std::sort())
void selsort(vector<int> &a){
     for(int i=0;i<a.size();i++){
        int small=a[i];
        int smallpos=i;
        for(int j=i;j<a.size();j++){
            // small=(a[j]<=small)?a[j]:small;
            smallpos=(a[j]<=a[smallpos])?j:smallpos;
        }
        int temp=a[i];
        a[i]=a[smallpos];
        a[smallpos]=temp;
    }
}

void bubsort(vector<int> &a){
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a.size();j++){
            if(a[j]>=a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main(){
    vector<int> a{1,2,4,1,2,123,12,5};
    
   bubsort(a);
    
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }

}