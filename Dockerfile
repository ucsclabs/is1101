FROM gcc
MAINTAINER Kasun De Zoysa
RUN apt-get update && apt-get install -y \
vim \
gdb \
git
