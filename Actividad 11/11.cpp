#include <iostream>
using namespace std;
int cola[10]; 
int push;
int pop;

void Inicializar()
{
  push = 0;
  pop = -1;
}

void Push(int numero)
{
  if( push != pop )
    cola[push] = numero;

  if( pop == -1 )
    pop = push; 
    push = (push+1)%10;
}

int Pop()
{
  int devolver = -1; }
  if( pop != -1 )
  {
    devolver = cola[pop];
    pop = (pop+1)%10;
    if( pop == push )
      pop = -1; 
  }
  return devolver; 
}



int main()
{
  Inicializar();
  Push(2);
  Push(4);

  cout <<  Pop() << endl; 
  cout <<  Pop() << endl; 
  cout <<  Pop(); 
}
