#pragma once


#include <vector>
#include <memory>

#include "../IOWrapper/OpenCV/WrapperTypes.h"


namespace lsd_slam
{

class keyframeGraphMsg
{
public:
	typedef std::shared_ptr<keyframeGraphMsg> Ptr;
	static Ptr Create()
	{
		return Ptr(new keyframeGraphMsg());
	}

	int
		numConstraints,
		numFrames;
	std::vector<GraphConstraint>
		constraintsData;
	std::vector<GraphFramePose>
		frameData;

protected:
	keyframeGraphMsg() :
		numConstraints(0),
		numFrames(0)
	{};
};

typedef const keyframeGraphMsg* keyframeGraphMsgConstPtr;

}
