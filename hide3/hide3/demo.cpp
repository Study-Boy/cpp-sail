#include <iostream>
#include <stdlib.h>
#include "Soldier.h"

/*****************************************
�̳й�ϵ�е����أ�
Ҫ��
1��Person�࣬���ݳ�Ա��m_strName,
			��Ա���������캯����play()
2��Soldier�࣬���ݳ�Ա����
			��Ա���������캯����play().work()
******************************************/

int main(){
	Soldier soldier;
	soldier.play(7);
	soldier.work();

	soldier.Person::play();
	system("pause");
	return 0;
}


