# Converts all .rtf files within a directory # Converts all .rtf files in
#a directory into .txt files 
rtf_to_txt(){

		for FILE in $(ls "$1"/*.rtf); do
			unoconv -f txt $FILE
		done
}

rtf_to_txt "$1"
