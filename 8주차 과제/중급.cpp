#include "Temperature.h"

int main() {
	double cel = 36.5, faren = 24.2;
	Temperature temp(cel, faren);
	cout << "����" << cel << "-> ȭ��" << temp.cel2faren(cel) << endl;
	cout << "ȭ��" << faren << "-> ����" << temp.faren2cel(faren) << endl;
	return 0;
}