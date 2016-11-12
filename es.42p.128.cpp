/*bolognesi 4C
  7/11/2016*/


  #include<iostream>

  using namespace std;

  string descrizione;

  float prezzo, perc_incremento, incremento;
  int num_prodotto;

  float incremento (float prezzo, float perc_incremento, string descrizione)

  {

      do {
        cout<<"inserire la descrizione del prodotto:  "<<endl;
        cin>>descrizione;
        cout<<"inserire il prezzo del prodotto:  "<<endl;
        cin>>prezzo;
        cout<<"inserire la percentuale di incemento:  "<<endl;
        cin>>perc_incremento;cout<<%;

        incremento=prezzo*(1+(perc_incremento/100))
        cout<<descrizione;endl;
        cout<<"il prezzo incrementato è:  "<<incremento<<endl;


    cout<<"se si ha terminato di inserire i prodotti premere 1, se non si ha ancora terminato premere 0: ";
    cin>>num_prodotto;
      }while (num_prodotto=0)

      return incremento:
  }
  int main () {


  }
