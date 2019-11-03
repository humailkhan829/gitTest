#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	char *ptr;
	size_t size;
	//Tastk 1
	system("mkdir a1part1");
	system("ls -lR");
	chdir("a1part1");
	
	//Task 2
	system("mkdir a1dir{1..3}");
	system("cd a1dir1;touch a1file{1..2}.txt;cd ..");	
	system("cd a1dir2;touch a1file{3..4}.txt;cd ..");
	system("cd a1dir3; ln -s a1file4.txt a1file5.txt; cd -; cd ..");

		
	//Task 3	
	system("ls -lR > a1part1log3.txt; ls -lR");
	//Task 4
	system("chmod 511 a1dir1/* ; chmod 515 a1dir2/*; ls -lR > a1part1log4.txt");
	system("ls -lR");

	//Task 5
	system("cd a1part1; ls -lR --si >> a1part1log5.txt ; ls -lR --sort=time >> a1part1log5.txt; ls -lR --sort=size >> a1part1log5.txt;");
	system("ls -lR --si; ls -lR --sort=time; ls -lR --sort=size; cd ..");
	

	//Task 6
	system("tar -cvf a1part1.tar .; gzip a1part1.tar; zip -r a1part1.zip .; ls -l a1part1.* > a1part1log6.txt");

	return 0;	
}

