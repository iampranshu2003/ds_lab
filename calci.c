#include <gtk/gtk.h>
#include "calci.h"
#include <string.h>
#include <stdlib.h>
#include "evaluate.c"
int sign;
int flag = -1;
/*
flag = 1 for sin
flag = 2 for cos
flag = 3 for tan
flag = 4 for sinh
flag = 5 for cosh
flag = 6 for tanh
flag = 7 for log
flag = 8 for ln
flag = 9 for square root
flag = 10 for absolute Value
flag = 11 for ceil
flag = 12 for floor
*/
int argc;
char **argv;
static void clicked(GtkWidget *widget, gpointer data) {
	GtkTextBuffer *buffer;
     	GtkTextMark *mark;
     	GtkTextIter iter;
     	const gchar *text;
	char* button_num = (char*)data;
	gtk_entry_set_text(GTK_ENTRY(w->entry), button_num);
     	buffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (w->textview));
     	text = gtk_entry_get_text (GTK_ENTRY (w->entry));

     	mark = gtk_text_buffer_get_insert (buffer);
     	gtk_text_buffer_get_iter_at_mark (buffer, &iter, mark);
     	gtk_text_buffer_insert (buffer, &iter, text, -1);
	gtk_window_set_default_size (GTK_WINDOW (window), 165, 265);
}

static void Setabs(GtkWidget *widget, gpointer data) {
	GtkTextBuffer *buffer;
     	GtkTextMark *mark;
     	GtkTextIter iter;
     	const gchar *text;
	char* button_num = (char*)data;
	gtk_entry_set_text(GTK_ENTRY(w->entry), button_num);
     	buffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (w->textview));
     	text = gtk_entry_get_text (GTK_ENTRY (w->entry));
	flag = 10;
     	mark = gtk_text_buffer_get_insert (buffer);
     	gtk_text_buffer_get_iter_at_mark (buffer, &iter, mark);
     	gtk_text_buffer_insert (buffer, &iter, text, -1);
	gtk_window_set_default_size (GTK_WINDOW (window), 165, 265);
}

static void Setroot(GtkWidget *widget, gpointer data) {
	GtkTextBuffer *buffer;
     	GtkTextMark *mark;
     	GtkTextIter iter;
     	const gchar *text;
	char* button_num = (char*)data;
	gtk_entry_set_text(GTK_ENTRY(w->entry), button_num);
     	buffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (w->textview));
     	text = gtk_entry_get_text (GTK_ENTRY (w->entry));
	flag = 9;
     	mark = gtk_text_buffer_get_insert (buffer);
     	gtk_text_buffer_get_iter_at_mark (buffer, &iter, mark);
     	gtk_text_buffer_insert (buffer, &iter, text, -1);
	gtk_window_set_default_size (GTK_WINDOW (window), 165, 265);
}

static void setsin(GtkWidget *widget, gpointer data) {
	GtkTextBuffer *buffer;
     	GtkTextMark *mark;
     	GtkTextIter iter;
     	const gchar *text;
	char* button_num = (char*)data;
	flag = 1;
	gtk_entry_set_text(GTK_ENTRY(w->entry), button_num);
     	buffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (w->textview));
     	text = gtk_entry_get_text (GTK_ENTRY (w->entry));

     	mark = gtk_text_buffer_get_insert (buffer);
     	gtk_text_buffer_get_iter_at_mark (buffer, &iter, mark);
     	gtk_text_buffer_insert (buffer, &iter, text, -1);
	gtk_window_set_default_size (GTK_WINDOW (window), 165, 265);
}

static void setcos(GtkWidget *widget, gpointer data) {
	GtkTextBuffer *buffer;
     	GtkTextMark *mark;
     	GtkTextIter iter;
     	const gchar *text;
	char* button_num = (char*)data;
	flag = 2;
	gtk_entry_set_text(GTK_ENTRY(w->entry), button_num);
     	buffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (w->textview));
     	text = gtk_entry_get_text (GTK_ENTRY (w->entry));

     	mark = gtk_text_buffer_get_insert (buffer);
     	gtk_text_buffer_get_iter_at_mark (buffer, &iter, mark);
     	gtk_text_buffer_insert (buffer, &iter, text, -1);
	gtk_window_set_default_size (GTK_WINDOW (window), 165, 265);
}

