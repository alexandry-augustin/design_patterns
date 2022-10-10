#include "Receiver.h"
#include "Invoker.h"
#include "OpenCommand.h"
#include "CloseCommand.h"

int main(int argc, char* argv[])
{
	Receiver receiver;
	Invoker invoker; 
	OpenCommand openCommand;
	CloseCommand closeCommand;

	openCommand.setReceiver(&receiver);
	closeCommand.setReceiver(&receiver);
//	OpenCommand openCommand(&receiver);
//	CloseCommand closeCommand(&receiver);

	invoker.add(&openCommand);
	invoker.add(&closeCommand);

	invoker.run();

	return 0;
}
