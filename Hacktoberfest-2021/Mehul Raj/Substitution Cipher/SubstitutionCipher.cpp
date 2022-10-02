// This program increpts the user message
// And can also decrept the encripted message 
// Sample Output is given below

#include <iostream>
#include <string>

using namespace std;

int main(){
    string alphabet = " ]abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string key = "] XAYGVSLNWPCJHROKBFQEMIUTZDxaygvslnwpcjhrokbfqemiutzd";

    string secret;
    string encode;
    string decode;
    cout<< "Enter a secret message: ";
    getline(cin,secret);

    cout<<"\nEncrypting message...\n\n";

    for (char c : secret){
        size_t pos = alphabet.find(c);
        if(pos != string::npos)
            encode += key.at(pos);
        else
            encode += c;
    }

    cout<<"Encrypted message: "<<encode<<endl<<endl;
    cout<<"Decrypting message...\n\n";

    for(char c : encode){
        size_t pos = key.find(c);
        if(pos != string::npos)
          decode += alphabet.at(pos);
        else
          decode += c;
    }

    cout<<"Decrypted message: "<<decode<<endl;
}

/*   Enter a secret message: My name is Mehul Raj

     Encrypting message...

     Encrypted message: hZ]RXHV]WQ]hVNMJ]fXP

     Decrypting message...

     Decrypted message: My name is Mehul Raj   
*/
