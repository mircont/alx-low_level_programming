#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *  * str_concat - a function that concatenates two strings.
 *   *
 *    * @s1: input to string 1
 *     * @s2: input to string 2
 *      *
 *       * Return: NULL on faliure
 *       */

char *str_concat(char *s1, char *s2) {

	  if (s1 == NULL) {
		      s1 = "";
		        }
	    if (s2 == NULL) {
		        s2 = "";
			  }


	      int len = strlen(s1) + strlen(s2) + 1;


	        char *s = malloc(len);
		  if (s == NULL) {
			      return NULL;
			        }


		    strcpy(s, s1);


		      strcpy(s + strlen(s1), s2);

		        
		        return s;
}

