# Add .txt to all files in directory 
# (Ignore existing .txt files)
add_txt_extension(){
	for FILE in $(ls -I*.txt); do
			mv $FILE $FILE.txt
	done

}

add_txt_extension 


