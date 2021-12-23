class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> freqOfRansomNote(26,0);
        vector<int> freqOfMagazine(26, 0);
        
        for(int i = 0; i<ransomNote.length(); i++){
            int c = ransomNote[i] - 'a';
            freqOfRansomNote[c]++;
        }
        
        for(int i = 0; i<magazine.length(); i++){
            int c = magazine[i] - 'a';
            freqOfMagazine[c]++;
        }
        
        for(int i = 0 ; i<ransomNote.length(); i++){
            int c = ransomNote[i] - 'a';
            
            if(freqOfRansomNote[c] > freqOfMagazine[c])
                return false;
        }
        return true;
    }
};