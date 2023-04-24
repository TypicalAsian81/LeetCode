class Solution {
public:
    int divide(int dividend, int divisor) {
        int count=1;
        int a,b;
        bool isTop = true;
        bool isBottom = true;
        if(dividend<0){
            a = dividend * (-1);
            isTop = false;

        }else if(dividend>0){
            a = dividend;
            isTop = true; 
        }
        
        if(divisor<0){
            b = divisor * (-1);
            isBottom = false;
        }else if(divisor>0){
            b = divisor;
            isBottom = true;
        }

        while(b<=a){
            b+=b;
            count++;
        }

        if(isTop == true && isBottom == true){
            return count;
        }else if(isTop == true && isBottom == false){
            return count * (-1);
        }else if(isTop == false && isBottom == true){
            return count * (-1);
        }else if(isTop == false && isBottom == false){
            return count;
        }
        return count;
    }
};