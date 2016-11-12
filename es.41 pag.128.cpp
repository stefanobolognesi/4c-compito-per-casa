/* Stefano Bolognesi 4^C
    07/11/2016*/
//Dato un elenco di reparti con l'indicazione del nome e dell'incasso giornaliero, calcolare l'incasso medio. Definire una funzione
 // per l'acquisizione e la somma dei dati e una funzione per calcolo della media.

 #include<iostream>

 using namespace std;
 int reparto;
 float incasso, SommaIncasso, media;
 int num_reparti, R;




float SommaIncasso (int reparto,float incasso,float SommaIncasso){


do  {
    SommaIncasso=0
    int num_reparti;
    num_reparti=0

 cout<<"inserisci il nume del reparto:  "<< endl;
 cin>>reparto;

 cout<<"inserisci l'incasso del reparto inserito nel passaggio precedente:  "<<endl;
 cin>>incasso;



  SommaIncasso=SommaIncasso+incasso

  num_reparti++

 cout<<"inserisci 0 se vuoi continuare a inserire, 1 se hai terminato:  "<<endl;
 cin>>R;

}while  (R=1)

return SommaIncasso;
}

float media  (float SommaIncasso, float media, int num_parametri) {


media=SommaIncasso/num_reparti


}

int main () {

        cout<<"la media degli incassi giornaglieri è:   "<<media,
 return 0;


}

















