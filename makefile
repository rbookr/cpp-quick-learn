all: 
	./do.js
	./pandoc.sh
	rm tmp.md

clean:
	rm -rf out.pdf
