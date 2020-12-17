#include "Request.h"

Request::Request(std::string url, Methods requestType, std::string path) : 
	m_connection(url.c_str()), m_requestType(requestType), m_path(path) {}


std::string Request::GetData() {
	
	switch (this->m_requestType)
	{
		case Methods::eGET: {
			httplib::Result res = this->m_connection.Get(this->m_path.c_str());
			if (res->status == 200) {
				return "";
			}

			return res->body;
		}
		
		case Methods::ePOST: {
			httplib::Result res = this->m_connection.Post(this->m_path.c_str());
			if (res->status == 200) {
				return "";
			}

			return res->body;
		}

		case Methods::eDELETE: {
			httplib::Result res = this->m_connection.Delete(this->m_path.c_str());
			if (res->status == 200) {
				return "";
			}

			return res->body;
		}
							
		case Methods::ePUT: {
			httplib::Result res = this->m_connection.Put(this->m_path.c_str());
			if (res->status == 200) {
				return "";
			}

			return res->body;
		}

		default:
			return "";
	}
}
