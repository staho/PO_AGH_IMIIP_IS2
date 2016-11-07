#include "stdafx.h"
#include "movie.h"
#include <iostream>

std::string movie::getTitle(){
return title;
}

void movie::print(){
	std::cout << "T: " << title << " D: " << director << " Y: " << yearOfRelase << std::endl;
};

movie::movie(){
	title = "Titanic";
	director = "Jon_Doe";
	yearOfRelase = 2015;
}
movie::movie(movie &x){
	title = x.title;
	director = x.director;
	yearOfRelase = x.yearOfRelase;

}
movie::movie(std::string title, std::string director, short int yearOfRelase){
	title = title;
	director = director;
	yearOfRelase = yearOfRelase;
}
movie::~movie(){
std::cout << "Usunieto film" << std::endl;
}