static void settan(GtkWidget *widget, gpointer data) {
	GtkTextBuffer *buffer;
     	GtkTextMark *mark;
     	GtkTextIter iter;
     	const gchar *text;
	char* button_num = (char*)data;
	flag = 3;
	gtk_entry_set_text(GTK_ENTRY(w->entry), button_num);
     	buffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (w->textview));
     	text = gtk_entry_get_text (GTK_ENTRY (w->entry));

     	mark = gtk_text_buffer_get_insert (buffer);
     	gtk_text_buffer_get_iter_at_mark (buffer, &iter, mark);
     	gtk_text_buffer_insert (buffer, &iter, text, -1);
	gtk_window_set_default_size (GTK_WINDOW (window), 165, 265);
}

static void setsinh(GtkWidget *widget, gpointer data) {
	GtkTextBuffer *buffer;
     	GtkTextMark *mark;
     	GtkTextIter iter;
     	const gchar *text;
	char* button_num = (char*)data;
	flag = 4;
	gtk_entry_set_text(GTK_ENTRY(w->entry), button_num);
     	buffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (w->textview));
     	text = gtk_entry_get_text (GTK_ENTRY (w->entry));

     	mark = gtk_text_buffer_get_insert (buffer);
     	gtk_text_buffer_get_iter_at_mark (buffer, &iter, mark);
     	gtk_text_buffer_insert (buffer, &iter, text, -1);
	gtk_window_set_default_size (GTK_WINDOW (window), 165, 265);
}

static void setcosh(GtkWidget *widget, gpointer data) {
	GtkTextBuffer *buffer;
     	GtkTextMark *mark;
     	GtkTextIter iter;
     	const gchar *text;
	char* button_num = (char*)data;
	flag = 5;
	gtk_entry_set_text(GTK_ENTRY(w->entry), button_num);
     	buffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (w->textview));
     	text = gtk_entry_get_text (GTK_ENTRY (w->entry));

     	mark = gtk_text_buffer_get_insert (buffer);
     	gtk_text_buffer_get_iter_at_mark (buffer, &iter, mark);
     	gtk_text_buffer_insert (buffer, &iter, text, -1);
	gtk_window_set_default_size (GTK_WINDOW (window), 165, 265);
}

static void settanh(GtkWidget *widget, gpointer data) {
	GtkTextBuffer *buffer;
     	GtkTextMark *mark;
     	GtkTextIter iter;
     	const gchar *text;
	char* button_num = (char*)data;
	flag = 6;
	gtk_entry_set_text(GTK_ENTRY(w->entry), button_num);
     	buffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (w->textview));
     	text = gtk_entry_get_text (GTK_ENTRY (w->entry));

     	mark = gtk_text_buffer_get_insert (buffer);
     	gtk_text_buffer_get_iter_at_mark (buffer, &iter, mark);
     	gtk_text_buffer_insert (buffer, &iter, text, -1);
	gtk_window_set_default_size (GTK_WINDOW (window), 165, 265);
}

static void setceil(GtkWidget *widget, gpointer data) {
	GtkTextBuffer *buffer;
     	GtkTextMark *mark;
     	GtkTextIter iter;
     	const gchar *text;
	char* button_num = (char*)data;
	flag = 11;
	gtk_entry_set_text(GTK_ENTRY(w->entry), button_num);
     	buffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (w->textview));
     	text = gtk_entry_get_text (GTK_ENTRY (w->entry));

     	mark = gtk_text_buffer_get_insert (buffer);
     	gtk_text_buffer_get_iter_at_mark (buffer, &iter, mark);
     	gtk_text_buffer_insert (buffer, &iter, text, -1);
	gtk_window_set_default_size (GTK_WINDOW (window), 165, 265);
}

