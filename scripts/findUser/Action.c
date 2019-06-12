Action()
{

	web_url("success.txt", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t3.inf", 
		LAST);

	lr_think_time(9);

	web_url("coba-webext.gif", 
		"URL=http://addons.g-fox.cn/coba-webext.gif?action=disconnect&random=0.08204059471671221", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=", 
		"Snapshot=t4.inf", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	lr_think_time(9);

	web_url("tk.gif", 
		"URL=http://addons.g-fox.cn/tk.gif?when=run&r=0.5272472669610972", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=", 
		"Snapshot=t5.inf", 
		LAST);

	web_url("ntab.gif", 
		"URL=http://addons.g-fox.cn/ntab.gif?c=ntab&t=homepage&a=override&d=defaultVal&f=&r=0.07235229703225743&cid=stub.firefox.com.cn", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=", 
		"Snapshot=t6.inf", 
		LAST);

	web_url("ntab.gif_2", 
		"URL=http://addons.g-fox.cn/ntab.gif?c=ntab&t=searchplugins&a=detect&d=baidu&f=true&r=0.5726040046732096&cid=stub.firefox.com.cn", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=", 
		"Snapshot=t7.inf", 
		LAST);

	lr_think_time(4);

	web_url("ntab.gif_3", 
		"URL=http://addons.g-fox.cn/ntab.gif?c=ntab&t=searchplugins&a=detect&d=current&f=true&r=0.5719801290170695&cid=stub.firefox.com.cn", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=", 
		"Snapshot=t8.inf", 
		LAST);

	web_add_header("DNT", 
		"1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(12);

	web_url("cvm.higher-stark.site:8080", 
		"URL=http://cvm.higher-stark.site:8080/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://adu.g-fox.cn/adu.gif?channelid=stub.firefox.com.cn&fxversion=67.0&ceversion=2019.5&ver=2_2&pk=%7B59ae7fd7-6554-4c2e-afa6-a8ed9cb1fb0b%7D&uk=%7B0e6e4736-fbf7-4ab2-b209-0a201c5fc91e%7D&cehome=true&locale=zh-CN&age=14&default=false&defaultHttp=false&flash=&tracking=3&now=1559549320859", "Referer=", ENDITEM, 
		"Url=/resources/fonts/varela_round-webfont.woff", "Referer=http://cvm.higher-stark.site:8080/resources/css/petclinic.css", ENDITEM, 
		"Url=/resources/fonts/montserrat-webfont.woff", "Referer=http://cvm.higher-stark.site:8080/resources/css/petclinic.css", ENDITEM, 
		"Url=/webjars/bootstrap/fonts/glyphicons-halflings-regular.woff2", "Referer=http://cvm.higher-stark.site:8080/resources/css/petclinic.css", ENDITEM, 
		"Url=/resources/images/spring-logo-dataflow.png", "Referer=http://cvm.higher-stark.site:8080/resources/css/petclinic.css", ENDITEM, 
	"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");
	
	lr_start_transaction("find all owners");
	
	web_link("Find owners", 
		"Text=Find owners", 
		"Snapshot=t10.inf", 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		LAST);

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_form("owners",
		"Snapshot=t11.inf",
		ITEMDATA,
		"Name=lastName", "Value={allOwners}", ENDITEM,
		LAST);
	
	lr_end_transaction("find all owners", LR_AUTO);
	
	lr_start_transaction("find one last name owners-1");

	web_link("Find owners_2", 
		"Text=Find owners", 
		"Snapshot=t12.inf", 
		LAST);

	web_submit_form("owners_2",
		"Snapshot=t13.inf",
		ITEMDATA,
		"Name=lastName", "Value={oneLastName}", ENDITEM,
		LAST);
	
	lr_end_transaction("find one last name owners-1", LR_AUTO);

	lr_start_transaction("find one last name owners-2");

	web_link("Find owners_3", 
		"Text=Find owners", 
		"Snapshot=t14.inf", 
		LAST);

	web_submit_form("owners_3",
		"Snapshot=t15.inf",
		ITEMDATA,
		"Name=lastName", "Value={lastNameOwner2}", ENDITEM,
		LAST);

	web_link("Lesley Phillips", 
		"Text=Lesley Phillips", 
		"Ordinal=1", 
		"Snapshot=t16.inf", 
		LAST);
	lr_end_transaction("find one last name owners-2", LR_AUTO);

	return 0;
}