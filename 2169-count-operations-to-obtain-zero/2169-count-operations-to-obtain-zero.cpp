class Solution {
public:
    int countOperations(int num1, int num2) {
        int count =0;
        if(num1 ==0 || num2==0){
           return 0; 
        }
        else{
         for(int i=1;i<1000000;i++){
          if(num1>=num2){
            num1 =num1-num2;
              if(num1==0){
                  break;
              }
        }
            else{
              num2 =num2-num1;
                if(num2==0){
                    break;
                }
             } 
           count =i; 
        } 
        
        return count+1;   
        }
    }
};