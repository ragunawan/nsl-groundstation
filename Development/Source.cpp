#include "MyForm.h"
#include <fstream>

using namespace std;
using namespace Development;

/*double Data(char func[], int i, char *var)
{
	int a = 0;
	int j = 0;
	char x[10] = {};
	while (func[i] != ',')
	{
		x[j] = func[i];
		*(var + j) = func[i];
		i++;
		j++;
	}
	a = 0;
	i++;
	return i;

}*/

[STAThreadAttribute]
int main(array<System::String^>^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew MyForm());
	return 0;
}