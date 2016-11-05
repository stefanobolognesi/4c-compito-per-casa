/* Bolognesi 4^C */

//scrivere una funzione che abbia come paraametri il prezzo di vendita e la percentuale
//di sconto e che restituisca il prezzo scontato

#include<iostream>
using namespace std;

float prezzo, PercentualeSconto, PrezzoScontato

float PrezzoScontato(float prezzo, float PercentualeSconto)
{
    PrezzoScontato=prezzo-((prezzo*PercentualeSconto)/100);

    return PrezzoScontato;
}

int main () {

   cout<<"inserire il prezzo dell'articolo:  ";
   cin>>prezzo;

   cout<<"inserire la percentuale dello sconto sull'articolo:  ";
   cin>>PercentualeSconto;

   cout<<"L'articolo scontato costa:   ";
   cin>>PrezzoScontato;

   return 0

}
