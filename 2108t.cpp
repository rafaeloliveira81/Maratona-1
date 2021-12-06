#include <iostream>

using namespace std;
	

int main(){
	setlocale(LC_ALL,"Portuguese");

	int aux=0;	  		
	string frase;
  char maior[100];
	
	do{
		int i=0, count = 0;
		
		getline(cin,frase);
		
		for(i=0;i<100;i++){
			if(frase[i] != '0'){
				if(count > aux){
					aux = count;
					int k=0;
					for(int j= (i-aux); j <= i; j++){
						maior[k] = frase[j];
            k++;
					}	   	
				}
				if(frase[i] == ' '){
					cout << count << "-";
					count = 0;
				}else{
					count++;
				}
			}else{
				cout << count << endl;
				break;
			}	
		}
		
	}while(frase != "0");
	
	cout << "\nA maior palavra é: " << maior << endl;


return 0;
}