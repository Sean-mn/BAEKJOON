using System;

public class Solution {
    public int solution(int n) {
        int answer = 0;
        
        if (n % 2 != 0)
            answer = oddSum(n);
        else
            answer = evenSquare(n);
        
        return answer;
    }
    
    public int oddSum(int n){
        int sum = 0;
        
        for (int i = n; i > 0; i-=2){
            sum += i;
        }
        
        return sum;
    }
    
    public int evenSquare(int n){
        int sum = 0;
        
        for (int i = n; i > 0; i-=2)
        {
            sum += i*i;
        }
        return sum;
    }
}