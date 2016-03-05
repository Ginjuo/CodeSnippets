void WebLink::print()
{
	std::cout << address_;
}


void Subject::print()
{
	std::cout << text_ << std::endl;

	if ( // Add code here )
		std::cout << "No further information avaiable" << std::endl << std::endl;
	else
	{
		std::cout << "Further information here: ";
		// Add code here
		std::cout << std::endl << std::endl;
	}
}