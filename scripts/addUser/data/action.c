Action()
{

	web_url("success.txt", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	lr_think_time(4);

	web_url("coba-webext.gif", 
		"URL=http://addons.g-fox.cn/coba-webext.gif?action=disconnect&random=0.4042406352481295", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=", 
		"Snapshot=t2.inf", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	lr_think_time(9);

	web_url("tk.gif", 
		"URL=http://addons.g-fox.cn/tk.gif?when=run&r=0.3379238907256118", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=", 
		"Snapshot=t3.inf", 
		LAST);

	web_url("ntab.gif", 
		"URL=http://addons.g-fox.cn/ntab.gif?c=ntab&t=homepage&a=override&d=defaultVal&f=&r=0.7667585913094874&cid=stub.firefox.com.cn", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=", 
		"Snapshot=t4.inf", 
		LAST);

	web_url("ntab.gif_2", 
		"URL=http://addons.g-fox.cn/ntab.gif?c=ntab&t=searchplugins&a=detect&d=baidu&f=true&r=0.5021549384204697&cid=stub.firefox.com.cn", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=", 
		"Snapshot=t5.inf", 
		LAST);

	lr_think_time(19);

	web_url("ntab.gif_3", 
		"URL=http://addons.g-fox.cn/ntab.gif?c=ntab&t=searchplugins&a=detect&d=current&f=true&r=0.5321458147167707&cid=stub.firefox.com.cn", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=", 
		"Snapshot=t6.inf", 
		LAST);

	lr_think_time(9);

	web_url("adu.gif", 
		"URL=http://adu.g-fox.cn/adu.gif?channelid=stub.firefox.com.cn&fxversion=67.0&ceversion=2019.5&ver=2_2&pk=%7B59ae7fd7-6554-4c2e-afa6-a8ed9cb1fb0b%7D&uk=%7B0e6e4736-fbf7-4ab2-b209-0a201c5fc91e%7D&cehome=true&locale=zh-CN&age=14&default=false&defaultHttp=false&flash=&tracking=3&now=1559549697332", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=", 
		"Snapshot=t7.inf", 
		LAST);

	web_add_header("DNT", 
		"1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("cvm.higher-stark.site:8080", 
		"URL=http://cvm.higher-stark.site:8080/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		"Url=/resources/images/spring-logo-dataflow.png", "Referer=http://cvm.higher-stark.site:8080/resources/css/petclinic.css", ENDITEM, 
		"Url=/resources/fonts/varela_round-webfont.woff", "Referer=http://cvm.higher-stark.site:8080/resources/css/petclinic.css", ENDITEM, 
		"Url=/resources/fonts/montserrat-webfont.woff", "Referer=http://cvm.higher-stark.site:8080/resources/css/petclinic.css", ENDITEM, 
		"Url=/webjars/bootstrap/fonts/glyphicons-halflings-regular.woff2", "Referer=http://cvm.higher-stark.site:8080/resources/css/petclinic.css", ENDITEM, 
		"Url=/resources/fonts/varela_round-webfont.ttf", "Referer=http://cvm.higher-stark.site:8080/resources/css/petclinic.css", ENDITEM, 
		"Url=/webjars/bootstrap/fonts/glyphicons-halflings-regular.woff", "Referer=http://cvm.higher-stark.site:8080/resources/css/petclinic.css", ENDITEM, 
		"Url=/resources/fonts/montserrat-webfont.ttf", "Referer=http://cvm.higher-stark.site:8080/resources/css/petclinic.css", ENDITEM, 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_link("Find owners", 
		"Text=Find owners", 
		"Snapshot=t9.inf", 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		LAST);

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_link("Add Owner", 
		"Text=Add Owner", 
		"Snapshot=t10.inf", 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		LAST);

	web_submit_form("new", 
		"Snapshot=t11.inf", 
		ITEMDATA, 
		"Name=firstName", "Value=Jacob", ENDITEM, 
		"Name=lastName", "Value=Smith", ENDITEM, 
		"Name=address", "Value=Luk Yu Building, 24-26 Stanley Street, Central, Hong Kong", ENDITEM, 
		"Name=city", "Value=Hong Kong", ENDITEM, 
		"Name=telephone", "Value=80018002", ENDITEM, 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(5);

	web_link("Find owners_2", 
		"Text=Find owners", 
		"Snapshot=t12.inf", 
		LAST);

	web_submit_form("owners", 
		"Snapshot=t13.inf", 
		ITEMDATA, 
		"Name=lastName", "Value=Smith", ENDITEM, 
		LAST);

	return 0;
}