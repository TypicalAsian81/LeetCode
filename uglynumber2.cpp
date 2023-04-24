class Solution {
public:
    int nthUglyNumber(int n) {
        int i=0,j=0,k=0;
        vector<int> vect{1};

        while(vect.size()<n){
            int num = min(vect[i]*2,min(vect[j]*3,vect[k]*5));
            vect.push_back(num);
            if(vect.back()==vect[i]*2)
               ++i;
            else if(vect.back()==vect[j]*3)
               ++j;
            else
               ++k;
        }

        return vect[n-1];
    }
};