#include<iostream>
#include<string>
using namespace std;

int main() {
    string frase = "";
    string palavra, maior, saida = "";
	string delimiter = " ";
	string f = "";
	int tam = 0;

	while (frase != "0") {
		getline(cin, frase);
		f = frase;
		if (f == "0") {
			break;
		}
		tam = f.length();
		while (tam > 0) {
			int t = f.find(delimiter);
			if (t != -1) {
				palavra = f.substr(0, f.find(delimiter));
				f.erase(0, f.find(delimiter) + delimiter.length());
			}
			else {
				palavra = f;
				f = "";
			}
			
			if (palavra.length() >= maior.length()) {
				maior = palavra;
			}

			if (saida != "") {
				saida.append("-");
				saida.append(to_string(palavra.length()));
			}
			else {
				saida.append(to_string(palavra.length()));
			}
			tam = f.length();
			if (tam == 0) {
				cout << saida << endl;
				saida = "";
			}
		}
	}
	cout << endl;
	cout << "The biggest word: " << maior << endl;

    return 0;
}