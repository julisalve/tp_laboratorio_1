#ifndef employee_H_INCLUDED
#define employee_H_INCLUDED
#include "LinkedList.h"
#include "general.h"
typedef struct
{
    int id;
    char nombre[128];
    int horasTrabajadas;
    int sueldo;
}Employee;

Employee* employee_new();
Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr, char* sueldo);
void employee_delete(Employee *this);

int employee_setId(Employee* this,int id);
int employee_getId(Employee* this,int* id);

int employee_setNombre(Employee* this,char* nombre);
int employee_getNombre(Employee* this,char* nombre);

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas);
int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas);

int employee_setSueldo(Employee* this,int sueldo);
int employee_getSueldo(Employee* this,int* sueldo);

Employee* buscarIdEmpleado(LinkedList* pArrayListEmployee, int id);

int employee_sortPorId( void * datoUno, void *datoDos);
int employee_sortPorNombre( void * datoUno, void *datoDos);
int employee_sortPorHorasTrabajadas( void * datoUno, void *datoDos);
int employee_sortPorSueldo( void * datoUno, void *datoDos);
#endif // employee_H_INCLUDED
