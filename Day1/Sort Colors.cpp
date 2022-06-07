

class Solution {
public:
    void sortColors(vector<int>& arr) {
          int a=0,b=0,c=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            a++;
        }
        else if(arr[i]==1){
            b++;
        }
        else {
            c++;
        }
        
        
    }cout<<a<<b<<c<<endl;
    for(int i=0;i<a;i++){
        arr[i]=0;
    }
     for(int i=a;i<b+a;i++){
        arr[i]=1;
    }
     for(int i=b+a;i<c+b+a;i++){
        arr[i]=2;
    }
        
    }
};
