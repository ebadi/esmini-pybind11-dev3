import pyroadmanager.roadmanager
print(dir(pyroadmanager.roadmanager));

from pyroadmanager.roadmanager import *
g = Geometry(1,2,3,4,5, Geometry.GEOMETRY_TYPE_UNKNOWN )
print(g.GetHdg()) # prints 4.0