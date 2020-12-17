#include "Request.h"

int main() {

	Request req("https://google.com", Methods::eGET, "/");
	std::cout << req.GetData() << std::endl;

	system("pause");

	return 0;
}
