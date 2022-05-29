class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count = 0 ;
        vector<int> words;
        for(int i=0;i<sentences.size();++i){
            for(int j=0;j<sentences[i].size();++j){
                if(sentences[i][j]==' '){
                    count++;
                }
            }
            words.push_back(count+1);
            count = 0;
        }
        return *max_element(words.begin(),words.end());
    }
};