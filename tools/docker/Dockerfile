ARG DEBIAN_VERSION=stable
ARG UBUNTU_VERSION=focal

FROM debian:${DEBIAN_VERSION} AS debian
ARG DEBIAN_FRONTEND=noninteractive
SHELL ["/bin/bash", "-c"]
RUN apt-get update && apt-get install -y --no-install-recommends \
        build-essential \
        cmake \
        git \
        libboost-date-time-dev \
        libboost-program-options-dev \
        libboost-system-dev \
        libcrypto++-dev \
        libgeographiclib-dev \
        libssl-dev \
        ninja-build \
    && rm -rf /var/lib/apt/lists/*
COPY build_and_run_tests.sh /usr/local/bin/build_and_run_tests.sh
RUN useradd -m build-user
USER build-user
WORKDIR /home/build-user
ENTRYPOINT ["build_and_run_tests.sh"]
CMD ["/home/build-user/workspace"]

FROM ubuntu:${UBUNTU_VERSION} AS ubuntu
ARG DEBIAN_FRONTEND=noninteractive
SHELL ["/bin/bash", "-c"]
COPY --chmod=755 update_cmake.sh apt_pkg_name.sh /usr/local/bin/
RUN update_cmake.sh && apt-get update && \
    apt-get install -y --no-install-recommends \
        build-essential \
        cmake \
        git \
        libboost-date-time-dev \
        libboost-program-options-dev \
        libboost-system-dev \
        libcrypto++-dev \
        $(apt_pkg_name.sh geographiclib) \
        libssl-dev \
        ninja-build \
    && rm -rf /var/lib/apt/lists/*
COPY build_and_run_tests.sh /usr/local/bin/build_and_run_tests.sh
RUN useradd -m build-user
USER build-user
WORKDIR /home/build-user
ENTRYPOINT ["build_and_run_tests.sh"]
CMD ["/home/build-user/workspace"]
