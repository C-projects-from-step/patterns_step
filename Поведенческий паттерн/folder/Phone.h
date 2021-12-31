#pragma once
#include <iostream>
#include<string>
#include "Subscriber.h"
using namespace std;

class Phone :
	public Subscriber
{public:
	void getNotification(int)override;
};

