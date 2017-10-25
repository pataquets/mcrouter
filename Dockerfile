FROM gcc

COPY . /src/mcrouter/
WORKDIR /src/mcrouter/

RUN \
  autoreconf --install

RUN ./configure
RUN make
RUN make install

#ENTRYPOINT [ "mcrouter" ]
#CMD [ "--help" ]
