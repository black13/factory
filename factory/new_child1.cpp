#include "new_base.h"
#include "new_child1.h"
#include "factory.pb.h"

new_child1 * new_child1::create(const google::protobuf::Message * msg)
{
	return new new_child1(msg);	
}