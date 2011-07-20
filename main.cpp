#include "FnWord.h"
#include "Fn.h"
#include "Basis.h"
#include <QList>
#include <iostream>
using namespace std;

QList<FnWord> wordsoflength (Basis basis, int len){
    QList<FnWord> wordList;
    FnWord word;

    if(len == 1)
    {
        for(int i =0;i<basis.size();i++)
        wordList.append(basis.at(i));
	return wordList;
    }
    
    QList<FnWord> shorterWords = wordsoflength(basis,len-1);
    foreach(FnWord x, shorterWords)
    {

      foreach(QChar a, basis){
	if(basis.inverse(a) != x.at(0))
	  wordList.append(a+x);
        }

    }

    return wordList;
    
}

int main()
{

    int length;
    cout<< "Enter a length: " << endl;
    cin >> length;
 
    int rank;
    cout << "Enter a rank: " << endl;
    cin >> rank;

    Basis basis(rank);

    QList<FnWord> wordList;

    wordList = wordsoflength(basis,length);

    /*
    foreach(FnWord x,wordList){
        cout << x.toStdString() << endl;
    }
    */

    cout << "There are " << wordList.size() << " words." << endl;
    
    return 0;

}
