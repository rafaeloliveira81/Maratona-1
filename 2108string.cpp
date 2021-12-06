#include <iostream>

using namespace std;
	

int main(){
	setlocale(LC_ALL,"Portuguese");

	int aux=0;	  		
	string frase;

    getline(cin, frase);
    string delimiter = " ";
    int tam = frase.length();
    string f = frase;
    string maior;
    string cod;
    
    while(tam > 0) {
        string palavra = "";
        if (f.find(delimiter)) {
            palavra = f.substr(0, f.find(delimiter)); // f = teste de contagem
        }
        else {
            cout << "entrou" << endl;
            palavra = f;
        }
        
        if(palavra.length() >= maior.length()) {
            maior = palavra;
            cout << maior << endl;
        }
        int t = palavra.length();
        cod.append(to_string(t));
        if (f.find(delimiter)) {
            f.erase(0, f.find(delimiter) + delimiter.length()); // f = de contagem
        }
        else {
            f.erase(0, palavra.length()); // f = de contagem
        }

        tam = f.length();
        cout << cod << endl;
        cout << tam << endl;
    }

    string palavra = frase.substr(0, frase.find(delimiter));

    cout << palavra << endl;
    cout << tam << endl;
	
    return 0;
}