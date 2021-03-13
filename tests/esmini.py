# -*- coding: utf-8 -*-

import pyesminilib
from pyesminilib import *
fn = '/home/wave/repositories/esmini-pybind11/esmini/resources/xosc/lane_change.xosc'
pyesminilib.SE_Init(fn,1,0,0,0)

"""
esmini GIT REV: 06f0360
esmini GIT TAG: 
esmini GIT BRANCH: master
esmini BUILD VERSION: N/A - client build
esminiLib.cpp / 104 / ConvertArguments(): Player arguments:  viewer --osc /home/wave/repositories/esmini-pybind11/esmini/resources/xosc/lane_change.xosc --window 60 60 800 400 --disable_controllers
python3: malloc.c:2379: sysmalloc: Assertion `(old_top == initial_top (av) && old_size == 0) || ((unsigned long) (old_size) >= MINSIZE && prev_inuse (old_top) && ((unsigned long) old_end & (pagesize - 1)) == 0)' failed.
Aborted (core dumped)
"""
