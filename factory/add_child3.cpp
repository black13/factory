#include "document.h"

void add_child3(const char *name)
{
	factory::child3*ptr=dynamic_cast<factory::child3*>(Document::getdoc()->create("child3"));
	ptr->set_name(name);
}