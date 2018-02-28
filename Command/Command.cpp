#include "Command.h"
#include <iostream>
using namespace std;

Command::Command()
{
}


Command::~Command()
{
}

void Receiver::Action()
{
	cout << "Action of Receiver" << endl;
}

Invoker::Invoker(Command * pCommand):m_pCommand(pCommand)
{
}

Invoker::~Invoker()
{
	delete m_pCommand;
	m_pCommand = NULL;
}

void Invoker::Invoke()
{
	if (m_pCommand != NULL) {
		m_pCommand->Execute();
	}
}

ConcreateCommand::ConcreateCommand(Receiver * pReceiver):m_pReceiver(pReceiver)
{
}

ConcreateCommand::~ConcreateCommand()
{
	delete m_pReceiver;
	m_pReceiver = NULL;
}

void ConcreateCommand::Execute()
{
	if (m_pReceiver != NULL) {
		m_pReceiver->Action();
	}
	cout << "Execute by ConcreateCommand" << endl;
}
