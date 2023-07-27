class Solution {
public:
    int trap(vector<int>& height){ 
    // make an algorithm that goes from each y index from bottom to top and searches for open spaces

        int start = 1;
        int cur_level = 1;
        int open_spaces = 0;
        int max = *max_element(height.begin(), height.end()); // max = 3

        while (start <= max){
            int left = 0;
            int right = height.size() - 1;

            // find first block that matches current level height
            while (left < height.size() && height[left] != cur_level){
                left++; 
            }

            // find first block that matches current level height from right
            while(right >= 0 && height[right] != cur_level){
                right--;
            }

            while (left < right){

                // left pointer
                if (height[left] < cur_level){
                    open_spaces++;
                    left++;
                }
                else{
                    left++;
                }

                // right pointer
                if (height[right] < cur_level){
                    open_spaces++;
                    right--;
                }
                else{
                    right--;
                }
            }

            start++;
            cur_level++;
            
        }
        return open_spaces;
    }    
};
