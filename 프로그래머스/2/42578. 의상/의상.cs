using System;
using System.Collections.Generic;

public class Solution {
    public int solution(string[,] clothes) {
        Dictionary<string, int> dict = new Dictionary<string, int>();
        
        int rows = clothes.GetLength(0);
        for (int i = 0; i < rows; i++){
            string type = clothes[i, 1];
            if (!dict.ContainsKey(type))
                dict[type] = 1;
            else
                dict[type]++;
        }
        
        int answer = 1;
        foreach (var pair in dict) {
            answer *= pair.Value + 1;
        }
        
        return answer - 1;
    }
}