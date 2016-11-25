/*Bolognesi 4^C*/


# Includ < iostream >
using  namespace  std ;
int K [ 10 ];
int i;
int s;

int  main ()

{

    for (i = 0 ; i < 10 ; i ++)
      {
        cout <<" inserisci il valore " << i + 1 << " Valore: " ;
        cin >> K [i];
      }
 for (i = 0 ; i < 10 ; i ++)

    {

        if (K [i]> 5 )

        s = s + K [i];

    }



    cout << " La somma delle Componenti superiori di  5 e ': " << s << endl;



  return 0 ;
