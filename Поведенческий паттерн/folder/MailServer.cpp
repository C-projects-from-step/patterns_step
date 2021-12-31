#include "MailServer.h"

void MailServer::subcribe(shared_ptr<Subscriber>pt)
{
	subscribers.push_back(pt);
}

void MailServer::unsubcribe(shared_ptr<Subscriber>pt)
{

	auto p = find(subscribers.begin(), subscribers.end(), pt);
	if (p != subscribers.end())
		subscribers.erase(p);
}

void MailServer::notify()
{
	for (const auto &el : subscribers) {
		el->getNotification(5);
	}
}
