from cmake_example import *
import cmake_example

print(add(2, 3))
my_dog = Pet('Pluto', 5)
print(my_dog.get_name())
print(my_dog.get_hunger())
my_dog.go_for_a_walk()
print(my_dog.get_hunger())

# Polynomial
my_pol = Polynomial(4,5,6,7,8)
my_pol.Set(1,2,3,4,5)
print(my_pol.GetA())
print(my_pol.GetB())
print(my_pol.GetC())
print(my_pol.GetD())
my_pol.SetA(14)
my_pol.SetB(15)
my_pol.SetC(16)
my_pol.SetD(17)
print(my_pol.GetA())
print(my_pol.GetB())
print(my_pol.GetC())
print(my_pol.GetD())

# OSIPointStruct and OSIPoints
osi_struct = OSIPointStruct(1.1,2.2,3.3,4.4,5.5)
print(osi_struct)
print(OSIPoints([osi_struct, osi_struct]))
osi_points = OSIPoints()
print(osi_points.Set([osi_struct, osi_struct]))
print(osi_points.GetPoints())
print(osi_points.GetPoints()[0].s)
print(osi_points.GetPoints()[0].x)
print(osi_points.GetPoints()[0].y)
print(osi_points.GetPoints()[0].z)
print(osi_points.GetPoints()[0].h)
print(osi_points.GetPoint(0))
print(osi_points.GetPoint(1))
print(osi_points.GetXfromIdx(0))
print(osi_points.GetYfromIdx(0))
print(osi_points.GetZfromIdx(0))
print(osi_points.GetNumOfOSIPoints())



"""
my_osi_point = OSIPoints([(1,2,3,4,5)])


[{
  "s": 1,
  "x": 2,
  "y": 3,
  "z":4,
  "h":5,
}, {
  "s": 1,
  "x": 2,
  "y": 3,
  "z":4,
  "h":5,
}]
"""


