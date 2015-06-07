#include "document.h"

void add_child2(const char *name)
{
	factory::child2*ptr=dynamic_cast<factory::child2*>(Document::getdoc()->create("child2"));
	ptr->set_name(name);
}