static void setfloor(GtkWidget *widget, gpointer data) {
	GtkTextBuffer *buffer;
     	GtkTextMark *mark;
     	GtkTextIter iter;
     	const gchar *text;
	char* button_num = (char*)data;
	flag = 12;
	gtk_entry_set_text(GTK_ENTRY(w->entry), button_num);
     	buffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (w->textview));
     	text = gtk_entry_get_text (GTK_ENTRY (w->entry));

     	mark = gtk_text_buffer_get_insert (buffer);
     	gtk_text_buffer_get_iter_at_mark (buffer, &iter, mark);
     	gtk_text_buffer_insert (buffer, &iter, text, -1);
	gtk_window_set_default_size (GTK_WINDOW (window), 165, 265);
}


static void setlog(GtkWidget *widget, gpointer data) {
	GtkTextBuffer *buffer;
     	GtkTextMark *mark;
     	GtkTextIter iter;
     	const gchar *text;
	char* button_num = (char*)data;
	flag = 7;
	gtk_entry_set_text(GTK_ENTRY(w->entry), button_num);
     	buffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (w->textview));
     	text = gtk_entry_get_text (GTK_ENTRY (w->entry));

     	mark = gtk_text_buffer_get_insert (buffer);
     	gtk_text_buffer_get_iter_at_mark (buffer, &iter, mark);
     	gtk_text_buffer_insert (buffer, &iter, text, -1);
	gtk_window_set_default_size (GTK_WINDOW (window), 165, 265);
}

static void setln(GtkWidget *widget, gpointer data) {
	GtkTextBuffer *buffer;
     	GtkTextMark *mark;
     	GtkTextIter iter;
     	const gchar *text;
	char* button_num = (char*)data;
	flag = 8;
	gtk_entry_set_text(GTK_ENTRY(w->entry), button_num);
     	buffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (w->textview));
     	text = gtk_entry_get_text (GTK_ENTRY (w->entry));

     	mark = gtk_text_buffer_get_insert (buffer);
     	gtk_text_buffer_get_iter_at_mark (buffer, &iter, mark);
     	gtk_text_buffer_insert (buffer, &iter, text, -1);
	gtk_window_set_default_size (GTK_WINDOW (window), 165, 265);
}

void reverse(char* str, int len) { 
	int i = 0, j = len - 1, temp; 
    	while (i < j) { 
        	temp = str[i]; 
        	str[i] = str[j]; 
        	str[j] = temp; 
        	i++; 
        	j--; 
    	} 	
} 

int intToStr(int x, char str[], int d) { 
    	int i = 0; 
    	while (x) { 
    		str[i++] = (x % 10) + '0'; 
    	    	x = x / 10; 
    	} 
  
    	// If number of digits required is more, then 
    	// add 0s at the beginning 
    	while (i < d) 
        	str[i++] = '0'; 
  
    	reverse(str, i); 
    	str[i] = '\0'; 
    	return i; 
} 

