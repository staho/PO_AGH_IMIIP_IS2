#include "stdafx.h"
#include "movie.h"
#include "client.h"
#include <string>
#include <iostream>

using namespace std;

#define NRMOVIES 15


int _tmain(int argc, _TCHAR* argv[])
{
	client Zbychu;
	movie * tab = new movie [NRMOVIES];
	client Brzydal("Kamil", "Stachowicz", NRMOVIES, tab, NRMOVIES);
	cout << "Film brzydala to:\n" << Brzydal.getMovie(5).getTitle() << endl;
	
	client Brudas(Brzydal);
	cout << "Film Brudasa to:\n" << Brudas.getMovie(5).getTitle() << endl;

	delete [] tab;
	system("PAUSE");
	return 0;
}

