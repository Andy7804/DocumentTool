// Do NOT add any other includes
#include <string> 
#include <vector>
#include <iostream>
#include "Node.h"
using namespace std;


struct SearchPair {
    vector<int> indval;
    string s;

    SearchPair();
};


class SearchEngine {
private:
    // You can add attributes/helper functions here
    vector<int> findlps(const string& pat);
    vector<SearchPair*> sentence_record;
    

public: 
    /* Please do not touch the attributes and 
    functions within the guard lines placed below  */
    /* ------------------------------------------- */
    SearchEngine();

    ~SearchEngine();

    void insert_sentence(int book_code, int page, int paragraph, int sentence_no, string sentence);

    Node* search(string pattern, int& n_matches);

    /* -----------------------------------------*/
};