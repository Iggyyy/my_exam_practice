#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void decimalToBinary(int liczba)
{
    vector<int> bin;

    while(liczba)
    {
    bin.push_back(liczba%2);
    liczba/=2;
    }



    for(int i =bin.size()-1; i>=0; i--)
    {
        cout<<bin[i];
    }

    cout<<endl;
}

void BinaryToDecimal(int bin)
{
    int it=0, dec=0;

    while(bin)
    {
        dec += bin%10 * pow(2, it);
        bin/=10;
        it++;
    }

    cout<<dec<<endl;
}

void DecimalToHex(int dec)
{
    while(dec)
    {
        int op = dec%16;
        dec/=16;

        if(op>9)
        {
            cout<< (char)('A' + op-10);
        }
        else
            cout<<op;


    }
}

string DecimalToHexx(int liczba)
{
        if(liczba == 0) return "";

        cout << liczba << '\n';
        string past = DecimalToHexx(liczba/16);
        cout << past << '\n';
        int a = liczba%16;

        if(a > 9 )
             past += (char)('A' + a-10);
        else
             past += (char)(a + '0');

        return past;
}

int HexToDecimal(string liczba)
{
    int sum = 0;
    for (int i = 0; i < liczba.size(); i++) {
        int dig = ( liczba[i] < 'A' ?  liczba[i] - '0' : liczba[i] - 'A' + 10);
        sum *= 16;
        sum += dig;
    }
    return sum;
}





int main()
{
    int a,b,c;
    string d;
    cin>>a;

    decimalToBinary(a);
    cin>>b;
    BinaryToDecimal(b);
    cin>>c;
    cout<<DecimalToHexx(c);
    cin>>d;
    cout<<HexToDecimal(d);

}