void ftoa(float n, char* res, int afterpoint) { 
	//Extract integer part 
	int ipart = (int)n; 
  	// Extract floating part 
  	float fpart = n - (float)ipart; 
  
    	// convert integer part to string 
    	int i = intToStr(ipart, res, 0); 
  
    	// check for display option after point 
    	if (afterpoint != 0) { 
        	res[i] = '.'; // add dot 
  
        	// Get the value of fraction part upto given no. 
        	// of points after dot. The third parameter  
       		// is needed to handle cases like 233.007 
        	fpart = fpart * pow(10, afterpoint); 
  
        	intToStr((int)fpart, res + i + 1, afterpoint); 
    	} 
	
} 
static void equal( GtkWidget *widget, GtkWidget *entry ) {
	GtkTextIter start, en;
	GtkTextBuffer *buffer = gtk_text_view_get_buffer ((GtkTextView *)w->textview);
	gchar *text;
	/*const gchar *entry_text;
	char *entry_text1;*/
	char str[1024], dg[1024];
	double result = 0;
	char str1[1024];
	strcpy(str1, "1/0");
	gtk_text_buffer_get_bounds (buffer, &start, &en);
	text = gtk_text_buffer_get_text (buffer, &start, &en, FALSE);
	if(strcmp(text, "") == 0) {
		gtk_entry_set_text(GTK_ENTRY (w->entry), "0.0000000");
	}
	if(strcmp(text, str1) == 0) {
		gtk_entry_set_text(GTK_ENTRY (w->entry), "ERROR: Division By Zero is Undefined");
		return;
	}
	if(strcmp(text, "tan( 90 )") == 0) {
		gtk_entry_set_text(GTK_ENTRY (w->entry), "Math Error");
		return;
	}
  	//entry_text = gtk_entry_get_text (GTK_ENTRY (entry));
	//gtk_label_set_text (GTK_LABEL(label1), (char*)entry_text);
	//printf("%s\n", text);
	if(flag > 0 && flag < 13) {
	
		result = eval((char*)text);
		if(result < 0) {
		    //result = result * -1;
		    ftoa(result, dg, 3);
	     	    gtk_entry_set_text (GTK_ENTRY (w->entry), dg);
		}
		else if(result == 0){
			//ftoa(result, dg, 9);
     			gtk_entry_set_text (GTK_ENTRY (w->entry), "0.0000000");
		}
		else {
			ftoa(result, dg, 9);
	     		gtk_entry_set_text (GTK_ENTRY (w->entry), dg);
		}
	}
	else {
		result = infix((char*)text);
		//printf("%lf", result);
		if(result < 0) {
		    	result = result * -1;
		    	ftoa(result, dg, 3);
		    	str[0] = '-';
			str[1] = '\0';
		    	strcat(str, dg);
		    	//g_print("%s", str);			
	     	    	gtk_entry_set_text (GTK_ENTRY (w->entry), str);
		}
		else if(result == 0) {
			//ftoa(result, dg, 9);
     			gtk_entry_set_text (GTK_ENTRY (w->entry), "0.00000000");
		}
		else {
			ftoa(result, dg, 9);
	     		gtk_entry_set_text (GTK_ENTRY (w->entry), dg);
		}
	}
	gtk_window_set_default_size (GTK_WINDOW (window), 165, 265);
}

static void clear( GtkWidget *widget, GtkWidget *entry ) {
	GtkTextBuffer *buffer;
	GtkTextIter start, end;
	
	
	buffer = gtk_text_view_get_buffer(GTK_TEXT_VIEW(w -> textview));
 	gtk_text_buffer_get_bounds(buffer, &start, &end);
  	gtk_text_buffer_delete(buffer, &start, &end);
	gtk_window_set_default_size (GTK_WINDOW (window), 165, 265);

	gtk_entry_set_text (GTK_ENTRY (w -> entry), "");
}

