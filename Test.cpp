#include <iostream>
#include <cmath>
#include <string.h>
#include <string>
#include <cstdlib>
#include <ctime>
#include <ios>
#include <iomanip>
#include <Windows.h>
#include <winuser.h>
#include<conio.h>
//#include <grafics>
using namespace std;
//using namespace Graphics;



const int Sta {0};
const int Merge {1};
const int Alearga {2};
int OutValue;
int ArayV [5];
int gfh;

int main() 
{
    cout << boolalpha;
    

    int ArayV[5] = {2, 6, 9, 23, 8};
    for (int i = 0; i < 5; i++)
    {
        cout << "int =" << ArayV[i] << endl;
    }
    

       

    return 0;
    
}
/*
LRESULT CALLBACK InputHookFunction(const int code, const WPARAM wParam, const LPARAM lParam)
{
    switch (wParam)
    {
        case WM_KEYDOWN:
        {
            KBDLLHOOKSTRUCT* kbdStruct = (KBDLLHOOKSTRUCT*)lParam;
            DWORD wVirtKey = kbdStruct->vkCode;
            DWORD wScanCode = kbdStruct->scanCode;

            BYTE lpKeyState[256];
            if (GetKeyboardState(lpKeyState))
            {
                if(LastKey != wVirtKey)
                    LastKey = wVirtKey;
            }
            break;
        }
    }
    return CallNextHookEx(keyboardHook, code, wParam, lParam);
}

std::string string_to_hex(const std::string& input)
{
    static const char hex_digits[] = "0123456789ABCDEF";

    std::string output;
    output.reserve(input.length() * 2);
    for (unsigned char c : input)
    {
        output.push_back(hex_digits[c >> 4]);
        output.push_back(hex_digits[c & 15]);
    }
    return output;
}





void PrepareInput()
{
    keyboardHook = SetWindowsHookEx(WH_KEYBOARD_LL, InputHookFunction, NULL, 0);
    if (keyboardHook == NULL)
    {
        MessageBoxA(NULL, "Failed to create keyboard hook!", "Fail", MB_ICONERROR | MB_OK);
    }
}


std::string string_to_hex(string input)
{
    static const char hex_digits[] = "0123456789ABCDEF";

    std::string output;
    output.reserve(input.length() * 2);
    for (unsigned char c : input)
    {
        output.push_back(hex_digits[c >> 4]);
        output.push_back(hex_digits[c & 15]);
    }
    return output;
}

#include <stdexcept>

int hex_value(unsigned char hex_digit)
{
    static const signed char hex_values[256] = {
        -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
         0,  1,  2,  3,  4,  5,  6,  7,  8,  9, -1, -1, -1, -1, -1, -1,
        -1, 10, 11, 12, 13, 14, 15, -1, -1, -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
        -1, 10, 11, 12, 13, 14, 15, -1, -1, -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    };
    int value = hex_values[hex_digit];
    if (value == -1) throw std::invalid_argument("invalid hex digit");
    OutValue = value;
    cout  << OutValue;
    return value;
}
*/

//pragma region gds
    // float a = 95;
    // float b = 4;
    // int c = 2;
    // double z = a - (a/100*(b+c));
    // cout <<z;

    // if (c>0)
    // {
    //      cout <<z + b;
    // }
  
    // srand(time(0));
    // int a = rand() % (8 - 2 + 1) + 8;
    // cout << a;


    // string Nume;
    // cout << "Introduceci Numele: ";
    // cin >> Nume;
    // cout <<"Salut " << Nume;

    // int PrimulNumar = 3;
    // int AlDoileNumar = 6;

    // cout << PrimulNumar <<endl;
    // cout << AlDoileNumar <<endl;

    // cout << sizeof(PrimulNumar) <<endl;
    // cout << sizeof(long double) <<endl;

    // bool gf = true;
    // cout << boolalpha;
    // cout <<gf;

    
    // cout << "Nume Prenume:";
    // string nume;
    // getline(cin, nume);
    // cout << "" << endl;
    // cout << "Salut " << nume;


/*
        int Status;
        cin >> Status;
        switch (Status)
        {
        case Merge: 
        {
            cout<<"Merge"<<endl;
        }
         break;
        case Alearga: 
        {
            cout<<"Alerga"<<endl;
        }
        break;

        default:
        {
            //Sta;
            cout<<"Sta"<<endl;
        }
            break;
        }

        char Input;
        cin >> Input;*/
        //if (Input == 'a')
        // {
        //     //Do Something
        // }

       
        
        // string nume;
        // getline(cin,nume);
        // //input = nume;
        // //cout << endl;
        
//         #pragma endregion