FROM ubuntu:26.04

ENV DEBIAN_FRONTEND=noninteractive

ENV LANG=fr_FR.UTF-8
ENV LC_ALL=fr_FR.UTF-8

RUN apt-get update && apt-get install -y \
    unminimize \
    build-essential \
    gcc \
    g++ \
    gdb \
    make \
    cmake \
    valgrind \
    git \
    vim \
    nano \
    man-db \
    manpages \
    manpages-posix \
    manpages-dev \
    manpages-posix-dev \
    groff-base \
    less \
    locales \
    clang \
    clangd \
    clang-format \
    && yes | unminimize \
    && locale-gen fr_FR.UTF-8 \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /workspace

CMD ["/bin/bash"]