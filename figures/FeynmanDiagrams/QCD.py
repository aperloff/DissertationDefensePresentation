from pyfeyn.user import *

processOptions()
fd = FeynDiagram()
nOut = [1,1,2]

for iout,out in enumerate(nOut):
    inX = -4+(iout*4+(0.5 if iout>0 else 0))
    in1 = Point(inX,  2)
    in2 = Point(inX, -2)

    if out==1:
        out1 = Point(inX+4,0)
    else:
        out1 = Point(inX+4,2)
        out2 = Point(inX+4,-2)

    vtx = Vertex(inX+2,0, mark=CIRCLE)

    #l1 = Label("QCD", x=0, y=5)

    if iout==0:
        fa1  = Fermion(in1, vtx).addArrow().addLabel("\Pq")
        fa2  = Fermion(vtx, in2).addArrow().addLabel("\Paq")
    else:
        glu_in_1 = Gluon(in1, vtx).set3D().addLabel("\Pgluon")
        glu_in_2 = Gluon(in2, vtx).set3D().addLabel("\Pgluon", displace=0.15)

    if out==1:
        glu1 = Gluon(vtx, out1).set3D().addLabel("\Pgluon")
    else:
        glu1 = Gluon(out1,vtx).set3D().addLabel("\Pgluon", displace=0.15)
        glu2 = Gluon(out2,vtx).set3D().addLabel("\Pgluon")

    fd.draw("QCD.pdf")

#Example Command:
#python QCD.py
