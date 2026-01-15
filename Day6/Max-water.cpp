# include <iostream>
using namespace std;
int main(){
    int h,w,ans=0,area;
    int height[]={1,1};
    int size=sizeof(height)/sizeof(height[0]);
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            h=min(height[i],height[j]);
            w=j-i;
            area=h*w;
            ans=max(area,ans);
        }
    }
    cout<<"The maximum area is "<<ans<<endl;
    return 0;
}