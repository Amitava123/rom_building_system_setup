# Rom Building System Setup
### <<< Make your System capable of custom ROM building >>>


First make sure to install git and configure it, and install g++ or this won't work :p

Then clone the repository -->
  
	$ git clone https://github.com/Amitava123/rom_building_system_setup -b patch-1 <dir>
* add any directory at the end or keep it empty

Use this to setup the complete system :-
	
	$ g++ fullsetup.cpp -o fullsetup.out
	$ ./fullsetup.out

Then open the ~/.bashrc file -

	$ nano ~/.bashrc
	
	** Search for these lines in the .bashrc file, add these if not found -
	
	# set PATH so it includes user's private bin if it exists
	if [ -d "$HOME/bin" ] ; then
		PATH="$HOME/bin:$PATH"
	fi
	
	** Again search for these lines in the .bashrc file, add these if not found -
	
	# add Android SDK platform tools to path
	if [ -d "$HOME/platform-tools" ] ; then
		PATH="$HOME/platform-tools:$PATH"
	fi
	
Then run:-

	$ source ~/.bashrc
	
##	OR

### <<< Partial Installations >>>
####For installing only SDK :-
  
	$ g++ install_sdk.cpp -o install_sdk.out
	$ ./install_sdk.out
  
Then open the ~/.bashrc file -

	$ nano ~/.bashrc
	
	** Search for these lines in the .bashrc file, add these if not found -
	
	# add Android SDK platform tools to path
	if [ -d "$HOME/platform-tools" ] ; then
		PATH="$HOME/platform-tools:$PATH"
	fi
	
Then run:-

	$ source ~/.bashrc
	
	
####For installing other packages :-
  
	$ g++ install_packages.cpp -o install_packages.out
	$ ./install_packages.out



####For installing only repo :-
  
	$ g++ install_repo.cpp -o install_repo.out
	$ ./install_repo.out
	
Then open the ~/.bashrc file -

	S nano ~/.bashrc
	
	** Search for these lines in the .bashrc file, add these if not found -
	
	# set PATH so it includes user's private bin if it exists
	if [ -d "$HOME/bin" ] ; then
		PATH="$HOME/bin:$PATH"
	fi
  
Then run:-

	$ source ~/.bashrc
