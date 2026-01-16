# include <iostream>
using namespace std;
int main(){
    int h,w,ans=0,area;
    int height[]={1,8,6,2,5,4,8,3,7};
    int size=sizeof(height)/sizeof(height[0]);
    // for(int i=0;i<size;i++){
    //     for(int j=i+1;j<size;j++){
    //         h=min(height[i],height[j]);
    //         w=j-i;
    //         area=h*w;
    //         ans=max(area,ans);
    //     }
    // }
    // cout<<"The maximum area is "<<ans<<endl;

  
// By two pointer approach method

    int lef=0;
    int rig=size-1;
    while(lef<rig){
        w=rig-lef;
        h=min(height[lef],height[rig]);
        area=h*w;
        ans=max(ans,area);
        if(height[lef]<height[rig]){
            lef++;
        }
        else{
            rig--;
        }

    }
    cout<<"The area is "<<ans<<endl;
    return 0;
}