FROM mcr.microsoft.com/devcontainers/cpp:1-debian-12

# Install additional tools
RUN apt-get update && apt-get install -y \
    gcc \
    g++ \
    gdb \
    cmake \
    make \
    ninja-build \
    valgrind \
    clang \
    clang-format \
    clang-tidy \
    lldb \
    pkg-config \
    curl \
    wget \
    git \
    && rm -rf /var/lib/apt/lists/*

# Set default working directory
WORKDIR /workspaces/cpp-project

# Verify installations
RUN gcc --version && g++ --version && cmake --version
