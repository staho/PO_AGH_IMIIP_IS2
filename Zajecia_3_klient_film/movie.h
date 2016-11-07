#ifndef movie_h
#define movie_h
#include <string>

class movie{
	public:
		void print();
		movie();
		movie(movie &);
		movie(std::string, std::string, short int);
		~movie();
		std::string getTitle();
	private:
		std::string title, director;
		unsigned short int yearOfRelase;
};

#endif