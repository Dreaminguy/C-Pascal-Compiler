entier i;	
somme(entier a,entier b)
{
	retour a + b;
}		
souprictop(entier a,entier b)
{
	retour a - b;
}
mul(entier a,entier b)
{
	retour a * b;
}
div(entier a, entier b)
{
	retour a / b;
}
main()  				
entier choix, entier a, entier b, entier resultat;
{
	
	choix = lire();
	a = lire();
	b = lire();
	si ( choix == 'd') alors
	{
		resultat = div(a,b);
	}
	si ( choix == 'm') alors
	{
		resultat = mul(a,b);
	}
	si ( choix == 'a') alors
	{
		resultat = somme(a,b);
	}
	si ( choix == 's') alors
	{
		resultat = souprictop(a,b);
	}
	ecrire(resultat);
}
