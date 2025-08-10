class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string jawaban;
        int index(0), di(-1);
        int besar = strs[0].size();
        if(besar == 0){
            return "";
        }
        //cari str terpendek
        for(int i=1; i<strs.size();i++){
            if(strs[i].size() == 0){
                return "";
            }
            if(besar >= strs[i].size()){
                besar = strs[i].size();
                index = i;
            }
        }
        // cout << "besar: " << besar << endl;
        // cout << "index: " << index << endl;
        // cout << "kata: " << strs[index] << endl;

        for(int i=0; i<strs[index].size(); i++){
            for(int j=0; j<strs.size();j++){
                if(strs[j][i] != strs[index][i] && i == 0){
                    return "";
                }else if(strs[j][i] != strs[index][i]){
                    di = i-1;
                    break;
                }

            }
            if(di != -1) break;
            if(i == strs[index].size()-1 && di == -1){
                di = strs[index].size()-1;
            }
        }

        for(int i=0; i<=di; i++){
            jawaban += strs[index][i];
        }
        return jawaban;
    }
};