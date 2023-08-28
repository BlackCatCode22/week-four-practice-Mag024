#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 50; i++){
        cout << "\n\n i is " << i;

        cout << "\n\n" << endl;
    }

    // string index with increment
    string myStr;
    myStr = "abcdefghij";
    cout << myStr[0] << endl;
    cout << myStr[1] << endl;
    cout << myStr[2] << endl;

    cout << "\n\n" << endl;



    for (int i = 0; i < 10; i++)
    {
        cout << myStr[i];
        cout << "\n\n";
    }


    // decrement of alphabet
    for (int i = 9; i > 0; i--)
    {
        cout << myStr[i];
         cout << "\n\n";
    }

    // chatGPT solution
    for (char c = 'a'; c <= 'j'; ++c)
    {
        cout << c;
        cout << "\n\n\n";
    }

    // ChatGOT opposite, decrement
      for (char c = 'j'; c >= 'a'; --c)
    {
        cout << c;
        cout << "\n\n\n";
    }

    //1D Char array and fill it with chars a-h 1104
    char myChars[10] = {'a','b','c','d','e','f','g','h','i','j'};

    cout << "\n\n The letter should show e..." << myChars[4] << "\n\n";

    // hexidimal garbage according to ChaptGPT, Angelo looked up
    // &myChars would show Hexidicaml address
    cout << myChars << "\n\n";

    for (int i = 0; i < 10; i++){
        cout << "\n\n myChars[" << i << "] is... " << myChars[i] << "\n\n";
    }

    //If statement 1130
    int num1 = 33;
    int num2 = 111;
    if (num1 > num2){
       cout << "\n\n num1 is the larger value, this expression is true";
    }
    else {
        cout << "\n\n this statement is false";
    }

        //attempt at making a hash map
    map<string, int> myDictionary01;
    myDictionary01.insert(pair<string, int>("a", 4));
    myDictionary01.insert(pair<string, int>("b", 3));
    myDictionary01.insert(pair<string, int>("c", 2));
    myDictionary01.insert(pair<string, int>("d", 5));

    for (auto pair : myDictionary01){
        cout << pair.first << " - " << pair.second << endl;
}
    // increment the values of our keys
    myDictionary01["b"]++;
    myDictionary01["c"]++;
    myDictionary01["c"]++;

    cout << "\n\n\n";

     for (auto pair : myDictionary01){
        cout << pair.first << " - " << pair.second <<endl;
     }



    return 0;
}
