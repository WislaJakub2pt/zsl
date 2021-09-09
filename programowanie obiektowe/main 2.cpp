#include 

#include 

int Obwod(int nBok1, int nBok2)

{

  return 2 * (nBok1 + nBok2);

}

int Pole(int nBok1, int nBok2)

{

  return nBok1 * nBok2;

}
int main()

{

	int nBok1;

	std::cout << "Podaj dlugosc pierwszego boku: ";

	std::cin >> nBok1;


	int nBok2;

	std::cout << "Podaj dlugosc drugiego boku: ";

	std::cin >> nBok2;


	std::cout << "Obwod prostokata wynosi: " << Obwod(nBok1, nBok2) << std::endl;

	std::cout << "Pole prostokata wynosi: " << Pole(nBok1, nBok2) << std::endl;

	getch();

	return 0;

}
