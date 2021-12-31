#pragma once
#include<memory>
#include<vector>
#include<iostream>
#include<string>
#include"Subscriber.h"
#include<algorithm>
using namespace std;

class MailServer
{
	vector<shared_ptr<Subscriber>>subscribers;
private:
	void subcribe(shared_ptr<Subscriber>pt);
	void unsubcribe(shared_ptr<Subscriber>pt);
	void notify();
};

