class Solution {
public:
  string sortSentence(string s) {
        vector<string> words (10,""); // Created a string vector to store the 10 words(As at max 9 words are allowed)
        for(int i=0; i<s.size(); i++){ // traversing over the sentence
            int j = i;
            string word; // word is a seperate word in that sentence
            while(!isdigit(s[j])){ 
                word.push_back(s[j]);
                j++;
            }
            words[s[j]-'0'] = word; // placing the word in words vector as per it's given position digit.
            i = j+1; // incrementing for the space between two words
        }
        string answer; // our final answer sentence
        for(int i=1; i<10; i++){ // traverse over all the words
            if(words[i].length()>0){
                answer+=words[i];
                answer.push_back(' '); // this space is for space between words
            }
        }
        answer.pop_back(); // we dont want space at the end so we just poped it out
        return answer;  // finall return the answer sentence
    }
};