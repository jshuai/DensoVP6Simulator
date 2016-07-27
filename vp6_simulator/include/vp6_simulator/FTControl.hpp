#ifndef FT_CONTROL
#define FT_CONTROL
#include <ros.h>
#include "main_window.hpp"

namespace vp6_simulator{

	class FTControl {
	
	public:
		FTControl(MainWindow & window);
		

		//
		void updateJntPositions(std::vector<double> angles);

		std::vector<double> readJntPositions();
		


	private:
	
		ros::NodeHandle * handle1;
		ros::AsyncSpinner * spinner1;
		//ros::
	
	
	
	};
	
}

#endif
