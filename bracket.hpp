typedef unsigned int uint;

class bracket{
	
private:
	uint bracketIndex;
	uint OpenPosition;
	uint ClosePosition;
	std::string dataInsideTheBraket;
public:
	bracket(){}
	
	void addOpen(uint position){}
	void addClose(uint position){}
	bool isOpen(){}
	bool isClosed(){}
	
	uint startPosition(){}
	uint endPosition(){}
	
	void value(){}

	void setdata(std::string const&  stringsequence){}

	auto extractData(std::shared_ptr<bracket> const dataToExtract){	}
	
	std::string data(){}
};

class brackets{
private:
	std::vector<std::shared_ptr<bracket>> bracketsPool;
public:

	brackets(){};
	
	void open(uint position){}
	
	void close(uint position,uint BracketIndex){}

	auto operator[](uint bracketIndex){}
	
	auto size(){}
};

