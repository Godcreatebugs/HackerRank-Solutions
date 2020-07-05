class Solution {
public:
    int myAtoi(string str) {
        /*
        O(n) approach is iterate through str and start with number or sign and make a variable where you store number.
        Return sign * number at the end and you also need boolean to say when to start and stop.
        Consider INT_MIN and INT_MAX conditions as well and 0 if first letter is letter.
        */
        int n = str.length();
        int i=0;
        long int num= 0;
        int sign = 1; //by default +ve number change when - occurs in string
        bool start =false;
        while(i<n){
          //for if else most obvious condition comes first in heirarchy
            if ((str[i]=='-'|| str[i]=='+') && start==false ){
              if(str[i]=='-'){
                  sign =-1;
              }
                i++;
                start =true;
            }
             //  even if started and you encounter white space
              if(str[i]==' '&& start) break;
             //not started and encounterd white space
               if(str[i]==' ' && !start) {
                   i++;
                   continue;
               }
               if (str[i]<'0' || str[i]>'9'){
                   break;
               }


            //if now we have number
            else {
                //a below line converts str into number that we need
                num = num*10 + (str[i]-'0') ;
                //if we have maxed or mined out limit
                    if (sign*num < INT_MIN) return INT_MIN;
                    if (sign*num > INT_MAX) return INT_MAX;
                    i++;
                    start= true;
            }


            }
        return sign*num;
    }
};
