class Solution {
public:
    int mySqrt(int x) {
    if(x==0 || x==1){
        return x;
    }else if(x<0){
        cout << "Invalid input";
    }else{
        long long int result=1,i=1;
        while(result<=x){
            i++;
            result = i*i;
        }
        return i-1;
    }

    return 0;
    }
};