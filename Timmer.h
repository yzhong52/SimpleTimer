#ifndef _TIMMER_H
#define _TIMEER_H

#include <sstream> 
#include <string>

class Timmer {
public:
	static void start( const std::string& clock_name = "" ) {

	}

	static void end( const std::string& name ) {

	}

	static std::string summery( void ) {
		std::stringstream ss; 
		ss << "+---------------+--------------+---------------+----------------------+" << std::endl; 
		ss << "| Function Name | Running Time | Excuted Times | Everage Running Time |" << std::endl; 
		ss << "+---------------+--------------+---------------+----------------------+" << std::endl; 
		return ss.str();
	}
private:
	Timmer() { }
	Timmer& Instance() { 
		static Timmer timmer; 
		return timmer; 
	}
}; 

#endif 