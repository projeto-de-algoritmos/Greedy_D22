class Solution {
public:
    int partitionString(string s) {
        
        int count = 1;
        string currentS = "";
        for(char letra: s) {
            int control =0;
            for(char currLetra: currentS){
                if(currLetra == letra){
                    control=1;
                    break;
                }
            }
            if(control==0){
                currentS += letra;
            } else {
                cout << currentS << "\n";
                currentS = letra;
                count++;
            }
        }
        
        return count;
    }
};