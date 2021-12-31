#pragma once
class Subscriber
{public:
	virtual void getNotification(int) = 0;
	virtual ~Subscriber();
};

