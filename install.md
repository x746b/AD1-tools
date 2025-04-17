$ wget https://github.com/al3ks1s/AD1-tools/releases/download/v1.0/ad1tools-1.0.tar.gz
$ tar -xvzf ad1tools-1.0.tar.gz

$ ./configure
$ make -j8
$ sudo make install

$ echo "/usr/local/lib" | sudo tee /etc/ld.so.conf.d/ad1tools.conf
$ sudo ldconfig

$ ad1mount
Usage: ad1mount [-qv] [-i FILE] [-m DIR] [--input=FILE] [--mnt=DIR] [--quiet] [--verbose] ad1verify [OPTIONS] -i FILENAME

$ sudo ad1mount -i ./Image.ad1 -m ./mount 
