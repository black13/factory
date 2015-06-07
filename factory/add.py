import factory_pb2
import sys


def add_document():
    doc = factory_pb2.document()
    for x in range(0, 10):
        a = doc.children1.add()
        a.name = "name_{0}".format(x)
        b = doc.children2.add()
        b.name = "name_{0}".format(x)
        c = doc.children3.add()
        c.name = "name_{0}".format(x)
    return doc

def main():
    doc = add_document()
    f = open(r'types.dat', "wb")
    f.write(doc.SerializeToString())
    f.close()
	
	
main()