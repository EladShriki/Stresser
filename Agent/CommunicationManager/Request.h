#pragma once
#ifndef __REQUEST_H
#define __REQUEST_H
#define CPPHTTPLIB_OPENSSL_SUPPORT 
#include "httplib.h"

enum class Methods {
	eGET,
	ePOST,
	eDELETE,
	ePUT
};

class Request
{
public:
	Request(std::string url, Methods requestType, std::string path);

	~Request() = default;

	std::string GetData();

private:
	httplib::Client m_connection;
	Methods m_requestType;
	std::string m_path;
};


#endif // !__REQUEST_H


