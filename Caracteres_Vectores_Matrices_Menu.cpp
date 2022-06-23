#include <iostream>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include <locale.h>
using namespace::std;
void mostrarmat2(int fil1,int col1,int m2[20][20])
{int j,i;
cout<<"La segunda matriz es:"<<endl;
for(i=0;i<fil1;i=i+1)
 {cout<<"| ";
  for(j=0;j<col1;j=j+1)
  {cout<<m2[i][j]<<"  ";
  }
cout<<"|"<<endl;
 }
}
void mostrarmat1(int fil, int col, int m1[20][20])
{int j,i;
cout<<"La primera matriz es:"<<endl;
for(i=0;i<fil;i=i+1)
 {cout<<"| ";
  for(j=0;j<col;j=j+1)
  {cout<<m1[i][j]<<"  ";
  }
cout<<"|"<<endl;
 }
}//Mostrar matriz 1
void leermat2(int fil1, int col1,int m2[20][20])
{int i,j;
cout<<"Ingrese los datos de la segnda matriz"<<endl;
for(i=0;i<fil1;i=i+1)
 {for(j=0;j<col1;j=j+1)
  {cin>>m2[i][j];
  }
 }
}//leer matriz 2
void leermat1(int fil, int col,int m1[20][20])
{int i,j;
cout<<"Ingrese los datos de la primera matriz"<<endl;
for(i=0;i<fil;i=i+1)
 {for(j=0;j<col;j=j+1)
  {cin>>m1[i][j];
  }
 }
}//leer matriz 1
void mat_a(int fil,int fil1,int col,int col1,int m1[20][20],int m2[20][20])
{
int i,i1=0,i2=0,j,j1=0,j2=0,V[200]={0},k,cont,num,Vaux[200]={0},Vfinal[200]={0},V1[200]={0},Vaux1[200]={0},Vfinal1[200]={0},z=0,num1,z1=0,cont1=0,cont2;
char x='l';
//Matriz 1
mostrarmat1(fil,col,m1);
cout<<endl;
for(i=0;i<fil;i=i+1)
 {for(j=0;j<col;j=j+1)
  {V[i1]=m1[i][j];
   i1++;
  }
 }
for(i=0;i<i1;i=i+1)
 {cont=0;
  num=V[i];
  Vaux[j1]=num;
  j1=j1+1;
  for(k=0;k<i1;k=k+1)
   {if(Vaux[k]==num)
    {cont=cont+1;
	}
   }
  if(cont==1)
   {Vfinal[z]=num;
    z=z+1;
   }
 }
cout<<endl;
//Matriz 2
cout<<endl;
mostrarmat2(fil1,col1,m2);
cout<<endl;
for(i=0;i<fil1;i=i+1)
 {for(j=0;j<col1;j=j+1)
  {V1[i2]=m2[i][j];
   i2++;
  }
 }
for(i=0;i<i2;i=i+1)
 {cont2=0;
  num1=V1[i];
  Vaux1[j2]=num1;
  j2++;
  for(k=0;k<i2;k++)
   {if(Vaux1[k]==num1)
    {cont2++;
	}
   }
   if(cont2==1)
   {Vfinal1[z1]=num1;
    z1++;
   }
 }
cout<<endl;
//Elementos comunes
if(z<z1)
 {for(i=0;i<z1;i=i+1)
  {for(j=0;j<z;j=j+1)
   {if(Vfinal1[i]==Vfinal[j])
    {cont1=cont1+1;
    }
   }
  }
 }
else
 {for(i=0;i<z;i=i+1)
   {for(j=0;j<z1;j=j+1)
    {if(Vfinal[i]==Vfinal1[j])
     {cont1=cont1+1;
     }
	}
   }
 }
if(cont1>1)
 {cout<<"Las matrices tiene "<<cont1<<" elementos comunes"<<endl;
 }
else
 {cout<<"Las matrices tiene "<<cont1<<" elemento comun"<<endl;
 }
cout<<endl;
cout<<"Generando un nuevo menu de opciones, por favor esperar"<<endl;
Sleep(8000);
while(x!='1')
 {system("cls");
  cout<<"1.Regresar al menu anterior"<<endl<<"0.Salir del programa"<<endl;
  cin>>x;
  switch(x)
  {case '0':
  cout<<"Salio del programa, hasta la proxima."<<endl;
  exit(0);
  break;
  default:
  if(x=='1')
  {cout<<"Regresando al menu de matrices"<<endl;
   Sleep(3000);
  }
  else
  {cout<<"No ingreso a ninguna opcion, intente nuevamente dentro de 3 segundos"<<endl;
   Sleep(3000);
  }
  break;
  }
 }
}//Primera funcion matrices
void mat_b(int fil,int fil1,int col,int col1,int m1[20][20],int m2[20][20])
{
int i,j,m3[20][20]={0},i1=0,j1=0,k;
char x='l';
mostrarmat1(fil,col,m1);
cout<<endl;
mostrarmat2(fil1,col1,m2);
cout<<endl;
if(col==fil1)
 {for(i=0;i<fil;i=i+1)
  {for(j=0;j<col1;j=j+1)
   {m3[i][j]=0;
    for(k=0;k<col;k=k+1)
    {m3[i][j]=m3[i][j]+m1[i][k]*m2[k][j];
	}
   }
  }
  for(i=0;i<fil;i=i+1)
   {cout<<"| ";
    for(j=0;j<col1;j=j+1)
    {cout<<m3[i][j]<<" ";
	}
	cout<<" |"<<endl;
   }
 }
cout<<endl;
cout<<"Generando un nuevo menu de opciones, por favor esperar"<<endl;
Sleep(8000);
while(x!='1')
 {system("cls");
  cout<<"1.Regresar al menu anterior"<<endl<<"0.Salir del programa"<<endl;
  cin>>x;
  switch(x)
  {case '0':
  cout<<"Salio del programa, hasta la proxima."<<endl;
  exit(0);
  break;
  default:
  if(x=='1')
  {cout<<"Regresando al menu de matrices"<<endl;
   Sleep(3000);
  }
  else
  {cout<<"No ingreso a ninguna opcion, intente nuevamente dentro de 3 segundos"<<endl;
   Sleep(3000);
  }
  break;
  }
 }
}//Segunda funcion matrices
void mat_c(int fil,int fil1,int col,int col1,int m1[20][20],int m2[20][20])
{
int i,j,Vm1[200]={0},cont=0,cont1=0,i1=0,j2=0,cont2=0;
char x='l';
//Filas
mostrarmat1(fil,col,m1);
cout<<endl;
mostrarmat2(fil1,col1,m2);
cout<<endl;
if(fil==col)
 {for(i=0;i<fil;i=i+1)
  {for(j=0;j<col;j=j+1)
   {if(i==j)
    {Vm1[i1]=m1[i][j];
     i1++;
	}
   }
  }
 }
if(fil==fil1||col==col1)
 {for(i=0;i<fil1;i=i+1)
  {for(j=0;j<col1;j=j+1)
   {if(Vm1[j2]==m2[i][j])
    {cont=cont+1;
     j2++;
	}
	if(cont==fil1)
	{cont1=cont1+1;
	}
   }
   j2=0;
   cont=0;
  }
 }
cout<<"La diagonal principal de la primera matriz es igual a "<<cont1<<" filas de la segunda matriz"<<endl;
//Columnas
if(fil==col)
 {for(i=0;i<fil;i=i+1)
  {for(j=0;j<col;j=j+1)
   {if(i==j)
    {Vm1[i1]=m1[i][j];
     i1++;
	}
   }
  }
 }
if(fil==fil1||col==col1)
 {for(i=0;i<fil1;i=i+1)
  {for(j=0;j<col1;j=j+1)
   {if(Vm1[j2]==m2[j][i])
    {cont=cont+1;
     j2++;
	}
	if(cont==col1)
	{cont2=cont2+1;
	}
   }
   j2=0;
   cont=0;
  }
 }
cout<<"La diagonal principal de la primera matriz es igual a "<<cont2<<" columnas de la segunda matriz"<<endl;
cout<<endl;
cout<<"Generando un nuevo menu de opciones, por favor esperar"<<endl;
Sleep(8000);
while(x!='1')
 {system("cls");
  cout<<"1.Regresar al menu anterior"<<endl<<"0.Salir del programa"<<endl;
  cin>>x;
  switch(x)
  {case '0':
  cout<<"Salio del programa, hasta la proxima."<<endl;
  exit(0);
  break;
  default:
  if(x=='1')
  {cout<<"Regresando al menu de matrices"<<endl;
   Sleep(3000);
  }
  else
  {cout<<"No ingreso a ninguna opcion, intente nuevamente dentro de 3 segundos"<<endl;
   Sleep(3000);
  }
  break;
  }
 }
}//Tercera funcion matrices
void mostrarcad(int e,char vc[])
{int i;
cout<<"La cadena de caracteres es:"<<endl;
for(i=0;i<e;i=i+1)
 {cout<<vc[i]<<",";
 }
}//Mostrar cadena de caracteres
void leercad(int e, char vc[])
{int i;
cout<<"Ingrese los caracteres"<<endl;
for(i=0;i<e;i=i+1)
 {cin>>vc[i];
 }
}//Leer cadena caracteres
void cad_a(int e, char vc[])
{int i,cont=0,cont1=0,cont2=0;
char x='l';
mostrarcad(e,vc);
cout<<endl;
for(i=0;i<e;i=i+1)
 {if(vc[i]=='a'||vc[i]=='A'||vc[i]=='e'||vc[i]=='E'||vc[i]=='i'||vc[i]=='I'||vc[i]=='o'||vc[i]=='O'||vc[i]=='u'||vc[i]=='U')
  {cont=cont+1;
  }
  else
  {if(vc[i]=='1'||vc[i]=='2'||vc[i]=='3'||vc[i]=='4'||vc[i]=='5'||vc[i]=='6'||vc[i]=='7'||vc[i]=='8'||vc[i]=='9'||vc[i]=='0')
   {cont1=cont1+1;
   }
   else
   {cont2=cont2+1;
   }
  }
 }
cout<<"La cadena de caracteres tiene "<<cont<<" vocales"<<endl;
cout<<"La cadena de caracteres tiene "<<cont2<<" consonantes"<<endl;
cout<<"La cadena de caracteres tiene "<<cont1<<" numeros"<<endl;
cout<<endl;
cout<<"Generando un nuevo menu de opciones, por favor esperar"<<endl;
Sleep(8000);
while(x!='1')
 {system("cls");
  cout<<"1.Regresar al menu anterior"<<endl<<"0.Salir del programa"<<endl;
  cin>>x;
  switch(x)
  {case '0':
  cout<<"Salio del programa, hasta la proxima."<<endl;
  exit(0);
  break;
  default:
  if(x=='1')
  {cout<<"Regresando al menu de caracteres"<<endl;
   Sleep(3000);
  }
  else
  {cout<<"No ingreso a ninguna opcion, intente nuevamente dentro de 3 segundos"<<endl;
   Sleep(3000);
  }
  break;
  }
 }
}//Primera funcion cadena caracteres
void cad_b(int e,char vc[])
{int i,j,mayor,p,cont=0,vc1[400],ia=0,j1=0,k,z=0;
char vcaux[400]={0},vcaux1[400]={0},vcfinal[400]={0},char1,x='l';
mostrarcad(e,vc);
cout<<endl;
for(i=0;i<e;i=i+1)
 {for(j=0;j<e;j=j+1)
  {if(vc[i]==vc[j])
   {cont=cont+1;
   }
  }
  vc1[i]=cont;
  cont=0;
 }
cout<<endl;
mayor=vc1[0];
p=0;
for(i=1;i<e;i=i+1)
 {if(mayor<vc1[i])
  {mayor=vc1[i];
   p=i;
  }
 }
for(i=0;i<e;i=i+1)
 {if(vc1[i]==mayor)
  {vcaux[ia]=vc[i];
   ia++;
  }
 }
for(i=0;i<ia;i=i+1)
 {cont=0;
  char1=vcaux[i];
  vcaux1[j1]=char1;
  j1=j1+1;
  for(k=0;k<ia;k=k+1)
   {if(vcaux1[k]==char1)
    {cont=cont+1;
	}
   }
  if(cont==1)
   {vcfinal[z]=char1;
    z=z+1;
   }
 }
cout<<"La letras que mas se repiten son: ";
for(i=0;i<z;i=i+1)
 {cout<<vcfinal[i]<<",";
 }
cout<<endl;
cout<<"Generando un nuevo menu de opciones, por favor esperar"<<endl;
Sleep(8000);
while(x!='1')
 {system("cls");
  cout<<"1.Regresar al menu anterior"<<endl<<"0.Salir del programa"<<endl;
  cin>>x;
  switch(x)
  {case '0':
  cout<<"Salio del programa, hasta la proxima."<<endl;
  exit(0);
  break;
  default:
  if(x=='1')
  {cout<<"Regresando al menu de caracteres"<<endl;
   Sleep(3000);
  }
  else
  {cout<<"No ingreso a ninguna opcion, intente nuevamente dentro de 3 segundos"<<endl;
   Sleep(3000);
  }
  break;
  }
 }
}//Segunda funcion cadena caracteres
void cad_c(int e,char vc[])
{int i,cont=0,j=0;
char e1,vc2[400],x='l';
cout<<"Ingrese el caracter que desea eliminar de la cadena"<<endl;
cin>>e1;
mostrarcad(e,vc);
cout<<endl;
for(i=0;i<e;i=i+1)
 {if(e1!=vc[i])
  {vc2[j]=vc[i];
   cont=cont+1;
   j=j+1;
  }
  else
  {vc2[i]=vc[i+1];
  }
 }
cout<<"La nueva cadena de caracteres es:"<<endl;
for(i=0;i<cont;i=i+1)
 {cout<<vc2[i]<<",";
 }
cout<<endl;
cout<<"Generando un nuevo menu de opciones, por favor esperar"<<endl;
Sleep(8000);
while(x!='1')
 {system("cls");
  cout<<"1.Regresar al menu anterior"<<endl<<"0.Salir del programa"<<endl;
  cin>>x;
  switch(x)
  {case '0':
  cout<<"Salio del programa, hasta la proxima."<<endl;
  exit(0);
  break;
  default:
  if(x=='1')
  {cout<<"Regresando al menu de caracteres"<<endl;
   Sleep(3000);
  }
  else
  {cout<<"No ingreso a ninguna opcion, intente nuevamente dentro de 3 segundos"<<endl;
   Sleep(3000);
  }
  break;
  }
 }
}//Tercera funcion cadena de caracteres
void mostrarvecs(int t,int r,int v1[],int v2[])
{int i;
cout<<"El vector 1 es:"<<endl;
for(i=0;i<t;i=i+1)
 {cout<<v1[i]<<",";
 }
cout<<endl<<"El vector 2 es:"<<endl;
for(i=0;i<r;i=i+1)
 {cout<<v2[i]<<",";
 }
cout<<endl;
}//Mostrar vectores
void leervec1(int t,int v1[])
{int i;
cout<<"Ingrese los numeros del vector"<<endl;
for(i=0;i<t;i=i+1)
 {cin>>v1[i];
 }
system("cls");
}//Leer vector1
void leervec2(int r,int v2[])
{int i;
cout<<"Ingrese los numeros del vector"<<endl;
for(i=0;i<r;i=i+1)
 {cin>>v2[i];
 }
}//Leer vector2
void vec_a(int t,int r,int v1[],int v2[],int v3[])
{int i,j,a;
char x='l';
for(i=0;i<t;i=i+1)
 {v3[i]=v1[i];
 }
for(j=0;j<r;j=j+1)
 {v3[i++]=v2[j];
 }
cout<<"El vector unido es:"<<endl;
for(i=0;i<t+r;i=i+1)
 {cout<<v3[i]<<",";
 }
cout<<endl<<"El vector ordenado de forma ascendente es:"<<endl;
for(j=0;j<(t+r-1);j=j+1)
 {for(i=j+1;i<t+r;i=i+1)
  {if(v3[j]>v3[i])
   {a=v3[j];
    v3[j]=v3[i];
    v3[i]=a;
   }
  }
 }
for(i=0;i<t+r;i=i+1)
 {cout<<v3[i]<<",";
 }
cout<<endl;
cout<<"Generando un nuevo menu de opciones, por favor esperar"<<endl;
Sleep(8000);
while(x!='1')
 {system("cls");
  cout<<"1.Regresar al menu anterior"<<endl<<"0.Salir del programa"<<endl;
  cin>>x;
  switch(x)
  {case '0':
  cout<<"Salio del programa, hasta la proxima."<<endl;
  exit(0);
  break;
  default:
  if(x=='1')
  {cout<<"Regresando al menu de vectores"<<endl;
   Sleep(3000);
  }
  else
  {cout<<"No ingreso a ninguna opcion, intente nuevamente dentro de 3 segundos"<<endl;
   Sleep(3000);
  }
  break;
  }
 }
}//Primera funcion vectores
void vec_b(int t,int r,int v1[],int v2[])
{int i,j,cont;
char x='l';
mostrarvecs(t,r,v1,v2);
cout<<"El primer vector comparado con el segundo vector"<<endl;
for(i=0;i<t;i=i+1)
 {cont=0;
 for(j=0;j<r;j=j+1)
  {if(v1[i]==v2[j])
   {cont=cont+1;
   }
  }
  cout<<"El numero "<<v1[i]<<" esta "<<cont<<" veces"<<endl;
 }
cout<<"El segudno vector comparado con el primer vector"<<endl;
for(i=0;i<r;i=i+1)
 {cont=0;
 for(j=0;j<t;j=j+1)
  {if(v2[i]==v1[j])
   {cont=cont+1;
   }
  }
  cout<<"El numero "<<v2[i]<<" esta "<<cont<<" veces"<<endl;
 }
cout<<endl;
cout<<"Generando un nuevo menu de opciones, por favor esperar"<<endl;
Sleep(8000);
while(x!='1')
 {system("cls");
  cout<<"1.Regresar al menu anterior"<<endl<<"0.Salir del programa"<<endl;
  cin>>x;
  switch(x)
  {case '0':
  cout<<"Salio del programa, hasta la proxima."<<endl;
  exit(0);
  break;
  default:
  if(x=='1')
  {cout<<"Regresando al menu de vectores"<<endl;
   Sleep(3000);
  }
  else
  {cout<<"No ingreso a ninguna opcion, intente nuevamente dentro de 3 segundos"<<endl;
   Sleep(3000);
  }
  break;
  }
 }
}//Segunda funcin vectores
void vec_c(int t,int r,int v1[],int v2[])
{int i,j,a=0;
char x='l';
mostrarvecs(t,r,v1,v2);
if(t<=r)
{for(i=0;i<r;i=i+1)
 {a=a+v1[i]*v2[i];
 }
}
else
{for(i=0;i<t;i=i+1)
 {a=a+v1[i]*v2[i];
 }
}
cout<<"El producto punto entre los vectores es: "<<a<<endl;
cout<<endl;
cout<<"Generando un nuevo menu de opciones, por favor esperar"<<endl;
Sleep(8000);
while(x!='1')
 {system("cls");
  cout<<"1.Regresar al menu anterior"<<endl<<"0.Salir del programa"<<endl;
  cin>>x;
  switch(x)
  {case '0':
  cout<<"Salio del programa, hasta la proxima."<<endl;
  exit(0);
  break;
  default:
  if(x=='1')
  {cout<<"Regresando al menu de vectores"<<endl;
   Sleep(3000);
  }
  else
  {cout<<"No ingreso a ninguna opcion, intente nuevamente dentro de 3 segundos"<<endl;
   Sleep(3000);
  }
  break;
  }
 }
}//Tercera funcion vectores
void vec_d(int t,int r,int v1[],int v2[])
{int i,j,n=1,cont=0,cont1=0,cont2=0;
char x='l';
mostrarvecs(t,r,v1,v2);
for(i=0;i<t;i=i+1)
 {cont=0;
  n=1;
  if(v1[i]>0)
  {while(n<=v1[i])
   {if(v1[i]%n==0)
    {cont=cont+1;
    }
    n=n+1;
   }
  }
 if(cont==2)
  {cont1=cont1+1;
  }
 }
for(i=0;i<r;i=i+1)
 {cont=0;
  n=1;
  if(v2[i]>0)
  {while(n<=v2[i])
   {if(v2[i]%n==0)
    {cont=cont+1;
    }
    n=n+1;
   }
  }
 if(cont==2)
  {cont2=cont2+1;
  }
 }
if(cont1<cont2)
 {cout<<"El segundo vector tiene mas numeros primos que el primer vector"<<endl;
 }
else
 {if(cont1==cont2)
  {cout<<"Los dos vectores tienen la misma cantidad de numeros primos"<<endl;
  }
  else
  {cout<<"El primer vector tiene mas numeros primos que el segundo vector"<<endl;
  }
 }
cout<<endl;
cout<<"Generando un nuevo menu de opciones, por favor esperar"<<endl;
Sleep(8000);
while(x!='1')
 {system("cls");
  cout<<"1.Regresar al menu anterior"<<endl<<"0.Salir del programa"<<endl;
  cin>>x;
  switch(x)
  {case '0':
  cout<<"Salio del programa, hasta la proxima."<<endl;
  exit(0);
  break;
  default:
  if(x=='1')
  {cout<<"Regresando al menu de vectores"<<endl;
   Sleep(3000);
  }
  else
  {cout<<"No ingreso a ninguna opcion, intente nuevamente dentro de 3 segundos"<<endl;
   Sleep(3000);
  }
  break;
  }
 }
}//Cuarta funcion vectores
void menuvec(int t, int r,int v1[],int v2[],int v3[])
{char c;
system("cls");
mostrarvecs(t,r,v1,v2);
cout<<endl<<"Ingrese la opcion que desea:"<<endl<<"a.Ordenar vectores"<<endl<<"b.Comparar vectores"<<endl<<"c.Producto punto"<<endl<<"d.Mayor primo"<<endl<<"f.Salir del programa"<<endl<<"g.Regresar al menu anterior"<<endl<<"h.Ingresar nuevos vectores"<<endl;
cin>>c;
if(c!='g'&&c!='G')
{while(c!='g'&&c!='G')
{switch(c)
 {case 'a':
  system("cls");
  cout<<"Entro a la opcion ordenar vectores"<<endl;
  vec_a(t,r,v1,v2,v3);
  break;
  case 'A':
  system("cls");
  cout<<"Entro a la opcion ordenar vectores"<<endl;
  vec_a(t,r,v1,v2,v3);
  break;
  case 'b':
  system("cls");
  cout<<"Entro a la opcion comparar vectores"<<endl;
  vec_b(t,r,v1,v2);
  break;
  case 'B':
  system("cls");
  cout<<"Entro a la opcion comparar vectores"<<endl;
  vec_b(t,r,v1,v2);
  break;
  case 'c':
  system("cls");
  cout<<"Entro a la opcion producto punto"<<endl;
  vec_c(t,r,v1,v2);
  break;
  case 'C':
  system("cls");
  cout<<"Entro a la opcion producto punto"<<endl;
  vec_c(t,r,v1,v2);
  break;
  case 'd':
  system("cls");
  cout<<"Entro a la opcion mayor primo"<<endl;
  vec_d(t,r,v1,v2);
  case 'D':
  system("cls");
  cout<<"Entro a la opcion mayor primo"<<endl;
  vec_d(t,r,v1,v2);
  break;
  case 'h':
  system("cls");
  cout<<"Entro a la opcion ingresar nuevos vectores"<<endl;
  cout<<"Ingrese el tamaño del primer vector"<<endl;
  cin>>t;
  while(t<0||t>201)
  {cout<<"Ingrese el tamaño del primer vector"<<endl;
   cin>>t;
  }
  leervec1(t,v1);
  system("cls");
  cout<<"Ingrese el tamaño del segundo vector vector"<<endl;
  cin>>r;
  while(r<0||r>201)
  {cout<<"Ingrese el tamaño del segundo vector"<<endl;
   cin>>r;
  }
  leervec2(r,v2);
  system("cls");
  mostrarvecs(t,r,v1,v2);
  break;
  case 'H':
  system("cls");
  cout<<"Entro a la opcion ingresar nuevos vectores"<<endl;
  cout<<"Ingrese el tamaño del primer vector"<<endl;
  cin>>t;
  while(t<0||t>201)
  {cout<<"Ingrese el tamaño del primer vector"<<endl;
   cin>>t;
  }
  leervec1(t,v1);
  system("cls");
  cout<<"Ingrese el tamaño del segundo vector vector"<<endl;
  cin>>r;
  while(r<0||r>201)
  {cout<<"Ingrese el tamaño del segundo vector"<<endl;
   cin>>r;
  }
  leervec2(r,v2);
  system("cls");
  mostrarvecs(t,r,v1,v2);
  break;

  case 'f':
  cout<<"Salio del programa, hasta la proxima."<<endl;
  exit(0);
  break;
  case 'F':
  cout<<"Salio del programa, hasta la proxima."<<endl;
  exit(0);
  break;
  default:
  {cout<<"No ingreso a ninguna opcion, intente nuevamente dentro de 3 segundos"<<endl;
   Sleep(3000);
  }
  break;
 }
system("cls");
mostrarvecs(t,r,v1,v2);
cout<<endl<<"Ingrese la opcion que desea:"<<endl<<"a.Ordenar vectores"<<endl<<"b.Comparar vectores"<<endl<<"c.Producto punto"<<endl<<"d.Mayor primo"<<endl<<"f.Salir del programa"<<endl<<"g.Regresar al menu anterior"<<endl<<"h.Ingresar nuevos vectores"<<endl;
cin>>c;
}
}
else
{switch(c)
 {case 'g':
  cout<<"Regresando al menu principal"<<endl;
  Sleep(3000);
  break;
  case 'G':
  cout<<"Regresando al menu principal"<<endl;
  Sleep(3000);
  break;
 }
}
}//Menu vectores
void menuchar(int e,char vc[])
{char n;
system("cls");
mostrarcad(e,vc);
cout<<endl<<endl<<"Ingrese la opcion que desea:"<<endl<<"a.Contar letras"<<endl<<"b.Letra repetida"<<endl<<"c.Eliminar caracter"<<endl<<"d.Salir del programa"<<endl<<"e.Regresar al menu anterior"<<endl<<"f.Nueva cadena de caracteres"<<endl;
cin>>n;
if(n!='e'&&n!='E')
{while(n!='e'&&n!='E')
{switch(n)
 {case 'a':
  system("cls");
  cout<<"Entro a la opcion contar letras"<<endl;
  cad_a(e,vc);
  break;
  case 'A':
  system("cls");
  cout<<"Entro a la opcion contar letras"<<endl;
  cad_a(e,vc);
  break;
  case 'b':
  system("cls");
  cout<<"Entro a la opcion letra repetida"<<endl;
  cad_b(e,vc);
  break;
  case 'B':
  system("cls");
  cout<<"Entro a la opcion letra repetida"<<endl;
  cad_b(e,vc);
  break;
  case 'c':
  system("cls");
  cout<<"Entro a la opcion eliminar caracter"<<endl;
  cad_c(e,vc);
  break;
  case 'C':
  system("cls");
  cout<<"Entro a la opcion eliminar caracter"<<endl;
  cad_c(e,vc);
  break;
  case 'f':
  	system("cls");
  cout<<"Entro a la opcion nueva cadena de caracteres"<<endl;
  cout<<"Ingrese el tamaño de la cadena de caracteres"<<endl;
  cin>>e;
  while(e<0||e>401)
  {cout<<"Ingrese el tamaño de la cadena de caracteres"<<endl;
  cin>>e;
  }
  leercad(e,vc);
  system("cls");
  mostrarcad(e,vc);
  break;
  case 'F':
  system("cls");
  cout<<"Entro a la opcion nueva cadena de caracteres"<<endl;
  cout<<"Ingrese el tamaño de la cadena de caracteres"<<endl;
  cin>>e;
  while(e<0||e>401)
  {cout<<"Ingrese el tamaño de la cadena de caracteres"<<endl;
  cin>>e;
  }
  leercad(e,vc);
  system("cls");
  mostrarcad(e,vc);
  break;
  case 'd':
  cout<<"Salio del programa, hasta la proxima."<<endl;
  exit(0);
  break;
  case 'D':
  cout<<"Salio del programa, hasta la proxima."<<endl;
  exit(0);
  break;
  default:
  {cout<<"No ingreso a ninguna opcion, intente nuevamente dentro de 3 segundos"<<endl;
   Sleep(3000);
  }
  break;
 }
system("cls");
mostrarcad(e,vc);
cout<<endl<<endl<<"Ingrese la opcion que desea:"<<endl<<"a.Contar letras"<<endl<<"b.Letra repetida"<<endl<<"c.Eliminar caracter"<<endl<<"d.Salir del programa"<<endl<<"e.Regresar al menu anterior"<<endl<<"f.Nueva cadena de caracteres"<<endl;
cin>>n;
}
}
else
{switch(n)
 {case 'e':
  cout<<"Regresando al menu principal"<<endl;
  Sleep(3000);
  break;
  case 'E':
  cout<<"Regresando al menu principal"<<endl;
  Sleep(3000);
  break;
 }
}
}//Menu caracteres
void menumatriz(int fil,int fil1,int col,int col1,int m1[20][20],int m2[20][20])
{char n;
system("cls");
mostrarmat1(fil,col,m1);
mostrarmat2(fil1,col1,m2);
cout<<endl<<endl<<"Ingrese la opcion que desea:"<<endl<<"a.Elementos comunes"<<endl<<"b.Multiplicacion matricial"<<endl<<"c.Comparar diagonal"<<endl<<"d.Salir del programa"<<endl<<"e.Regresar al menu anterior"<<endl<<"f.Ingresar nuevas matrices"<<endl;
cin>>n;
if(n!='e'&&n!='E')
{while(n!='e'&&n!='E')
{switch(n)
 {case 'a':
  system("cls");
  cout<<"Entro a la opcion elementos comunes"<<endl;
  mat_a(fil,fil,col,col1,m1,m2);
  break;
  case 'A':
  system("cls");
  cout<<"Entro a la opcion elementos comunes"<<endl;
  mat_a(fil,fil,col,col1,m1,m2);
  break;
  case 'b':
  system("cls");
  cout<<"Entro a la opcion multiplicacion matricial"<<endl;
  mat_b(fil,fil,col,col1,m1,m2);
  break;
  case 'B':
  system("cls");
  cout<<"Entro a la opcion multiplicacion matricial"<<endl;
  mat_b(fil,fil,col,col1,m1,m2);
  break;
  case 'c':
  system("cls");
  cout<<"Entro a la opcion comparar diagonal"<<endl;
  mat_c(fil,fil,col,col1,m1,m2);
  break;
  case 'C':
  system("cls");
  cout<<"Entro a la opcion comparar diagonal"<<endl;
  mat_c(fil,fil,col,col1,m1,m2);
  break;
  case 'f':
  	system("cls");
  cout<<"Entro a la opcion nuevas matrices"<<endl;
  cout<<"Ingrese el tamaño de las filas de la primera matriz"<<endl;
  cin>>fil;
  while(fil<0||fil>21)
  {cout<<"Ingrese el tamaño de las filas de la primera matriz"<<endl;
   cin>>fil;
  }
  cout<<"Ingrese el tamaño de las columnas de la primera matriz"<<endl;
  cin>>col;
  while(col<0||col>21)
  {cout<<"Ingrese el tamaño de las columnas de la primera matriz"<<endl;
   cin>>col;
  }
  leermat1(fil,col,m1);
  system("cls");
  cout<<"Ingrese el tamaño de las filas de la segunda matriz"<<endl;
  cin>>fil1;
  while(fil1<0||fil1>21)
  {cout<<"Ingrese el tamaño de las filas de la segunda matriz"<<endl;
   cin>>fil1;
  }
  cout<<"Ingrese el tamaño de las columnas de la segunda matriz"<<endl;
  cin>>col1;
  while(col1<0||col1>21)
  {cout<<"Ingrese el tamaño de las columnas de la segunda matriz"<<endl;
   cin>>col1;
  }
  leermat2(fil1,col1,m2);
  system("cls");
  mostrarmat1(fil,col,m1);
  mostrarmat2(fil1,col1,m2);
  break;
  case 'F':
  system("cls");
  cout<<"Entro a la opcion nuevas matrices"<<endl;
  cout<<"Ingrese el tamaño de las filas de la primera matriz"<<endl;
  cin>>fil;
  while(fil<0||fil>21)
  {cout<<"Ingrese el tamaño de las filas de la primera matriz"<<endl;
   cin>>fil;
  }
  cout<<"Ingrese el tamaño de las columnas de la primera matriz"<<endl;
  cin>>col;
  while(col<0||col>21)
  {cout<<"Ingrese el tamaño de las columnas de la primera matriz"<<endl;
   cin>>col;
  }
  leermat1(fil,col,m1);
  system("cls");
  cout<<"Ingrese el tamaño de las filas de la segunda matriz"<<endl;
  cin>>fil1;
  while(fil1<0||fil1>21)
  {cout<<"Ingrese el tamaño de las filas de la segunda matriz"<<endl;
   cin>>fil1;
  }
  cout<<"Ingrese el tamaño de las columnas de la segunda matriz"<<endl;
  cin>>col1;
  while(col1<0||col1>21)
  {cout<<"Ingrese el tamaño de las columnas de la segunda matriz"<<endl;
   cin>>col1;
  }
  leermat2(fil1,col1,m2);
  system("cls");
  mostrarmat1(fil,col,m1);
  mostrarmat2(fil1,col1,m2);
  break;
  case 'd':
  cout<<"Salio del programa, hasta la proxima."<<endl;
  exit(0);
  break;
  case 'D':
  cout<<"Salio del programa, hasta la proxima."<<endl;
  exit(0);
  break;
  default:
  {cout<<"No ingreso a ninguna opcion, intente nuevamente dentro de 3 segundos"<<endl;
   Sleep(3000);
  }
  break;
 }
system("cls");
mostrarmat1(fil,col,m1);
mostrarmat2(fil1,col1,m2);
cout<<endl<<endl<<"Ingrese la opcion que desea:"<<endl<<"a.Elementos comunes"<<endl<<"b.Multiplicacion matricial"<<endl<<"c.Comparar diagonal"<<endl<<"d.Salir del programa"<<endl<<"e.Regresar al menu anterior"<<endl<<"f.Ingresar nuevas matrices"<<endl;
cin>>n;
}
}
else
{switch(n)
 {case 'e':
  cout<<"Regresando al menu principal"<<endl;
  Sleep(3000);
  break;
  case 'E':
  cout<<"Regresando al menu principal"<<endl;
  Sleep(3000);
  break;
 }
}
}//Menu matriz
void funmenprin()
{
int r,t,e,fil,col,fil1,col1,v1[200]={0},v2[200]={0},v3[200]={0},m1[20][20]={0},m2[20][20]={0};
char vc[400],x=0;
while(x!='4')
{system("cls");
cout<<"Ingrese la opcion que desea:"<<endl;
cout<<"1.Vectores"<<endl<<"2.Cadena de caracteres"<<endl<<"3.Matrices"<<endl<<"4.Salir del programa"<<endl;
cin>>x;
system("cls");
switch(x)
 {case '1':
  cout<<"Entro a la opcion vectores"<<endl;
  cout<<"Ingrese el tamaño del primer vector"<<endl;
  cin>>t;
  while(t<0||t>201)
  {cout<<"Ingrese el tamaño del primer vector"<<endl;
   cin>>t;
  }
  leervec1(t,v1);
  system("cls");
  cout<<"Ingrese el tamaño del segundo vector vector"<<endl;
  cin>>r;
  while(r<0||r>201)
  {cout<<"Ingrese el tamaño del segundo vector"<<endl;
   cin>>r;
  }
  leervec2(r,v2);
  system("cls");
  mostrarvecs(t,r,v1,v2);
  menuvec(t,r,v1,v2,v3);
  break;
  case '2':
  cout<<"Entro a la opcion cadena de caracteres"<<endl;
  cout<<"Ingrese el tamaño de la cadena de caracteres"<<endl;
  cin>>e;
  while(e<0||e>401)
  {cout<<"Ingrese el tamaño de la cadena de caracteres"<<endl;
  cin>>e;
  }
  leercad(e,vc);
  system("cls");
  mostrarcad(e,vc);
  cout<<endl;
  menuchar(e,vc);
  break;
  case '3':
  cout<<"Entro a la opcion matrices"<<endl;
  cout<<"Ingrese el tamaño de las filas de la primera matriz"<<endl;
  cin>>fil;
  while(fil<0||fil>21)
  {cout<<"Ingrese el tamaño de las filas de la primera matriz"<<endl;
   cin>>fil;
  }
  cout<<"Ingrese el tamaño de las columnas de la primera matriz"<<endl;
  cin>>col;
  while(col<0||col>21)
  {cout<<"Ingrese el tamaño de las columnas de la primera matriz"<<endl;
   cin>>col;
  }
  leermat1(fil,col,m1);
  system("cls");
  cout<<"Ingrese el tamaño de las filas de la segunda matriz"<<endl;
  cin>>fil1;
  while(fil1<0||fil1>21)
  {cout<<"Ingrese el tamaño de las filas de la segunda matriz"<<endl;
   cin>>fil1;
  }
  cout<<"Ingrese el tamaño de las columnas de la segunda matriz"<<endl;
  cin>>col1;
  while(col1<0||col1>21)
  {cout<<"Ingrese el tamaño de las columnas de la segunda matriz"<<endl;
   cin>>col1;
  }
  leermat2(fil1,col1,m2);
  system("cls");
  mostrarmat1(fil,col,m1);
  mostrarmat2(fil1,col1,m2);
  menumatriz(fil,fil1,col,col1,m1,m2);
  break;
  case '4':
  cout<<"Salio del programa, hasta la proxima."<<endl;
  exit(0);
  break;
  default:
  cout<<"No ingreso a ninguna opcion, intente nuevamente en 3 segundos"<<endl;
  Sleep(3000);
  break;
 }
}
}//Menu principal
main ()
{setlocale(LC_ALL, "spanish");
funmenprin();
system ("pause");
}
