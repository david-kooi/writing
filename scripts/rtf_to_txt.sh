# Converts all .rtf files within a directory 
# into .txt files
for FILE in $(ls *.rtf); do 
	unoconv -f txt $FILE 
done
