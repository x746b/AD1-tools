Preparation on KALI
```bash
sudo apt update 
sudo apt install libfuse-dev
sudo apt install libtool
```


download & unpack:
```bash
wget https://github.com/al3ks1s/AD1-tools/releases/download/v1.0/ad1tools-1.0.tar.gz
tar -xvzf ad1tools-1.0.tar.gz && rm ad1tools-1.0.tar.gz 
```

default config:
```bash
cd ad1tools-1.0
./configure
make -j8
sudo make install
```

set libs
```bash
echo "/usr/local/lib" | sudo tee /etc/ld.so.conf.d/ad1tools.conf
sudo ldconfig
```

check
```bash
ad1mount
Usage: ad1mount [-qv] [-i FILE] [-m DIR] [--input=FILE] [--mnt=DIR] [--quiet] [--verbose] ad1verify [OPTIONS] -i FILENAME
```

enjoy
```bash
ad1mount -i ./Image.ad1 -m ./mount
```
