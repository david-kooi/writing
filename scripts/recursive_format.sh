# Recursively format all files beneath cwd format_contents(){
	while [ "$1" ]; do
		if [ -d "$1" ]; then
			format_contents "$1"/*
		else
			 fmt -w 80 "$1" > temp.txt mv temp.txt "$1"
		fi shift

	done

}

format_contents "$1"
