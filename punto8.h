
typedef struct {
	
	short dia;
	short mes;
	long año;

} t_fecha;

typedef struct {

	char nom[50];
	char ape[50];
	t_fecha fecha_nac;
	long legajo;
	short tipo_doc;
	long documento;

} t_alumno;



typedef struct {

	char *nom;
	char *ape;
	t_fecha fecha_nac;
	long legajo;
	short tipo_doc;
	long documento;

} t_alumno_b;
