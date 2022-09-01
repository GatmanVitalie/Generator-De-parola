#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <ios>
#include <iomanip>


using namespace std;

int toDec(string hexStr);
//Cite caractere va avea parola
long int NrDeCaractereAParorei = 9;
int main()
{
    cout << setprecision(NrDeCaractereAParorei);
    string input;

    cout << "Introduceți un index ";
    getline(cin, input);
    
    cout << "HEX: ";
    for (int i = 0; i < input.length(); i++)
    {
        cout << hex << int(input[i]);
    }
    cout << endl;
    

    
    string str;

    cout << "\nIntroduceți un nr pentru decodificare: ";
    cin >> str;

    int len = str.length();
    vector <char> arr;
    
    //convert the string (which is a hex number) to an array of characters
    for (int i = 0; i < len; i++)
    {
        arr.push_back(str[i]);
    }
    
    string str2;
    int decNum;
    
    //add two characters (i.e two digits) to a string and convert it to decimal,
    //then output the decimal as a char
    for (int i = 0; i < arr.size(); i+=2)
    {
        //add two digits (one ASCII character) to the string
        str2.push_back(arr[i]);
        str2.push_back(arr[i+1]);
        

        decNum = toDec(str2);

        cout << (char)decNum;
        
        //empty the string
        str2.erase(0,2);
    }
    cout << endl;

    return 0;
}

int toDec(string hexStr)
{
    stringstream ss;
    int decNum;
    
   
    ss << hex << hexStr;

    ss >> decNum;
    
   
    return decNum;
}