static void activate(GtkApplication *app, gpointer user_data) {

	GtkCssProvider *provider;
  	GdkDisplay *display;
	int text_width = 42;
    	GdkScreen *screen;
	char *num;
	w = g_slice_new (Widgets);

	space = gtk_label_new("");
	space0 = gtk_label_new("");
	space1 = gtk_label_new("");
	space2 = gtk_label_new("");
	space16 = gtk_label_new("");
	space13 = gtk_label_new("");
	space3 = gtk_label_new("    ");
	space4 = gtk_label_new("    ");
	space5 = gtk_label_new("    ");
	space6 = gtk_label_new("    ");
	space7 = gtk_label_new("    ");
	space8 = gtk_label_new("    ");
	space9 = gtk_label_new("    ");
	

	window = gtk_application_window_new(app);
	gtk_window_set_title(GTK_WINDOW(window), "Graphical Calculator");
	gtk_window_set_default_size (GTK_WINDOW (window), 165, 265);
	gtk_window_set_resizable (GTK_WINDOW(window), FALSE);
	gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
	gtk_window_set_decorated(GTK_WINDOW(window),TRUE);

	grid = gtk_grid_new();
	gtk_container_add(GTK_CONTAINER(window), grid);

	grid0 = gtk_grid_new();
	grid1 = gtk_grid_new();
	grid2 = gtk_grid_new();
	gtk_grid_attach(GTK_GRID(grid), grid2, 0, 0, 5, 2);
	gtk_grid_attach(GTK_GRID(grid), grid0, 0, 2, 8, 2);
	gtk_grid_attach(GTK_GRID(grid), grid1, 0, 4, 8, 12);

	  //create a text box and textview
  
	w->textview = gtk_text_view_new ();
    	w->entry = gtk_entry_new ();
	gtk_entry_set_placeholder_text(GTK_ENTRY(w->entry),"Enter Expression"); 
	gtk_grid_attach(GTK_GRID(grid2), w->textview, 0, 0, 8, 2);
	gtk_widget_set_size_request (w->textview, 0, 50);
	gtk_grid_attach(GTK_GRID(grid0), w->entry, 0, 0, 8, 2);
	gtk_entry_set_width_chars(GTK_ENTRY(w -> entry), text_width);
	gtk_text_view_set_monospace ((GtkTextView *)w->textview, TRUE);
	gtk_text_view_set_justification((GtkTextView *)w->textview, GTK_JUSTIFY_CENTER);
	gtk_widget_show (w->entry);
	gtk_widget_show (w->textview);
	 
	//creating a button

	//1st col
	gtk_grid_attach(GTK_GRID(grid1),space0,0, 0, 1, 1);
	
	button1 = gtk_button_new_with_label("sin");
	gtk_grid_attach(GTK_GRID(grid1), button1, 0, 1, 1, 1);
	gtk_grid_attach(GTK_GRID(grid1),space,0, 2, 1, 1);
   	g_signal_connect (button1, "clicked", G_CALLBACK (setsin), (gpointer)"sin( ");

	button2 = gtk_button_new_with_label("7");
	num = "7";
	gtk_grid_attach(GTK_GRID(grid1), button2, 0, 3, 1, 1);
	gtk_grid_attach(GTK_GRID(grid1),space1,0, 4, 1, 1);	
	g_signal_connect (button2, "clicked", G_CALLBACK (clicked), (gpointer)num);

	button3 = gtk_button_new_with_label ("4");
	num = "4";
	gtk_grid_attach(GTK_GRID(grid1), button3, 0, 5, 1, 1);
	gtk_grid_attach(GTK_GRID(grid1),space16,0, 6, 1, 1);	
	g_signal_connect (button3, "clicked", G_CALLBACK (clicked), (gpointer)num);
	
	button4 = gtk_button_new_with_label ("1");
	num = "1";	
	gtk_grid_attach(GTK_GRID(grid1), button4, 0, 7, 1, 1);
	g_signal_connect (button4, "clicked", G_CALLBACK (clicked), (gpointer)num);

	button5 = gtk_button_new_with_label ("0");
	num = "0";
	gtk_grid_attach(GTK_GRID(grid1),space13,0, 8, 1, 1);
	gtk_grid_attach(GTK_GRID(grid1), button5, 0, 9, 1, 1);
	gtk_grid_attach(GTK_GRID(grid1),space3, 1, 1, 1, 1);
	g_signal_connect (button5, "clicked", G_CALLBACK (clicked), (gpointer)num);	

	//2nd col

	gtk_grid_attach(GTK_GRID(grid1),space4, 2, 0, 1, 1);
	//space was added for good view
	
	button6 = gtk_button_new_with_label ("cos");
	gtk_grid_attach(GTK_GRID(grid1), button6, 2, 1, 1, 1);
	g_signal_connect (button6, "clicked", G_CALLBACK (setcos), (gpointer)"cos( ");

	button7 = gtk_button_new_with_label ("8");
	num = "8";
	gtk_grid_attach(GTK_GRID(grid1), button7, 2, 3, 1, 1);
	g_signal_connect (button7, "clicked", G_CALLBACK (clicked), (gpointer)num);

	button8 = gtk_button_new_with_label ("5");
	num = "5";
	gtk_grid_attach(GTK_GRID(grid1), button8, 2, 5, 1, 1);
	g_signal_connect (button8, "clicked", G_CALLBACK (clicked), (gpointer)num);

	button9 = gtk_button_new_with_label ("2");
	num = "2";
	gtk_grid_attach(GTK_GRID(grid1), button9, 2, 7, 1, 1);
	g_signal_connect (button9, "clicked", G_CALLBACK (clicked), (gpointer)num);


	button10 = gtk_button_new_with_label (".");
	gtk_grid_attach(GTK_GRID(grid1), button10, 2, 9, 1, 1);
	gtk_grid_attach(GTK_GRID(grid1),space5, 3, 1, 1, 1);
	g_signal_connect (button10, "clicked", G_CALLBACK (clicked), (gpointer)".");	

// 3rd col
	button11 = gtk_button_new_with_label ("tan");
	gtk_grid_attach(GTK_GRID(grid1), button11, 4, 1, 1, 1);
	g_signal_connect (button11, "clicked", G_CALLBACK (settan), (gpointer)"tan( ");

	button12 = gtk_button_new_with_label ("9");
	num = "9";
	gtk_grid_attach(GTK_GRID(grid1), button12, 4, 3, 1, 1);
	g_signal_connect (button12, "clicked", G_CALLBACK (clicked),(gpointer)num);

	button13 = gtk_button_new_with_label ("6");
	num = "6";
	gtk_grid_attach(GTK_GRID(grid1), button13, 4, 5, 1, 1);
	g_signal_connect (button13, "clicked", G_CALLBACK (clicked), (gpointer)num);

	button14 = gtk_button_new_with_label ("3");
	num = "3";
	gtk_grid_attach(GTK_GRID(grid1), button14, 4, 7, 1, 1);
	g_signal_connect (button14, "clicked", G_CALLBACK (clicked), (gpointer)num);

	button15 = gtk_button_new_with_label ("=");
	gtk_grid_attach(GTK_GRID(grid1), button15, 4, 9, 1, 1);
	gtk_grid_attach(GTK_GRID(grid1),space6, 5, 1, 1, 1);
	g_signal_connect (button15, "clicked", G_CALLBACK (equal), entry);
	

// 4th col

	button16 = gtk_button_new_with_label ("%");
	gtk_grid_attach(GTK_GRID(grid1), button16, 6, 1, 1, 1);
	g_signal_connect (button16, "clicked", G_CALLBACK (clicked), (gpointer)"%");

	button17 = gtk_button_new_with_label ("+");
	gtk_grid_attach(GTK_GRID(grid1), button17, 6, 3, 1, 1);
	g_signal_connect (button17, "clicked", G_CALLBACK (clicked), (gpointer)"+");

	button18 = gtk_button_new_with_label ("-");
	gtk_grid_attach(GTK_GRID(grid1), button18, 6, 5, 1, 1);
	g_signal_connect (button18, "clicked", G_CALLBACK (clicked), (gpointer)"-");

	button19 = gtk_button_new_with_label ("*");
	gtk_grid_attach(GTK_GRID(grid1), button19, 6, 7, 1, 1);	
	g_signal_connect (button19, "clicked", G_CALLBACK (clicked), (gpointer)"*");


	button20 = gtk_button_new_with_label ("/");
	gtk_grid_attach(GTK_GRID(grid1), button20, 6, 9, 1, 1);
	gtk_grid_attach(GTK_GRID(grid1),space7, 7, 1, 1, 1);	
	g_signal_connect (button20, "clicked", G_CALLBACK (clicked), (gpointer)"/");

// 5 th col

	button21 = gtk_button_new_with_label ("(");
	gtk_grid_attach(GTK_GRID(grid1), button21, 8, 1, 1, 1);
	g_signal_connect (button21, "clicked", G_CALLBACK (clicked), (gpointer)"( ");

	button22 = gtk_button_new_with_label ("|x|");
	gtk_grid_attach(GTK_GRID(grid1), button22, 8, 3, 1, 1);
	g_signal_connect (button22, "clicked", G_CALLBACK (Setabs), (gpointer)"| ");

	button23 = gtk_button_new_with_label ("┌");
	gtk_grid_attach(GTK_GRID(grid1), button23, 8, 5, 1, 1);
	g_signal_connect (button23, "clicked", G_CALLBACK (setceil), (gpointer)"┌ ");

	button24 = gtk_button_new_with_label ("log");
	gtk_grid_attach(GTK_GRID(grid1), button24, 8, 7, 1, 1);
	g_signal_connect (button24, "clicked", G_CALLBACK (setlog), (gpointer)"log( ");

	button25 = gtk_button_new_with_label ("sinh");
	gtk_grid_attach(GTK_GRID(grid1), button25, 8, 9, 1, 1);
	g_signal_connect (button25, "clicked", G_CALLBACK (setsinh), (gpointer)"sinh( ");

	gtk_grid_attach(GTK_GRID(grid1),space8, 9, 1, 1, 1);	
	
// 6th col
	button26 = gtk_button_new_with_label (")");
	gtk_grid_attach(GTK_GRID(grid1), button26, 10, 1, 1, 1);
	g_signal_connect (button26, "clicked", G_CALLBACK (clicked), (gpointer)" )");

	button27 = gtk_button_new_with_label ("√");
	gtk_grid_attach(GTK_GRID(grid1), button27, 10, 3, 1, 1);
	g_signal_connect (button27, "clicked", G_CALLBACK (Setroot), (gpointer)"√ ");

	button28 = gtk_button_new_with_label ("└");
	gtk_grid_attach(GTK_GRID(grid1), button28, 10, 5, 1, 1);
	g_signal_connect (button28, "clicked", G_CALLBACK (setfloor), (gpointer)"└ ");

	button29 = gtk_button_new_with_label ("ln");
	gtk_grid_attach(GTK_GRID(grid1), button29, 10, 7, 1, 1);
	g_signal_connect (button29, "clicked", G_CALLBACK (setln), (gpointer)"ln( ");

	button30 = gtk_button_new_with_label ("cosh");
	gtk_grid_attach(GTK_GRID(grid1), button30, 10, 9, 1, 1);
	gtk_grid_attach(GTK_GRID(grid1),space9, 11, 1, 1, 1);
	g_signal_connect (button30, "clicked", G_CALLBACK (setcosh), (gpointer)"cosh( ");
	
// 7th col
	button31 = gtk_button_new_with_label ("Clear");
	gtk_grid_attach(GTK_GRID(grid1), button31, 12, 1, 1, 1);
	g_signal_connect (button31, "clicked", G_CALLBACK (clear), NULL);

	button32 = gtk_button_new_with_label ("^");
	gtk_grid_attach(GTK_GRID(grid1), button32, 12, 3, 1, 1);
	g_signal_connect (button32, "clicked", G_CALLBACK (clicked), (gpointer)"^");

	button33 = gtk_button_new_with_label ("*10^x");
	gtk_grid_attach(GTK_GRID(grid1), button33, 12, 5, 1, 1);
	g_signal_connect (button33, "clicked", G_CALLBACK (clicked), (gpointer)" * 10 ^ ");

	button34 = gtk_button_new_with_label ("x!");
	gtk_grid_attach(GTK_GRID(grid1), button34, 12, 7, 1, 1);
	g_signal_connect (button34, "clicked", G_CALLBACK (clicked), (gpointer)"!");	

	button35 = gtk_button_new_with_label ("tanh");
	gtk_grid_attach(GTK_GRID(grid1), button35, 12, 9, 1, 1);
	gtk_grid_attach(GTK_GRID(grid1),space10, 13, 1, 1, 1);		
	g_signal_connect (button35, "clicked", G_CALLBACK (settanh), (gpointer)"tanh( ");


//for css
	provider = gtk_css_provider_new ();
	display = gdk_display_get_default ();
    	screen = gdk_display_get_default_screen (display);
    	gtk_style_context_add_provider_for_screen (screen, GTK_STYLE_PROVIDER (provider), GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);

    	const gchar *myCssFile = "my.css";
    	GError *error = 0;

    	gtk_css_provider_load_from_file(provider, g_file_new_for_path(myCssFile), &error);
    	g_object_unref (provider);

	gtk_widget_show_all (window);

}

int main(int argc, char **argv) {
	int status;

	app = gtk_application_new("org.gtk.example", G_APPLICATION_FLAGS_NONE);
	g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);
	status = g_application_run(G_APPLICATION(app), argc, argv);
	g_object_unref(app);

	return status;
}
