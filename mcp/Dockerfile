FROM debian:trixie-slim

RUN apt-get update && apt-get install -y --no-install-recommends         openjdk-21-jdk-headless python3 python3-pip python3-venv ca-certificates     && rm -rf /var/lib/apt/lists/*

ENV JAVA_HOME=/usr/lib/jvm/java-21-openjdk-amd64
ENV GHIDRA_INSTALL_DIR=/ghidra

COPY ghidra/ghidra_12.1.4_PUBLIC/ /ghidra/
COPY server/server.py /opt/server.py

RUN python3 -m venv /opt/venv     && /opt/venv/bin/pip install --no-index -f /ghidra/Ghidra/Features/PyGhidra/pypkg/dist pyghidra     && /opt/venv/bin/pip install fastmcp

ENV PROJECT_DIR=/project PROJECT_NAME=OpenRow2 PORT=8191
EXPOSE 8191
WORKDIR /ghidra
CMD ["/opt/venv/bin/python", "/opt/server.py"]
