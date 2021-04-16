FROM ubuntu:focal
MAINTAINER Hamid Ebadi
RUN apt-get update && apt-get -y install sudo

ADD install_req.sh install_req.sh
RUN ./install_req.sh

ADD . esmini-pybind11

#RUN cd esmini-pybind11/ && ./dev-building-bindings.sh

#sudo docker images
#sudo docker image rm 5388877132e6
#Error response from daemon: conflict: unable to delete 5388877132e6 (must be forced) - image is being used by stopped container f2e2c4218cf2
#sudo docker container rm f2e2c4218cf2
#sudo docker image rm 5388877132e6
