#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec1={1,2,3,4,5};
    vector<int> vec2(vec1);

    for(int nums:vec2){
        cout<<nums<<" ";
    }
    cout<<endl;

    // vec1.erase(vec1.begin(),vec1.begin()+3);  // (start,end)

    vec1.erase(vec1.begin()+2); // to delete 3rd one
    
    // .begin() it points 1st value inside vector. If we want to delete 2nd ,3rd then vec1.begin() + 1 for 2nd vec1.begin() + 2 for 3rd and so on... 

   for(int nums:vec1){
        cout<<nums<<" ";
    }
    cout<<endl;

    vec2.clear(); // to clear all elements
    cout<<"1 for empty and 0 for non-empty: "<<vec2.empty();

    return 0;

}