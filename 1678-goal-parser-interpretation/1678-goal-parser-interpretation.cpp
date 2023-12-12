class Solution {
public:
    string interpret(string c) {
        string  s;
        int i=0;
        while(i<c.size()){
            if(c[i]=='G'){
                s+=c[i];
                i++;
            }else if(c[i]== '(' && c[i+1] == ')'){
                s+= "o";
                i+=2;
            }else{
                s+="al";
                i+=4;
           }
        }
        return s;
    }
};