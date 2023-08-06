﻿#pragma once
#include "functii.h"


/*5. Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale m şi n
(0<m≤10, 0<n≤10) şi elementele unui tablou bidimensional cu m linii şi n coloane care
reţine numere naturale mai mici decât 100; programul va construi şi va afişa pe ecran un
nou tablou bidimensional cu n linii şi m coloane, obţinut din primul prin rotirea acestuia în
sens trigonometric cu 90o
, ca în exemplu. (10p.)
Exemplu: pentru m=4,
n=5 şi tabloul:
21 22 23 24 25
26 27 28 29 30
31 32 33 34 35
36 37 38 39 40
se va afişa: 25 30 35 40
24 29 34 39
23 28 33 38
22 27 32 37
21 26 31 36 */
void solutia1() {

	generare(4, 5);

}

/*1. Într-un penar sunt opt creioane: trei sunt roşii, două albastre şi trei negre. Dacă scoatem din
penar cinci creioane, câte posibilităţi există ca cel puţin două dintre ele să fie roşii? (4p.)
a. 6 b. 12 c. 15 d. 3 */
void solutia2() {

	//b.12

}

/*Se consideră subprogramul f definit alăturat.
Ce valoare are f(5)? Dar f(100)? (6p.)
long f(int n)
{
 if(n<0) return 0;
 else return f(n-2)+n;
}*/
long f(int n)
{
	if (n < 0) return 0;
	else return f(n - 2) + n;
}
void solutia3() {

	cout << f(5) << " " << f(100);

}

/*Fişierul text bac.txt conţine pe prima linie un număr natural n (n<100), iar pe a doua
linie, separate prin câte un spaţiu, n numere naturale de cel mult 8 cifre fiecare.
Scrieţi un program C/C++ care citeşte de la tastatură un număr natural k (k<50) precum
şi numerele din fişierul bac.txt şi afişează pe ecran, cu câte un spaţiu între ele, toate
numerele de pe a doua linie a fişierului care sunt puteri ale lui k. Un număr natural x este
putere a lui k dacă există un număr natural y astfel încât x=k
y
. Dacă nu există un
asemenea număr pe a doua linie a fişierului, se afişează pe ecran mesajul NU.
3.
Exemplu: dacă se citeşte de la tastatură k=2, iar
fişierul are conţinutul alăturat,
8
32 56 317 809 256 2 1 60
atunci pe ecran se
afişează numerele:
32 256 2 1 (10p.)
*/
void solutia4() {

	afisare(2);

}

/*4. a) Scrieţi în limbajul C/C++ doar antetul unui subprogram cif, care primeşte prin
intermediul primului parametru, nr, un număr natural cu cel mult 9 cifre şi furnizează prin
intermediul celui de-al doilea parametru, s, suma cifrelor din scrierea lui nr. (4p.)
b) Scrieţi programul C/C++ care citeşte de la tastatură un număr natural n (0<n<25), apoi
un şir de n numere naturale nenule cu cel mult 9 cifre fiecare şi care afişează pe ecran,
separate prin câte un spaţiu, numerele din şir care au suma cifrelor maximă, folosind
apeluri utile ale subprogramului cif.
Exemplu: dacă pentru n=8 se citeşte şirul de numere 274 56018 354 8219 293 287
932 634 atunci, pe ecran, se afişează numerele 56018 8219.*/
void solutia5() {
	int n = 8, v[100] = { 274, 56018, 354 ,8219,293 ,287,932 ,634 };
	afisarea(n, v);

}
