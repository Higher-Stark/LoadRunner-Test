Action()
{

	web_url("cvm.higher-stark.site:8080", 
		"URL=http://cvm.higher-stark.site:8080/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/resources/fonts/varela_round-webfont.eot?", ENDITEM, 
		"Url=/resources/fonts/montserrat-webfont.eot?", ENDITEM, 
		"Url=/webjars/bootstrap/fonts/glyphicons-halflings-regular.eot?", ENDITEM, 
		"Url=/resources/images/spring-logo-dataflow.png", ENDITEM, 
		LAST);

	web_link("Find owners", 
		"Text=Find owners", 
		"Snapshot=t23.inf", 
		EXTRARES, 
		"Url=../resources/images/spring-logo-dataflow-mobile.png", ENDITEM, 
		LAST);

	lr_think_time(5);

	web_submit_form("owners", 
		"Snapshot=t24.inf", 
		ITEMDATA, 
		"Name=lastName", "Value=", ENDITEM, 
		LAST);

	web_link("Find owners_2", 
		"Text=Find owners", 
		"Snapshot=t25.inf", 
		LAST);

	lr_start_transaction("Add_owner");

	web_link("Add Owner", 
		"Text=Add Owner", 
		"Snapshot=t26.inf", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_auto_header("UA-CPU", 
		"AMD64");

	web_url("iecompatviewlist.xml", 
		"URL=https://iecvlist.microsoft.com/IE11/1478281996/iecompatviewlist.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://c.urs.microsoft.com/l1.dat?v=3&cv=9.11.18362.0&os=10.0.18362.0.0&pg=4A72F430-B40C-4D36-A068-CE33ADA5ADF9", "Referer=", ENDITEM, 
		"Url=https://ieonline.microsoft.com/iedomainsuggestions/ie11/suggestions.zh-CN", "Referer=", ENDITEM, 
		"Url=https://ieonline.microsoft.com/ieflipahead/ie10/rules.xml?mkt=zh-CN", "Referer=", ENDITEM, 
		LAST);

	web_url("fwlink", 
		"URL=https://go.microsoft.com/fwlink/?LinkID=401135", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("UA-CPU");

	lr_think_time(6);

	web_submit_data("new",
		"Action=http://cvm.higher-stark.site:8080/owners/new",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://cvm.higher-stark.site:8080/owners/new",
		"Snapshot=t29.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=firstName", "Value={first_name}", ENDITEM,
		"Name=lastName", "Value={last_name}", ENDITEM,
		"Name=address", "Value={address}", ENDITEM,
		"Name=city", "Value={city}", ENDITEM,
		"Name=telephone", "Value={telephone}", ENDITEM,
		LAST);

	lr_end_transaction("Add_owner", LR_AUTO);

	lr_think_time(7);

	web_link("Find owners_3", 
		"Text=Find owners", 
		"Snapshot=t30.inf", 
		LAST);

	web_submit_form("owners_2", 
		"Snapshot=t31.inf", 
		ITEMDATA, 
		"Name=lastName", "Value=", ENDITEM, 
		LAST);

	return 0;
}