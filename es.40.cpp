/* Bolognesi 4^C */

//data la retta y=mx+q e ilpunto P(xp,yp), controllare se il punto appartiene alla retta

#include<iostream>

using namespace std;

float m,y,q,xp,yp,

bool appartiene (float m, float q, float y, float xp, float yp)
{
    y=m*xp+q
    if (y==yp)  return appartene=true ;
        else
            return appartiene=false

}

int main () {

  cout<<"inserire il coefficiente angolare:  ";
  cin>>m;
  cout<<"inserire l' intercetta:  ";
  cin>>q;
  cout<<"inserire l' ascissa del punto p:  ";
  cin>>xp;
  cout<<"inserire l'ordinata del punto p: ";
  cin>>yp;


if (appartiene=true)  cout<<"il punto appartiene alla retta!";
    else cout<<"il punto non appartiene alla retta!";
return 0;
}
