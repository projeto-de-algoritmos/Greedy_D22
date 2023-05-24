class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        for(int i=0; i<capacity.size(); i++){
            capacity[i] -= rocks[i];
        }

        sort(capacity.begin(), capacity.end());

        for(int i=0; i<capacity.size(); i++){
            if(additionalRocks < capacity[i]) {
                break;
            }
            if(capacity[i]>0 ) {
                additionalRocks -= capacity[i];
                capacity[i] = 0;
            }
        }
        int count=0;
        for(int n: capacity){
            if(n == 0){
                count++;
            }else{
                break;
            }
        }

        return count;
    }
};