/*
 * FileReader.cpp
 *
 *  Created on: Oct 8, 2017
 *      Author: keith
 */
#include <iostream>
#include <fstream>
#include "../327_proj3_test/includes/FileIO.h"
#include "../327_proj3_test/includes/constants.h"

using namespace std;

int KP_FileIO::getFileContents(const std::string &filename, std::string &contents)
{
	//local variables
	ifstream inputFile;
	vector<string> myEntryVector;
	string line;
	string temp = "";

	//make sure 'contents' is empty
	contents.clear();

	//open up 'filename' to read
	inputFile.open( filename, ios::in );
	if( !inputFile.is_open() )
		return COULD_NOT_OPEN_FILE_TO_READ;

	//need something to store a new liine from the file

	//loop through the file until the end
	while( !inputFile.eof() ) {
		getline( inputFile, line );
					if( line.empty() )
						break;

					//append this new line to 'contents'

				myEntryVector.push_back(line);
				contents.append(line);
	}


	//once finished, close the file if its open
	inputFile.close();

	//exit function
	return SUCCESS;
}

int KP_FileIO::writeVectortoFile(const std::string filename,std::vector<std::string> &myEntryVector)
{
	// Local variables
	ofstream outputFile;

	//TODO fill in
	//open up 'filename' to write
	outputFile.open( filename, std::ofstream::out | std::ofstream::trunc );
	if( !outputFile.is_open() )
		return COULD_NOT_OPEN_FILE_TO_WRITE;

	//loop through the vector via iterators
		//push each entry to the file

	for( string entrys : myEntryVector ) {
			outputFile
				<< entrys;
		}

	//once finished, close the file if its open
	//exit the function
	outputFile.close();
	return SUCCESS;
}





































