#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct s_fraction
{
	int num;
	int den;
} t_fraction;

typedef struct s_mixedn
{
	int nbr;
	t_fraction *frac;
} t_mixedn;

bool	fr_isproper(t_fraction *f) {

	return (f->num < f->den) ? true : false;
}

bool	fr_isimproper(t_fraction *f) {

	return (f->num >= f->den) ? true : false;
}

void	fr_print_fraction(t_fraction *f) {

	printf("%d/%d\n", f->num, f->den);
}

void	fr_print_mixedn(t_mixedn *n) {

	printf("%d+%d/%d\n", n->nbr, n->frac->num, n->frac->den);
}

t_mixedn	*fr_fractomix(t_fraction *f) {

	int quo = 0, rem = 0;
	quo = f->num/f->den;
	rem = f->num%f->den;

	t_fraction *mf = malloc(sizeof(t_fraction));
	mf->num = rem;
	mf->den = f->den;

	t_mixedn *mn = malloc(sizeof(t_mixedn));
	mn->nbr = quo;
	mn->frac = mf;

	return mn;
}

t_fraction	*fr_mixtofrac(t_mixedn *mn) {

	t_fraction *nf = malloc(sizeof(t_fraction));
	nf->num = mn->nbr * mn->frac->den + mn->frac->num;
	nf->den = mn->frac->den;

	return nf;
}

int main() {

	t_fraction f2 = {5, 3};
	printf("fraction : 5/3\n");
	fr_print_fraction(&f2);

	printf("converted to mix number:\n");
	t_mixedn *mn2 = fr_fractomix(&f2);
	fr_print_mixedn(mn2);
	
	printf("converted back into a fraction:\n");
	t_fraction *f3 = fr_mixtofrac(mn2);
	fr_print_fraction(f3);

	free(mn2->frac);
	free(mn2);
	free(f3);
}
