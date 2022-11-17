/* 
Create a difference string and add it to map, also increment count while adding to map.
While adding to the map, I am creating a string by just concatenating the numbers and "_" between each number.
Then scan the map to have an element with value 1 ( as we are looking for unique string)  and return corresponding string
*/
class Solution {
public:
    string oddString(vector<string>& words) {
        unordered_map<string, int> mp;
        unordered_map<string, string> amp;
        for(auto w: words){ 
            string s = ""; 
            for(int j = 0; j < w.size()-1; ++j){   //concatenate each nuber with a "_" in between
                int t = w[j+1] - w[j];
                s += to_string(t) + "_";
            }
            mp[s]++;   //add it to map and increament the value
            amp[s] = w;   //preserve the original string reference
        }
        for(auto m: mp){   //scan for string with count equal to 1 ( unique string )
            if(m.second == 1) return amp[m.first];   //return original string when found
        }
        return "";
    }
};