#include <bits/stdc++.h>
using namespace std;
int createAtoi(string s) {
    // Write your code here.
        int flag =0;
        int i=0;
		//if we encounter spaces before any character , we will simply increment i else break out of loop.
        while(i<s.size()){
            if(s[i]==' ')i++;   
            else break;       
        }
		//if number is starting with character ('-' minus) then we set the flag to 1 and increment the counter
        if(s[i]=='-'){
            i++;
            flag = 1;
        }
        else if(s[i]=='+')
			i++;
        long num =0;
		//starting the count from i
        for(int j=i; j<s.size();j++){
            if(s[j]>='0' && s[j] <='9'){    // i.e s[j] lies between or equal to 0 to 9
                num = num*10 + (s[j]-'0');
				//from above line there might be a chance when the number will get overflow.
                if(num>=INT_MAX) break;   
            }
            else      //if character other then number then exit the loop
                break;
        }
        
        if(flag==1)
            num*=-1;
			if(num<=INT_MIN)return INT_MIN;         //according to question point number 5
        else if(num>=INT_MAX) return INT_MAX;
        return num;
    
}