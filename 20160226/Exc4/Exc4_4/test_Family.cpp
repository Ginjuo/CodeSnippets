#include "Family.h"
#include <string>

using namespace std;

int main(void)
{
	
	//Family timtim((Person ("111111-1111", "timfar", "timtim")), (Person("111111-2222", "timmor", "timtim")), (Person("111111-3333", "timsoen", "timtim")), (Person("111111-4444", "timdatter", "timtim")));

	//Person a, b, c, d;
	//Person e;
	//Family timtim2(a, b, c, e);


	//timtim2.print();

	Person personArray[size] = { Person("010108 - 0001", "Peter", "Hansen"), 
		Person("020108 - 0002", "Ib", "Hald", "Bo"),
		Person(),
		Person("030108 - 0003") };

	Family tim(personArray);

	tim.print();



	return 0;
}