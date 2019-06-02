Action()
{

	web_url("cvm.higher-stark.site:8080", 
		"URL=http://cvm.higher-stark.site:8080/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/resources/fonts/varela_round-webfont.eot?", ENDITEM, 
		"Url=/resources/fonts/montserrat-webfont.eot?", ENDITEM, 
		"Url=/webjars/bootstrap/fonts/glyphicons-halflings-regular.eot?", ENDITEM, 
		"Url=/resources/images/spring-logo-dataflow.png", ENDITEM, 
		LAST);

	web_link("Find owners", 
		"Text=Find owners", 
		"Snapshot=t2.inf", 
		EXTRARES, 
		"Url=../resources/images/spring-logo-dataflow-mobile.png", ENDITEM, 
		LAST);

	web_submit_form("owners", 
		"Snapshot=t3.inf", 
		ITEMDATA, 
		"Name=lastName", "Value=", ENDITEM, 
		LAST);

	lr_think_time(4);

	web_link("George Franklin", 
		"Text=George Franklin", 
		"Snapshot=t4.inf", 
		LAST);

	web_link("Veterinarians", 
		"Text=Veterinarians", 
		"Snapshot=t5.inf", 
		LAST);

	web_link("Find owners_2", 
		"Text=Find owners", 
		"Snapshot=t6.inf", 
		LAST);

	web_link("Add Owner", 
		"Text=Add Owner", 
		"Snapshot=t7.inf", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_auto_header("UA-CPU", 
		"AMD64");

	web_url("iecompatviewlist.xml", 
		"URL=https://iecvlist.microsoft.com/IE11/1478281996/iecompatviewlist.xml?cvlp=4999842171724530114", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://c.urs.microsoft.com/l1.dat?v=3&cv=9.11.17763.0&os=10.0.17763.0.0&pg=4A72F430-B40C-4D36-A068-CE33ADA5ADF9", "Referer=", ENDITEM, 
		"Url=https://ieonline.microsoft.com/iedomainsuggestions/ie11/suggestions.zh-CN", "Referer=", ENDITEM, 
		"Url=https://ieonline.microsoft.com/ieflipahead/ie10/rules.xml?mkt=zh-CN", "Referer=", ENDITEM, 
		LAST);

	web_url("fwlink", 
		"URL=https://go.microsoft.com/fwlink/?LinkID=401135", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("UA-CPU");

	web_submit_data("new", 
		"Action=http://cvm.higher-stark.site:8080/owners/new", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://cvm.higher-stark.site:8080/owners/new", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=firstName", "Value=Lesley", ENDITEM, 
		"Name=lastName", "Value=Phillips", ENDITEM, 
		"Name=address", "Value=Studio 52, Gemmamouth, DA09, 8ZJ", ENDITEM, 
		"Name=city", "Value=West Bethstad", ENDITEM, 
		"Name=telephone", "Value=0808157049", ENDITEM, 
		LAST);

	web_link("Add New Pet", 
		"Text=Add New Pet", 
		"Snapshot=t11.inf", 
		LAST);

	web_submit_form("new_2", 
		"Snapshot=t12.inf", 
		ITEMDATA, 
		"Name=name", "Value=Corporis", ENDITEM, 
		"Name=birthDate", "Value=2006-12-24", ENDITEM, 
		"Name=type", "Value=dog", ENDITEM, 
		LAST);

	web_link("Add New Pet_2", 
		"Text=Add New Pet", 
		"Snapshot=t13.inf", 
		LAST);

	web_submit_form("new_3", 
		"Snapshot=t14.inf", 
		ITEMDATA, 
		"Name=name", "Value=nesciunt", ENDITEM, 
		"Name=birthDate", "Value=2015-06-13", ENDITEM, 
		"Name=type", "Value=cat", ENDITEM, 
		LAST);

	web_url("owners_2", 
		"URL=http://cvm.higher-stark.site:8080/owners/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://cvm.higher-stark.site:8080/owners/11", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(14);

	web_link("Lesley Phillips", 
		"Text=Lesley Phillips", 
		"Snapshot=t16.inf", 
		LAST);

	lr_think_time(9);

	web_link("Edit Owner", 
		"Text=Edit Owner", 
		"Snapshot=t17.inf", 
		LAST);

	web_submit_form("edit", 
		"Snapshot=t18.inf", 
		ITEMDATA, 
		"Name=firstName", "Value=Lesley", ENDITEM, 
		"Name=lastName", "Value=Phillips", ENDITEM, 
		"Name=address", "Value=Studio 52, Gemmamouth, DA09, 8ZJ", ENDITEM, 
		"Name=city", "Value=West Bethstad", ENDITEM, 
		"Name=telephone", "Value=1514960003", ENDITEM, 
		LAST);

	lr_think_time(11);

	web_link("Find owners_3", 
		"Text=Find owners", 
		"Snapshot=t19.inf", 
		LAST);

	web_submit_form("owners_3", 
		"Snapshot=t20.inf", 
		ITEMDATA, 
		"Name=lastName", "Value=Phillips", ENDITEM, 
		LAST);

	lr_think_time(6);

	web_link("Find owners_4", 
		"Text=Find owners", 
		"Snapshot=t21.inf", 
		LAST);

	lr_think_time(10);

	web_link("Add Owner_2", 
		"Text=Add Owner", 
		"Snapshot=t22.inf", 
		LAST);

	web_submit_form("new_4", 
		"Snapshot=t23.inf", 
		ITEMDATA, 
		"Name=firstName", "Value=Oliver", ENDITEM, 
		"Name=lastName", "Value=Phillips", ENDITEM, 
		"Name=address", "Value=149 Sylvia path, Marionport, G67 7WG", ENDITEM, 
		"Name=city", "Value=South Guy", ENDITEM, 
		"Name=telephone", "Value=8081570469", ENDITEM, 
		LAST);

	lr_think_time(9);

	web_link("Find owners_5", 
		"Text=Find owners", 
		"Snapshot=t24.inf", 
		LAST);

	web_submit_form("owners_4", 
		"Snapshot=t25.inf", 
		ITEMDATA, 
		"Name=lastName", "Value=", ENDITEM, 
		LAST);

	lr_think_time(6);

	web_link("Find owners_6", 
		"Text=Find owners", 
		"Snapshot=t26.inf", 
		LAST);

	lr_think_time(5);

	web_submit_form("owners_5", 
		"Snapshot=t27.inf", 
		ITEMDATA, 
		"Name=lastName", "Value=Phillips", ENDITEM, 
		LAST);

	web_link("Oliver Phillips", 
		"Text=Oliver Phillips", 
		"Snapshot=t28.inf", 
		LAST);

	web_link("Add New Pet_3", 
		"Text=Add New Pet", 
		"Snapshot=t29.inf", 
		LAST);

	web_submit_form("new_5", 
		"Snapshot=t30.inf", 
		ITEMDATA, 
		"Name=name", "Value=Duncan", ENDITEM, 
		"Name=birthDate", "Value=2014-09-06", ENDITEM, 
		"Name=type", "Value=dog", ENDITEM, 
		LAST);

	web_link("Add Visit", 
		"Text=Add Visit", 
		"Snapshot=t31.inf", 
		LAST);

	web_submit_form("new_6", 
		"Snapshot=t32.inf", 
		ITEMDATA, 
		"Name=date", "Value=2019-06-02", ENDITEM, 
		"Name=description", "Value=Sint accusamus iure officia voluptates nostrum deserunt.", ENDITEM, 
		LAST);

	lr_think_time(16);

	web_link("Home", 
		"Text=Home", 
		"Snapshot=t33.inf", 
		LAST);

	web_link("Home_2", 
		"Text=Home", 
		"Snapshot=t34.inf", 
		LAST);

	web_link("Home_3", 
		"Text=Home", 
		"Snapshot=t35.inf", 
		LAST);

	web_link("Find owners_7", 
		"Text=Find owners", 
		"Snapshot=t36.inf", 
		LAST);

	web_url("owners_6", 
		"URL=http://cvm.higher-stark.site:8080/owners/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://cvm.higher-stark.site:8080/owners/find", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);

	web_link("Harold Davis", 
		"Text=Harold Davis", 
		"Snapshot=t38.inf", 
		LAST);

	lr_think_time(6);

	web_link("Home_4", 
		"Text=Home", 
		"Snapshot=t39.inf", 
		LAST);

	return 0;
}