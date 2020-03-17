#include "Sentences.h"
#include <iostream>

Sentences::Sentences(){}

string Sentences::getSentence(){
    return sentence;
}

void Sentences::setSentence(string s){
    sentence = s;
}

int Sentences::getNumWords(){
    int numChars = sentence.length();
    vector<string> setOfWords;
    string currentWord;
    for(int i=0;i<numChars;i++){
        if(sentence[i] == ' ' || sentence[i] == '.' || sentence[i] == '!' || sentence[i] == '?'){
            setOfWords.push_back(currentWord);
            currentWord = "";
        }
    else{
        currentWord += sentence[i];
        }
    }

    return (setOfWords.size());
}

int Sentences::getLengthWords(){
    int numChars = sentence.length();
    vector<string> setOfWords;
    string currentWord;
    for(int i=0;i<numChars;i++){
        if(sentence[i] == ' ' || sentence[i] == '.' || sentence[i] == '!' || sentence[i] == '?'){
            setOfWords.push_back(currentWord);
            currentWord = "";
        }
    else{
        currentWord += sentence[i];
        }
    }
    int max = setOfWords.size();
    int temp =0;
    int total=0;
    for (int i =0;i<max;i++){
        temp = setOfWords[i].length();
        total = total+temp;
    }

    return (total);
}

int Sentences::getCountSpecialcharacters(){
    int numChars = sentence.length();
    countSpecialcharacters=0;
    for(int i=0;i<numChars;i++){
        if(sentence[i] == '-' || sentence[i] == ',' || sentence[i] == '!' || sentence[i] == '?'||sentence[i]=='.'){
            countSpecialcharacters++;
        }
    }
    return (countSpecialcharacters);
}

vector<string> Sentences::getWords(){
    int numChars = sentence.length();
    string currentWord;
    words.clear();

    for(int i=0;i<numChars;i++){
        if(sentence[i] == ' ' || sentence[i] == '.' || sentence[i] == '!' || sentence[i] == '?'){
            words.push_back(currentWord);
            currentWord = "";
        }
        {
            currentWord += sentence[i];
        }
    }
    return words;
}

int Sentences::getoccurencesofspwords(string spword){
    int numChars = sentence.length();
    int spcount=0;
    vector<string> setOfWords;
    string currentWord;
    for(int i=0;i<numChars;i++){
        if(sentence[i] == ' ' || sentence[i] == '.' || sentence[i] == '!' || sentence[i] == '?'){
            setOfWords.push_back(currentWord);
            currentWord = "";
        }
    else{
        currentWord += sentence[i];
        }
    }

    int wmax=setOfWords.size();
    for(int r=0; r<wmax;r++){
       if (setOfWords[r]==spword){
            spcount++;

       }


    }
    return spcount;

}

Sentences::~Sentences(){}
