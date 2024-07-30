class Solution { 
public:
    int numJewelsInStones(string Jewels, string Stones) {
    int count = 0;
     for (int i = 0; i < Stones.size(); i++) {
        for (int j = 0; j < Jewels.size(); j++) {
             if (Stones[i] == Jewels[j])
             {
                count++;
            }
         }

      } 
      return count;
    }
};
