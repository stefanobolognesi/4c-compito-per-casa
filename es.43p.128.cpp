/*Bolognesi 4C
  11/11/2016*/


  #include<iostream>

  using namespace std;

  char candidato1, candidato2;
  int voti1, voti2, voti_tot;

  float perc_candidato1, perc_candidato2;

  int main ()
  {
      cout<<"inserisci il nome del primo candidato:    "<<endl;
      cin>>candidato1;
      cout<<"inserisci il nome del secondo candidato:   "<<endl;
      cin>>candidato2;

      cout<<"inserisci i voti presi dal primo candidato:  "<<endl;ù
      cin>>voti1;
      cout<<"inserisci i voti presi dal secondo cadidato:   "<<endl;
      cin>>voti2;

      voti_tot=voti1+voti2

      float perc_candidato1 (int voti_tot, int voti1, float perc_candidato1)
      float perc_candidato2 (int voti_tot, int voti2, float perc_candidato2)
      void risultatoBallottaggio ()

      return 0;
  }

  float perc_candidato1 (int voti_tot, int voti1, float perc_candidato1)
  {
      perc_candidato1=(voti1*100)/voti_tot
      return perc_candidato1;
  }

  float perc_candidato2 (int voti_tot, int voti2, float perc_candidato2)
  {
      perc_candidato2=(voti2*100)/voti_tot
      return perc_candidato2;
  }

 void risultatoBallottaggio ()
 {
     if (perc_candidato1>perc_candidato2)
     {
         cout<<candidato1<<perc_candidato1<<endl<<endl<<endl;
         cout<<candidato2<<perc_candidato2;
     }  else

     {
       cout<<candidato2<<perc_candidato2<<endl<<endl<<endl;
        cout<<candidato1<<perc_candidato1;
     }
 }
