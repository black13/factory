#include "document.h"
#include "simple1.h"
void add_child1(const char *name)
{
	//factory::child1*ptr=dynamic_cast<factory::child1*>(Document::getdoc()->create("child1"));
	simple1 * ptr= dynamic_cast<simple1*>(Document::getdoc()->create("child1"));
	factory::child1 *p = static_cast<factory::child1*>(ptr);
	//ptr->set_name(name);
}