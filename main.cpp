#include <iostream>
#include <ostream>
#include <fstream>
#include "Sentences.h"
#include <vector>
//#include "Sentences.cpp"

using namespace std;

int main() {
     //"ENGLISH DATASET"
    vector<string> wordsFromSentence;
    vector<string> allSentences;
    string sent;


    int count =0;


    ifstream infile;
	infile.open ("English.txt");
    while(getline(infile,sent)) {

        allSentences.push_back(sent);
        count++;
    }
	infile.close();



	vector<Sentences> s(count);


	 for(int i=0; i<count; i++){
        s[i].setSentence(allSentences[i]);
    }


    int avgNumwords=0;
    int numWords=0;
    for(int i=0; i<count; i++){
        numWords = s[i].getNumWords();
        avgNumwords = avgNumwords+numWords;
    }

    int lengthWord=0;
    int avglengthWord=0;
    for(int i=0; i<count; i++){
        lengthWord=s[i].getLengthWords();
        avglengthWord = avglengthWord+lengthWord;
    }

    int NumSpecial =0;
    int avgSpecial =0;
    for (int i=0;i<count;i++){
        NumSpecial = s[i].getCountSpecialcharacters();
        avgSpecial= avgSpecial+NumSpecial;
    }

    int numspef=0;
    int avgspef=0;
    string spword="";
    cout<< "Enter English word to find number of occurrences\n";
    cin>>spword;
     for (int i=0;i<count;i++){
        numspef = s[i].getoccurencesofspwords(spword);
        avgspef= numspef+avgspef;
    }

    //"KREOL DATASET
    vector<string> wordsFromSentence1;
    vector<string> allSentences1;
    string sent1;
    int kcount =0;

    ifstream in;
	in.open ("Kreol.txt");
    while(getline(in,sent1)) {

        allSentences1.push_back(sent1);
        kcount++;
    }
	in.close();

    vector<Sentences> s1(kcount);

    for(int i=0; i<kcount; i++){
        s1[i].setSentence(allSentences1[i]);
    }
    int avgNumwords1=0;int numWords1=0;
       // int max = wordsFromSentence1.size();
    for(int i=0; i<kcount; i++){
        numWords1 = s1[i].getNumWords();
        avgNumwords1 = avgNumwords1+numWords1;
    }

    int lengthWord1=0;int avglengthWord1=0;
    for(int i=0; i<kcount; i++){
        lengthWord1=s1[i].getLengthWords();
        avglengthWord1 = avglengthWord1+lengthWord1;
    }

    int NumSpecial1 =0;int avgSpecial1 =0;
    for (int i=0;i<kcount;i++){
        NumSpecial1 = s1[i].getCountSpecialcharacters();
        avgSpecial1 = avgSpecial1+NumSpecial1;
    }
    int numspef1=0;int avgspef1=0;string spword1="";
    cout<< "Enter Kreol word to find number of occurrences\n";
    cin>>spword1;
     for (int i=0;i<kcount;i++){
        numspef1 = s1[i].getoccurencesofspwords(spword1);
        avgspef1= numspef1+avgspef1;
    }

    cout<<"FOR ENGLISH:\n";
    cout<<"\taverage no of words per sentence:"<<avgNumwords/float(count)<<endl;
    cout<<"\taverage no of character per sentence:"<<avglengthWord/float(count)<<endl;
    cout<<"\taverage no of special characters per sentence:"<<avgSpecial/float(count)<<endl;
    cout<<"\taverage no of English specific word "<<"("<<spword<<")"<<" "<<avgspef/float(count)<<endl;
    cout<<"**********************************************************\n";
    cout<<"**********************************************************\n";
    cout<<"**********************************************************\n";
    cout<<"FOR KREOL:\t\n";
    cout<<"\taverage no of wordsp per sentence:"<<avgNumwords1/float(kcount)<<endl;
    cout<<"\taverage no of character per sentence:"<<avglengthWord1/float(kcount)<<endl;
    cout<<"\taverage no of special characters per sentence:"<<avgSpecial1/float(kcount)<<endl;
    cout<<"\taverage no of Kreol specific word "<<"("<<spword1<<")"<<" "<<avgspef1/float(count)<<endl;
    return 0;
}
