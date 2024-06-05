#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int size;
        cin>>size;
        int a[size];
        int large = 0, mins,lind,mind;
        for(int i=0;i<size;i++){
            cin>>a[i];
            if(i==0){
                mins= a[0];
            }
            if (a[i]>large){
                large=a[i];
                lind=i+1;
            }
            if (a[i]<mins){
                mins=a[i];
                mind=i+1;
            }
        }
        if((large-mins)>=size){
            cout<<"Yes\n";
            cout<<mind<<" "<<lind<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }
    return 0;
}