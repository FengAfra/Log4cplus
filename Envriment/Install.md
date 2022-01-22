安装log4cplus:
	
    cd Envriment
	tar -jxvf log4cplus-2.0.5.tar.bz2
    cd log4cplus-2.0.5
	./configure
	make
	sudo make install


如果需要指定安装路径可使⽤--prefix参数, 否则将缺省安装到/usr/local⽬录下。 
如果需要单线程版本可通过参数-enable-threads=no指定, 否则默认将安装多线程版本。
