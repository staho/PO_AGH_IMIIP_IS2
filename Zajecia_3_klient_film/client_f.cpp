#include "stdafx.h"
#include "movie.h"
#include "client.h"
#include <iostream>

using namespace std;

unsigned int client::nrOfClients;

client::client() : limitOfMovies(10){
	nrOfClients++;
	iid = nrOfClients;
	name = "Jan";
	surname = "Kowalski";
}
client::client(string name, string surname, const unsigned int limit, movie *tab, int sizeOfTab) : limitOfMovies(limit){
	nrOfClients++;
	this->name = name;
	this->surname = surname;
	this->iid = iid;
	this->taken = tab;

}
client::client(const client &x) : limitOfMovies(x.limitOfMovies){
	nrOfClients++;	
	name = x.name;
	surname = x.surname;
	iid = x.iid;

	taken = new movie [limitOfMovies];
	for(int i = 0; i < limitOfMovies; i++){
		taken[i] = x.taken[i];
	}
}
client::~client(){
	nrOfClients--;
}
movie client::getMovie(int which){
	return taken[which - 1];
}