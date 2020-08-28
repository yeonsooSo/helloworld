#pragma once
#include <string>

class Headphone {
public:
	Headphone(std::string name, int serial)
		:_name{ name }, _serial{ serial }{
		setColor();
	}
	void setColor() {
		if (_serial % 2 == 0) {
			_color = "BLACK";
		}
		else {
			_color = "WHITE";
		}
	}
	std::string getName() const {
		return _name;
	}
	int getSerial() const {
		return _serial;
	}
	std::string getColor() const {
		return _color;
	}
private:
	std::string _name;
	int _serial;
	std::string _color;
};