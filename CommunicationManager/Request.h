#pragma once
#ifndef __REQUEST_H
#define __REQUEST_H

#pragma comment (lib, "winhttp.lib")

class Request
{
private:
	std::string hostname;
	int port;
	std::string requestType;
	std::string requestURL;
	HINTERNET hSession = NULL;
	HINTERNET hConnect = NULL;
	HINTERNET hRequest = NULL;

public:
	Request(std::string hostname, int port, std::string requestType, std::string requestURL);
	~Request();
	LPSTR GetData();
};


#endif // !__REQUEST_H


