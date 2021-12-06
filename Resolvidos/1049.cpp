#include <iostream>
 
using namespace std;
 
int main() {
  string p1, p2, p3;
  cin >> p1;  
  cin >> p2;  
  cin >> p3;  
  
  if(p1 == "vertebrado" && p2 == "ave" && p3 == "carnivoro") {
    cout << "aguia" << endl;
  }
  if(p1 == "vertebrado" && p2 == "ave" && p3 == "onivoro") {
    cout << "pomba" << endl;
  }
  if(p1 == "vertebrado" && p2 == "mamifero" && p3 == "onivoro") {
    cout << "homem" << endl;
  }
  if(p1 == "vertebrado" && p2 == "mamifero" && p3 == "herbivoro") {
    cout << "vaca" << endl;
  }
  if(p1 == "invertebrado" && p2 == "anelideo" && p3 == "hematofago") {
    cout << "sanguessuga" << endl;
  }
  if(p1 == "invertebrado" && p2 == "anelideo" && p3 == "onivoro") {
    cout << "minhoca" << endl;
  }
  
  if(p1 == "invertebrado" && p2 == "inseto" && p3 == "hematofago") {
    cout << "pulga" << endl;
  }
  if(p1 == "invertebrado" && p2 == "inseto" && p3 == "herbivoro") {
    cout << "lagarta" << endl;
  }
  return 0;
}