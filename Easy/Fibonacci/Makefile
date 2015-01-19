#To run: java -jar Main.jar <filename>

Main.jar : Main.class
	echo Main-class: Main >Manifest
	jar cvfm Main.jar Manifest Main.class
	- rm Manifest
	chmod +x Main.jar

Main.class : Main.java
	javac $<
