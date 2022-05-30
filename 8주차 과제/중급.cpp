#include "Temperature.h"

int main() {
	double cel = 36.5, faren = 24.2;
	Temperature temp(cel, faren);
	cout << "¼·¾¾" << cel << "-> È­¾¾" << temp.cel2faren(cel) << endl;
	cout << "È­¾¾" << faren << "-> ¼·¾¾" << temp.faren2cel(faren) << endl;
	return 0;
}