class Solution {
public:
    bool squareIsWhite(string coordinates) {
        map<char,int> mp;
        int a = 1;
        for(char i='a';i<='h';i++) mp[i]=a++;
        int b=mp[coordinates[0]],c=coordinates[1]-'0';
        return (b%2==0&&c%2!=0)||(b&2!=0&&c%2==0)?true:false;
    }
};