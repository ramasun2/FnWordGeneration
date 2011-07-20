#include "FnWord.h"
#include "Fn.h"
#include "Basis.h"
#include <QList>
#include <iostream>
using namespace std;

QList<FnWord> wordsoflength (Basis basis, int len){
    QList <FnWord> wordList;
    FnWord word;
    if(len = 1)
    {
        for(int i =0;i<basis.size();i++)
        wordList.append(basis.at(i));


    return wordList;
    }

    QList<FnWord> shorterWords = wordsoflength(basis,len-1);
    foreach(FnWord x, shorterWords)
    {
        foreach(FnWord y.basis.at()){
    if(y.inverse() != x.at(x.size()))
        wordList.append(x+y);
        }

    }
    return wordList;

    foreach(FnWord x,wordList){
        cout << x.StdString () << endl;
    }

    cout <<wordList.size() << endl;
}

int main()
{
    int length;
    cout<< "Enter a length: " << endl;
    cin >> length;

    int *v = new int[length];

    for(int i = 0; i<length; i++){
        cout << i //not done
    }
    wordList.Print();

    delete []v;

return 0;
    }
