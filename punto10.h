typedef struct {
	
	int dia;
	int mes;
	int año;

} t_fecha;

typedef struct {

	char *nom;
	char *ape;
	t_fecha fecha_nac;
	long legajo;
	short tipo_doc;
	long documento;

} t_alumno;


void initialize (t_alumno *); //Recibe un puntero a alumno

char * convert_to_string(const t_alumno); 

short compare(const t_alumno , const t_alumno);

void destroy(const t_alumno ) ; //No se como resolverlo
