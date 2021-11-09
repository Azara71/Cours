:-include('divinite').

divinite_male(X):-divinite(X),male(X).
enfant(X,Y):-fruit_de(X,Y).
enfant(X,Y):-fruit_de(X,Y,_).
enfant(X,Y):-fruit_de(X,_,Y).
pere(X,Y):-enfant(Y,X),male(X).
mere(X,Y):-enfant(Y,X),femelle(X).
grandpere(X,Y):-pere(X,Z),pere(Z,Y).
%grandpere(X,Y):-pere(X,Z),enfant(Y,Z).
grandmere(X,Y):-mere(X,Y),pere(Z,Y).
%grandmere(X,Y):-mere(X,Z),mere(Z,Y).
frere(X,Y):-male(X),pere(P,X),pere(M,Y),mere(P,X),mere(M,Y),X\=Y.
soeur(X,Y):-femelle(X),pere(P,X),pere(M,Y),mere(P,X),mere(M,Y),X\Y.
oncle(X,Y):-frere(X,Z),pere(Z,Y).
oncle(X,Y):-frere(X,Z),mere(Z,Y).
fils_de(X,Y):-enfant(Y,X),male(X).
fille_de(X,Y):-enfant(Y,X),femelle(X).
cousin(X,Y):-fils_de(X,O),oncle(O,X).
cousin(X,Y):-fils_de(X,T),tante(T,Y).
cousine(X,Y):-fille_de(X,O),oncle(O,X).
cousine(X,Y):-fille_de(X,T),tante(T,Y).
ancetre2(X,Y):-enfant(Y,X).
ancetre2(X,Y):-enfant(Y,Z),ancetre2(X,Z).
famille(X):-famille(X,_).
famille(X):-famille(_,X).
famille(X,Y):-tante(X,Y),format(,'~a est la tante de ~a',[X,Y]).
famille(X,Y):-pere(X,Y),format(,'~aest le pere de~a',[X,Y]). 