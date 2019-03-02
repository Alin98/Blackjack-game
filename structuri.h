#ifndef STRUCTURI_H_INCLUDED
#define STRUCTURI_H_INCLUDED

 struct Carti
 {
     int valoare;
     char culoare;
 };

 struct Jucator
 {
     struct Carti c[NRCARTI];
     int NrCastig;
 } J, C;


#endif // STRUCTURI_H_INCLUDED
