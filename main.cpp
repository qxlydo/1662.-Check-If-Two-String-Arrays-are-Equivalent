class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        std::string result1, result2;
        for(auto i=0;i<word1.size();i++){
            result1+=word1[i];
            if (i + 1 < word1.size()) {
                result1 += "";
            }
        }
        std::cout <<result1<<std::endl;
        for(auto i=0;i<word2.size();i++){
            result2+=word2[i];
            if (i + 1 < word2.size()) {
                result2 += "";
            }
        }
        std::cout <<result2<<std::endl;
        return result1 == result2 ? true : false;
        
    }
};
