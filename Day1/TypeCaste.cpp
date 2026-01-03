#include<iostream>
using namespace std;
// Lower size variable ---- Higher size variable (conversion)
//  Higher size variable ----Lower size variable (TypeCasting)
int main(){
    float b=12.4;
    int bValue=(int)b;
    char alp='A';
    int alpValue=alp; // Heere Ascii valur of A wil be stored
    cout<<alpValue<<"\n";
    cout <<bValue <<"\n"<< sizeof(b);
      
    return 0;
}