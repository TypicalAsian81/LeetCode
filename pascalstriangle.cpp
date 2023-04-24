class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vect;
        vect.size() = numRows;
        pascal(vector<vector<int>> &vect);
    }

    vector<vector<int>> pascal(vector<vector<int>> &vect){
        vect[0][0] = 1;
        vect[1][0] = 1;
        vect[1][1] = 1;
        for(int i=2; i<vect.size(); i++){
            for(int j=1; j<=i-1; j++){
                vect[i][j] = vect[i-1][j-1] + vect[i-1][j]
                vect[i][0] = 1;
                vect[i][i] = 1;

            }
        }

        return vect;    
    }
};