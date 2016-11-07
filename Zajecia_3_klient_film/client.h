#ifndef client_h
#define client_h
#include <string>
#include "movie.h"

class client{
	private:
		unsigned int iid;
		static unsigned int nrOfClients;
		std::string name, surname;
		const unsigned int limitOfMovies;
		movie *taken;
	public:
		movie getMovie(int);
		client();
		client(std::string, std::string, const unsigned int, movie *, int);
		client(const client &);
		~client();
};

#endif