Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");
	
	web_cleanup_auto_headers();
	
	lr_start_transaction("Rep17_T01_OpenApplication");

	web_add_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.102 Safari/537.36");

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_add_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_header("Accept", 
		"*/*");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_header("If-None-Match", 
		"\"bfea30f5f542aaef282aad29bdf2ed5d\"");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

/*Correlation comment - Do not change!  Original value='872e8186-3657-40f1-a6e4-fc23376e038a' Name ='CsrfTokenId1' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=CsrfTokenId1",
		"LB=name=\"_csrf\" value=\"",
		"RB=\"/>\n                        ",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/auth*",
		LAST);

	web_reg_find("Search=Body",
		"Text=Login",
		LAST);

	web_url("reports", 
		"URL={URL}/reports", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("login-bb2325f03b9d722b33f4a61d5aade09f.css", 
		"URL={URL}/reports/assets/login-bb2325f03b9d722b33f4a61d5aade09f.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/login/auth", 
		"Snapshot=t7.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"cors");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"style");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_auto_header("Sec-Fetch-Site", 
//		"same-origin");

	web_url("application-cbdbc8928e07797d5f5545294597382d.css", 
		"URL={URL}/reports/assets/application-cbdbc8928e07797d5f5545294597382d.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/login/auth", 
		"Snapshot=t9.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"script");

	web_url("application-f8ff3189b5e73f6aa63ba16652634041.js", 
		"URL={URL}/reports/assets/application-f8ff3189b5e73f6aa63ba16652634041.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/login/auth", 
		"Snapshot=t10.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"style");

	web_url("cookiecuttr-ae22cd548558353de252387c318c41c3.css", 
		"URL={URL}/reports/assets/cookiecuttr-ae22cd548558353de252387c318c41c3.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/login/auth", 
		"Snapshot=t11.inf", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"script");

	web_url("jquery.cookie-1.4.1.min-62bfa1d0d94f4791957d86b90ba720db.js", 
		"URL={URL}/reports/assets/jquery/jquery.cookie-1.4.1.min-62bfa1d0d94f4791957d86b90ba720db.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/login/auth", 
		"Snapshot=t12.inf", 
		LAST);

	web_url("customise-jquery.cookiecuttr-7d5013f65bb830d28e9c0f882402df22.js", 
		"URL={URL}/reports/assets/jquery/customise-jquery.cookiecuttr-7d5013f65bb830d28e9c0f882402df22.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/login/auth", 
		"Snapshot=t13.inf", 
		LAST);

//	web_add_header("Origin", 
//		"chrome-extension://mbopgmdnpcbohhpnfglgohlbhfongabi");
//
//	web_add_auto_header("Sec-Fetch-Site", 
//		"none");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"cors");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	
//	web_add_header("Origin", 
//		"{URL}");

	web_url("OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2", 
		"URL={URL}/reports/assets/OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2?v=1.1.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/reports/assets/application-cbdbc8928e07797d5f5545294597382d.css", 
		"Snapshot=t15.inf", 
		LAST);

//	web_add_auto_header("Accept", 
//		"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");
//
//	web_add_auto_header("Cache-Control", 
//		"max-age=0");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"document");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"navigate");
//
//	web_add_auto_header("Sec-Fetch-Site", 
//		"same-origin");
//
//	web_add_auto_header("Sec-Fetch-User", 
//		"?1");
//
//	web_add_auto_header("Upgrade-Insecure-Requests", 
//		"1");

	web_url("auth", 
		"URL={URL}/reports/login/auth", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/login/auth", 
		"Snapshot=t16.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);
	

	lr_end_transaction("Rep17_T01_OpenApplication",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("Rep17_T02_Login");

	web_add_header("Content-Type", 
		"application/x-www-form-urlencoded");

	web_add_header("Origin", 
		"{URL}");
	
	
	web_reg_save_param_ex(
		"ParamName=User_Id",
		"LB=userId=\"",
		"RB=\">",
		SEARCH_FILTERS,
		"Scope=ALL",
		LAST);

	/*Correlation comment - Do not change!  Original value='3e10d3bd-67bd-47f0-8c48-8b3231f0ddb1' Name ='CsrfTokenId_2' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=CsrfTokenId2",
		"LB= content=\"",
		"RB=\"/>\n        ",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/index*",
		LAST);

	web_reg_find("Search=Body",
		"Text=Dashboard",
		LAST);

	web_submit_data("authenticate",
		"Action={URL}/reports/login/authenticate",
		"Method=POST",
		"EncodeAtSign=YES",
		"RecContentType=text/html",
		"Referer={URL}/reports/login/auth",
		"Snapshot=t17.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=username", "Value={UserName}", ENDITEM,
		"Name=password", "Value={Password}", ENDITEM,
		"Name=_csrf", "Value={CsrfTokenId1}", ENDITEM,
		LAST);

//	web_revert_auto_header("Accept");
//
//	web_revert_auto_header("Cache-Control");
//
//	web_revert_auto_header("Sec-Fetch-User");
//
//	web_revert_auto_header("Upgrade-Insecure-Requests");
//
//	web_add_auto_header("Sec-Fetch-Site", 
//		"none");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"style");
//
//	web_add_auto_header("Sec-Fetch-Site", 
//		"same-origin");
	web_concurrent_start(NULL);

	web_url("theme_gradient_blue-e5b680b16e6c806c1a9a9ae4ce7afc98.css", 
		"URL={URL}/reports/assets/theme_gradient_blue-e5b680b16e6c806c1a9a9ae4ce7afc98.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t19.inf", 
		LAST);
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"script");

	web_url("addWidgetModal-55496a0c1d77d08dff1258ed41bf54ed.js", 
		"URL={URL}/reports/assets/app/dashboard/addWidgetModal-55496a0c1d77d08dff1258ed41bf54ed.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t20.inf", 
		LAST);

	web_url("rxapplication-a4c64b62daed34952a91343c7b3f69bd.js", 
		"URL={URL}/reports/assets/app/rxapplication-a4c64b62daed34952a91343c7b3f69bd.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t21.inf", 
		LAST);

	web_url("dashboard-bc7e562b6cf35fb9ffc8863c530c3b80.js", 
		"URL={URL}/reports/assets/app/dashboard/dashboard-bc7e562b6cf35fb9ffc8863c530c3b80.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t22.inf", 
		LAST);

	web_url("actionItemModal-e7b4ce53f4cdabf3bc5cd40b9a1656bf.js", 
		"URL={URL}/reports/assets/app/actionItem/actionItemModal-e7b4ce53f4cdabf3bc5cd40b9a1656bf.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t23.inf", 
		LAST);

	web_url("fullcalendar-ab21481ecaaf856ac398df2626c214f0.js", 
		"URL={URL}/reports/assets/fullcalendar/fullcalendar-ab21481ecaaf856ac398df2626c214f0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t24.inf", 
		LAST);

//	web_add_auto_header("Accept", 
//		"text/css,*/*;q=0.1");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"style");

	web_url("gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"URL={URL}/reports/assets/gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t25.inf", 
		LAST);

	web_url("fuelux-b7cf5c5c681fcdbd63156284516c90e9.css", 
		"URL={URL}/reports/assets/fuelux-b7cf5c5c681fcdbd63156284516c90e9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t26.inf", 
		LAST);

	web_url("workflowModal-5491f0c21ba11e20273f35eef0ac46f9.css", 
		"URL={URL}/reports/assets/workflowModal-5491f0c21ba11e20273f35eef0ac46f9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t27.inf", 
		LAST);

	web_url("dashboard-8dee5417b984f9891cddc783e9314ce6.css", 
		"URL={URL}/reports/assets/dashboard-8dee5417b984f9891cddc783e9314ce6.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t28.inf", 
		LAST);

	web_url("fullcalendar.min-c86583f19d010365c34f3af8b45f413e.css", 
		"URL={URL}/reports/assets/fullcalendar.min-c86583f19d010365c34f3af8b45f413e.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t29.inf", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"script");

	web_url("fullcalendar-lang-all-e4e9be403fd4dc092b72c368c27e5d47.js", 
		"URL={URL}/reports/assets/fullcalendar/fullcalendar-lang-all-e4e9be403fd4dc092b72c368c27e5d47.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t30.inf", 
		LAST);

	web_url("calendar-256cc2c226bcc02548ad879f630767db.js", 
		"URL={URL}/reports/assets/app/calendar-256cc2c226bcc02548ad879f630767db.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t31.inf", 
		LAST);

	web_url("workFlow-3b78500b81fd61ce5b59cc202a54e63c.js", 
		"URL={URL}/reports/assets/app/workFlow-3b78500b81fd61ce5b59cc202a54e63c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t32.inf", 
		LAST);

	web_url("fuelux-58910ec6bd502e7c4aabf85922131616.js", 
		"URL={URL}/reports/assets/fuelux/fuelux-58910ec6bd502e7c4aabf85922131616.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t33.inf", 
		LAST);

	web_url("highcharts-01ce2a5c16b4e040b95b02d8cf3ea23e.js", 
		"URL={URL}/reports/assets/highcharts/highcharts-01ce2a5c16b4e040b95b02d8cf3ea23e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t34.inf", 
		LAST);

	web_url("highcharts-more-31bca387194b423710d019dfa069474a.js", 
		"URL={URL}/reports/assets/highcharts/highcharts-more-31bca387194b423710d019dfa069474a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t35.inf", 
		LAST);

	web_url("no-data-to-display-93457bf691aefc406c1da97a1f8d7e2d.js", 
		"URL={URL}/reports/assets/highcharts/modules/no-data-to-display-93457bf691aefc406c1da97a1f8d7e2d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t36.inf", 
		LAST);

	web_url("grouped-categories-8ddf90b557e5da14225afefcaa8bf9f6.js", 
		"URL={URL}/reports/assets/highcharts/plugins/grouped-categories-8ddf90b557e5da14225afefcaa8bf9f6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t37.inf", 
		LAST);

	web_url("gridstack.min-157675a5f94f1a18234a494030c5d8f0.js", 
		"URL={URL}/reports/assets/gridstack/gridstack.min-157675a5f94f1a18234a494030c5d8f0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t38.inf", 
		LAST);

	web_url("highcharts-3d-b0c0c823b44f85cb61361491f4353576.js", 
		"URL={URL}/reports/assets/highcharts/highcharts-3d-b0c0c823b44f85cb61361491f4353576.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t39.inf", 
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"cors");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("en.json", 
		"URL={URL}/reports/assets/i18n/en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t40.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"script");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"no-cors");

	web_url("gridstack.jQueryUI.min-5bd5204d23705e69adeb23742f04ff8c.js", 
		"URL={URL}/reports/assets/gridstack/gridstack.jQueryUI.min-5bd5204d23705e69adeb23742f04ff8c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t41.inf", 
		LAST);

	web_url("pushNotification-26ee6ee35dd9b52934080a70ea04a8fd.js", 
		"URL={URL}/reports/assets/app/pushNotification-26ee6ee35dd9b52934080a70ea04a8fd.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t42.inf", 
		LAST);

	web_url("deleteModal-68b8e74283c8070801d2afbaf40831a1.js", 
		"URL={URL}/reports/assets/app/deleteModal-68b8e74283c8070801d2afbaf40831a1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t43.inf", 
		LAST);

	web_url("jquery.core-2c7cdf128b42d849235dea8cadd879b8.js", 
		"URL={URL}/reports/assets/app/jquery.core-2c7cdf128b42d849235dea8cadd879b8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t44.inf", 
		LAST);

	web_url("store.modern.min-ee86dbde67356086e53dffdd31c6867d.js", 
		"URL={URL}/reports/assets/store.modern.min-ee86dbde67356086e53dffdd31c6867d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t45.inf", 
		LAST);

	web_url("jquery.app-782d8f87ac279a019b37b18a315654b2.js", 
		"URL={URL}/reports/assets/app/jquery.app-782d8f87ac279a019b37b18a315654b2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t46.inf", 
		LAST);

	web_url("customise-jquery-idleTimeout-6286fe026bdf78a6c38a29cfd8d979c8.js", 
		"URL={URL}/reports/assets/jquery/customise-jquery-idleTimeout-6286fe026bdf78a6c38a29cfd8d979c8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t47.inf", 
		LAST);

//	web_add_auto_header("Accept", 
//		"text/css,*/*;q=0.1");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"style");

	web_url("fullcalendar.print-5e9985f0185898b586ec4820f63bb446.css", 
		"URL={URL}/reports/assets/fullcalendar.print-5e9985f0185898b586ec4820f63bb446.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t48.inf", 
		LAST);

//	web_add_header("Origin", 
//		"{URL}");

//	web_concurrent_start(NULL);

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL={URL}/reports/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/reports/assets/application-cbdbc8928e07797d5f5545294597382d.css", 
		"Snapshot=t49.inf", 
		LAST);
//
//	web_add_header("Origin", 
//		"{URL}");

	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL={URL}/reports/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer={URL}/reports/assets/application-cbdbc8928e07797d5f5545294597382d.css", 
		"Snapshot=t50.inf", 
		LAST);

//	web_concurrent_end(NULL);

//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"cors");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("index", 
		"URL={URL}/reports/actionItemRest/index?length=5&start=0&sort=dueDate&direction=asc", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t51.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	web_url("{User_Id}", 
		"URL={URL}/reports/notificationRest/forUser/{User_Id}?_=1599742596788", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t52.inf", 
		"Mode=HTTP", 
		LAST);
//
//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("latestAdhocReport", 
		"URL={URL}/reports/reportResultRest/latestAdhocReport?length=4&start=0", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t53.inf", 
		"Mode=HTTP", 
		LAST);

//	web_revert_auto_header("X-Requested-With");

	web_url("info", 
		"URL={URL}/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t54.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("dataTables_en.json", 
		"URL={URL}/reports/assets/i18n/dataTables_en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t55.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("latestPeriodicReport", 
		"URL={URL}/reports/periodicReportConfigurationRest/latestPeriodicReport?length=4&start=0", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t56.inf", 
		"Mode=HTTP", 
		LAST);

//	web_revert_auto_header("Accept");
//
//	web_add_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	web_url("dataTables_en.json_2", 
		"URL={URL}/reports/assets/i18n/dataTables_en.json?_=1599742596789", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t57.inf", 
		"Mode=HTTP", 
		LAST);

//	web_revert_auto_header("Sec-Fetch-Dest");
//
//	web_revert_auto_header("Sec-Fetch-Mode");
//
//	web_revert_auto_header("Sec-Fetch-Site");
//
//	web_revert_auto_header("X-Requested-With");
//
//	web_add_header("Cache-Control", 
//		"no-cache");
//
//	web_add_header("Pragma", 
//		"no-cache");
//
//	web_add_header("Upgrade", 
//		"websocket");

//	web_url("websocket", 
//		"URL={URL}/reports/stomp/230/zklv4maz/websocket", 
//		"Resource=0", 
//		"Referer=", 
//		"Snapshot=t58.inf", 
//		"Mode=HTTP", 
//		LAST);

	   web_concurrent_end(NULL);
	  
	lr_end_transaction("Rep17_T02_Login",LR_AUTO);

	lr_think_time(3);

	web_revert_auto_header("Accept-Language");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	lr_start_transaction("Rep17_T03_NavigateAdhocReport_NewReport");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=Body",
		"Text=Create Report",
		LAST);

	web_url("create",
		"URL={URL}/reports/configuration/create", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/dashboard/index", 
		"Snapshot=t60.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_concurrent_start(NULL);

	web_url("tags-0a636c4c7bc5e4dd91c0e4e6d1889215.js", 
		"URL={URL}/reports/assets/app/tags-0a636c4c7bc5e4dd91c0e4e6d1889215.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t61.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");

	web_url("templateQueries-40bbfd6232c6e3d39d5c0d24d8198ac6.js", 
		"URL={URL}/reports/assets/app/configuration/templateQueries-40bbfd6232c6e3d39d5c0d24d8198ac6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t62.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");

	web_url("configurationCommon-2f0ee612a463e0aa971eab212c64352d.js", 
		"URL={URL}/reports/assets/app/configuration/configurationCommon-2f0ee612a463e0aa971eab212c64352d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t63.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");

	web_url("scheduler-293bc77ad497c01ec53bcb2f97095e6b.js", 
		"URL={URL}/reports/assets/app/scheduler-293bc77ad497c01ec53bcb2f97095e6b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t64.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");

	web_url("dateRange-73b821853e1bdbb1b6b76bf0136878f1.js", 
		"URL={URL}/reports/assets/app/configuration/dateRange-73b821853e1bdbb1b6b76bf0136878f1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t65.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");

	web_url("periodicReport-d7d9353e8fb7cc172ac9a0cf79dc2731.js", 
		"URL={URL}/reports/assets/app/configuration/periodicReport-d7d9353e8fb7cc172ac9a0cf79dc2731.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t66.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");

	web_url("deliveryOption-05a20bf051d1f3fb43f17352ce08685a.js", 
		"URL={URL}/reports/assets/app/configuration/deliveryOption-05a20bf051d1f3fb43f17352ce08685a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t67.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"style");

	web_url("configuration-11b5b002dec2c8f1f643a1db6b80c6db.css", 
		"URL={URL}/reports/assets/configuration-11b5b002dec2c8f1f643a1db6b80c6db.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t69.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"style");

	web_url("copyPasteModal-e538fdadfa9bb40beefda62316b6268f.css", 
		"URL={URL}/reports/assets/copyPasteModal-e538fdadfa9bb40beefda62316b6268f.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t70.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");

	web_url("blankParameters-6b9040b9676c98a7861241e241c4df28.js", 
		"URL={URL}/reports/assets/app/configuration/blankParameters-6b9040b9676c98a7861241e241c4df28.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t71.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"style");

	web_url("expandingTextarea-e6f68bca81423576f208f67bb1a470d2.css", 
		"URL={URL}/reports/assets/expandingTextarea-e6f68bca81423576f208f67bb1a470d2.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t72.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");

	web_url("copyPasteValues-3ece0aca4da1adbba99a58d4936d46de.js", 
		"URL={URL}/reports/assets/app/configuration/copyPasteValues-3ece0aca4da1adbba99a58d4936d46de.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t73.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");

	web_url("expandingTextarea-04fa51fd39d03f48f1fbbac3953c97b8.js", 
		"URL={URL}/reports/assets/app/expandingTextarea-04fa51fd39d03f48f1fbbac3953c97b8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t74.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");

	web_url("emailConfiguration-59c065e4239f87a883e747de81101001.js", 
		"URL={URL}/reports/assets/app/configuration/emailConfiguration-59c065e4239f87a883e747de81101001.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t75.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");

	web_url("disableAutocomplete-4b64c67585270722b33b13c06f9e5327.js", 
		"URL={URL}/reports/assets/app/disableAutocomplete-4b64c67585270722b33b13c06f9e5327.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t76.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"empty");

	web_url("column-view-e4186929b349cb382ade667c0c6a98f5.html", 
		"URL={URL}/reports/assets/plugin/dictionary/column-view-e4186929b349cb382ade667c0c6a98f5.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t77.inf", 
		"Mode=HTTP", 
		LAST);
//
//	web_concurrent_end(NULL);
//
//	web_add_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_header("If-None-Match", 
//		"\"i18n/en-73992e9f1e3ec42357f9b54766fd9d49.json\"");

	web_url("en.json_2", 
		"URL={URL}/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t68.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"style");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"no-cors");

	web_url("dictionaries-e3ca4a1b0e40defbb26604f71d113fd0.css", 
		"URL={URL}/reports/assets/plugin/dictionary/dictionaries-e3ca4a1b0e40defbb26604f71d113fd0.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t78.inf", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"script");

	web_url("dictionaries-1cda130ac44885e1ff6e0d3c1b8e6e7d.js", 
		"URL={URL}/reports/assets/plugin/dictionary/dictionaries-1cda130ac44885e1ff6e0d3c1b8e6e7d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t79.inf", 
		LAST);

	web_url("productGroup-e9dbab739905a7ce956699bd2b2da330.js", 
		"URL={URL}/reports/assets/plugin/dictionary/productGroup-e9dbab739905a7ce956699bd2b2da330.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t80.inf", 
		LAST);

	web_url("dictionary-utils-ef4323deede5f1397600e557dd3fbaf5.js", 
		"URL={URL}/reports/assets/plugin/dictionary/dictionary-utils-ef4323deede5f1397600e557dd3fbaf5.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t81.inf", 
		LAST);

	web_url("eventGroup-b609e8b0784233cb90bf0848eae39f28.js", 
		"URL={URL}/reports/assets/plugin/dictionary/eventGroup-b609e8b0784233cb90bf0848eae39f28.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t82.inf", 
		LAST);

	web_url("productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"URL={URL}/reports/assets/plugin/dictionary/productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t83.inf", 
		LAST);

	web_url("studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"URL={URL}/reports/assets/plugin/dictionary/studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t84.inf", 
		LAST);

	web_url("dictionaryMultiSearch-6eb3fdf8ab4860190935c80f93a691c7.js", 
		"URL={URL}/reports/assets/plugin/dictionary/dictionaryMultiSearch-6eb3fdf8ab4860190935c80f93a691c7.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t85.inf", 
		LAST);

	web_url("studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"URL={URL}/reports/assets/plugin/dictionary/studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t86.inf", 
		LAST);

	web_url("emailAttachmentSplit-132f6f5b7d381a44835f915e98384f12.js", 
		"URL={URL}/reports/assets/app/emailAttachmentSplit-132f6f5b7d381a44835f915e98384f12.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t87.inf", 
		LAST);

	web_url("emailTemplateEditor-340a1a96d629c756ba1192ca0bec7179.js", 
		"URL={URL}/reports/assets/app/emailTemplateEditor-340a1a96d629c756ba1192ca0bec7179.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t88.inf", 
		LAST);

	web_url("tinymce.min-8913ae2d8b5e63961b59cb681291410b.js", 
		"URL={URL}/reports/assets/tinymce/tinymce.min-8913ae2d8b5e63961b59cb681291410b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t89.inf", 
		LAST);

	web_url("emailModal-c328f6452c15ee5b9612d5799369da83.js", 
		"URL={URL}/reports/assets/app/emailModal-c328f6452c15ee5b9612d5799369da83.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t90.inf", 
		LAST);

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL={URL}/reports/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/reports/assets/application-cbdbc8928e07797d5f5545294597382d.css", 
		"Snapshot=t91.inf", 
		LAST);

//	web_add_header("If-None-Match", 
//		"\"plugin/dictionary/column-view-e4186929b349cb382ade667c0c6a98f5.html\"");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"cors");

	web_url("column-view-e4186929b349cb382ade667c0c6a98f5.html_2", 
		"URL={URL}/reports/assets/plugin/dictionary/column-view-e4186929b349cb382ade667c0c6a98f5.html", 
		"Resource=0", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t92.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("fetchEvaluateCaseDatesForDatasource", 
		"URL={URL}/reports/configurationRest/fetchEvaluateCaseDatesForDatasource?showAllversions=true&dataSourceId=6594", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t93.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	web_url("getStringOperators", 
		"URL={URL}/reports/query/getStringOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t94.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getDateOperators", 
		"URL={URL}/reports/query/getDateOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t95.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("fetchDateRangeTypesForDatasource", 
		"URL={URL}/reports/configurationRest/fetchDateRangeTypesForDatasource?dataSourceId=6594", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t96.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	web_url("allEmailsForCC", 
		"URL={URL}/reports/email/allEmailsForCC?emails=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t97.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("fetchEvaluateCaseDateSubmissionForDatasource", 
		"URL={URL}/reports/configurationRest/fetchEvaluateCaseDateSubmissionForDatasource?dataSourceId=6594", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t98.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	web_url("getNumOperators", 
		"URL={URL}/reports/query/getNumOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t99.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("allEmails", 
		"URL={URL}/reports/email/allEmails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t100.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getValuelessOperators", 
		"URL={URL}/reports/query/getValuelessOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t101.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("{User_Id}_2", 
		"URL={URL}/reports/notificationRest/forUser/{User_Id}?_=1599742618459", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t102.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("sharedWithValues", 
		"URL={URL}/reports/userRest/sharedWithValues?ids=User_{User_Id}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t103.inf", 
		"Mode=HTTP", 
		LAST);

//	web_revert_auto_header("X-Requested-With");

	web_url("polymer.html", 
		"URL={URL}/reports/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t104.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("info_2", 
		"URL={URL}/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t105.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("theme.min.js", 
		"URL={URL}/reports/assets/tinymce/themes/modern/theme.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t106.inf", 
		LAST);

	web_url("polymer-mini.html", 
		"URL={URL}/reports/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t107.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("polymer-micro.html", 
		"URL={URL}/reports/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t108.inf", 
		"Mode=HTTP", 
		LAST);

//	web_concurrent_start(NULL);

	web_url("plugin.min.js", 
		"URL={URL}/reports/assets/tinymce/plugins/imagetools/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t109.inf", 
		LAST);

	web_url("plugin.min.js_2", 
		"URL={URL}/reports/assets/tinymce/plugins/link/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t110.inf", 
		LAST);

	web_url("plugin.min.js_3", 
		"URL={URL}/reports/assets/tinymce/plugins/table/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t111.inf", 
		LAST);

	web_url("plugin.min.js_4", 
		"URL={URL}/reports/assets/tinymce/plugins/image/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t112.inf", 
		LAST);

	web_url("plugin.min.js_5", 
		"URL={URL}/reports/assets/tinymce/plugins/code/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t113.inf", 
		LAST);

//	web_concurrent_end(NULL);
//
//	web_revert_auto_header("Accept");
//
//	web_revert_auto_header("Sec-Fetch-Dest");
//
//	web_revert_auto_header("Sec-Fetch-Mode");
//
//	web_revert_auto_header("Sec-Fetch-Site");
//
//	web_add_header("Cache-Control", 
//		"no-cache");
//
//	web_add_header("Pragma", 
//		"no-cache");
//
//	web_add_header("Upgrade", 
//		"websocket");
//
//	web_url("websocket_2", 
//		"URL={URL}/reports/stomp/541/ual7skdw/websocket", 
//		"Resource=0", 
//		"Referer=", 
//		"Snapshot=t114.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");
//
//	web_add_header("Sec-Fetch-Site", 
//		"same-origin");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"style");
//
//	web_concurrent_start(NULL);

	web_url("editor-687e49e2901f89d1e65cc77026ec0a3e.css", 
		"URL={URL}/reports/assets/editor-687e49e2901f89d1e65cc77026ec0a3e.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t115.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");
//
//	web_add_header("Sec-Fetch-Site", 
//		"same-origin");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"style");

	web_url("skin.min.css", 
		"URL={URL}/reports/assets/tinymce/skins/lightgray/skin.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t116.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");
//
//	web_add_header("Sec-Fetch-Site", 
//		"same-origin");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"style");

	web_url("content.min.css", 
		"URL={URL}/reports/assets/tinymce/skins/lightgray/content.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t117.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("Sec-Fetch-Site", 
//		"same-origin");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"script");

	web_url("column-view-lib-ac11072f2d25b52e3f9f4302182ca97c.js", 
		"URL={URL}/reports/assets/plugin/dictionary/column-view-lib-ac11072f2d25b52e3f9f4302182ca97c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t118.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("Rep17_T03_NavigateAdhocReport_NewReport",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("Rep17_T04_ClickProductLookUp");

	lr_end_transaction("Rep17_T04_ClickProductLookUp",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("Rep17_T05_SearchProduct");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-CSRF-TOKEN",
		"{CsrfTokenId2}");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("searchViews", 
		"Action={URL}/reports/productDictionary/searchViews", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t119.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=contains", "Value={Prod_Name}", ENDITEM, 
		"Name=dictionaryLevel", "Value=1", ENDITEM, 
		"Name=ref_level", "Value=", ENDITEM, 
		"Name=exact_search", "Value=false", ENDITEM, 
		"Name=imp", "Value=false", ENDITEM, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=filters", "Value={}", ENDITEM, 
		LAST);

	lr_end_transaction("Rep17_T05_SearchProduct",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("Rep17_T06_SelectProduct");

	web_custom_request("getSelectedItem", 
		"URL={URL}/reports/productDictionary/getSelectedItem?productId={Prd_Id}&dataSource=pva&dictionaryLevel=1&currentLang=en", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t120.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_submit_data("getPreLevelProductParents", 
		"Action={URL}/reports/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t121.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=1", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=productIds", "Value={Prd_Id}", ENDITEM, 
		LAST);

//	web_revert_auto_header("Origin");
//
//	web_revert_auto_header("X-CSRF-TOKEN");
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_url("keep-alive", 
//		"URL={URL}/reports/keep-alive?_=1599742618460", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/configuration/create", 
//		"Snapshot=t122.inf", 
//		"Mode=HTTP", 
//		LAST);

	lr_end_transaction("Rep17_T06_SelectProduct",LR_AUTO);

	lr_think_time(3);

//	web_url("keep-alive_2", 
//		"URL={URL}/reports/keep-alive?_=1599742618461", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/reports/configuration/create", 
//		"Snapshot=t123.inf", 
//		"Mode=HTTP", 
//		LAST);

	lr_start_transaction("Rep17_T07_SelectReportTemplate");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("getTemplateList", 
		"URL={URL}/reports/reportTemplateRest/getTemplateList?term=&page=1&max=30&oldSelectedValue=&_=1599742618462", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t124.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateList_2", 
		"URL={URL}/reports/reportTemplateRest/getTemplateList?term=Case+Line+Listing+(Study)&page=1&max=30&oldSelectedValue=&_=1599742618463", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t125.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("customSQLValuesForTemplate", 
		"URL={URL}/reports/template/customSQLValuesForTemplate?templateId={Template_Id}&_=1599742618464", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t126.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("poiInputsForTemplate", 
		"URL={URL}/reports/template/poiInputsForTemplate?templateId={Template_Id}&_=1599742618465", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/configuration/create", 
		"Snapshot=t127.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("Rep17_T07_SelectReportTemplate",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("Rep17_T08_SaveAndRun");

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Cache-Control", 
		"max-age=0");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=Body",
		"Text=Your report has been scheduled and will be delivered",
		LAST);

	web_submit_data("run",
		"Action={URL}/reports/configuration/run",
		"Method=POST",
		"RecContentType=text/html",
		"Referer={URL}/reports/configuration/create",
		"Snapshot=t132.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=owner", "Value={User_Id}", ENDITEM,
		"Name=_suspectProduct", "Value=", ENDITEM,
		"Name=productSelection", "Value={\"1\":[{\"name\":\"{Prod_Name}\",\"id\":\"{Prd_Id}\"}],\"2\":[],\"3\":[],\"4\":[]}", ENDITEM,
		"Name=productGroupSelection", "Value=[]", ENDITEM,
		"Name=studySelection", "Value=", ENDITEM,
		"Name=_limitPrimaryPath", "Value=", ENDITEM,
		"Name=eventSelection", "Value=", ENDITEM,
		"Name=eventGroupSelection", "Value=", ENDITEM,
		"Name=JSONExpressionValues", "Value=", ENDITEM,
		"Name=globalQuery", "Value=", ENDITEM,
		"Name=useCaseSeries", "Value=", ENDITEM,
		"Name=validQueries", "Value=", ENDITEM,
		"Name=evaluateDateAsNonSubmission", "Value=LATEST_VERSION", ENDITEM,
		"Name=evaluateDateAsSubmissionDate", "Value=LATEST_VERSION", ENDITEM,
		"Name=evaluateDateAs", "Value=LATEST_VERSION", ENDITEM,
		"Name=asOfVersionDate", "Value=", ENDITEM,
		"Name=dateRangeType.id", "Value=1", ENDITEM,
		"Name=globalDateRangeInformation.dateRangeEnum", "Value=CUSTOM", ENDITEM,
		"Name=configurationInstance.globalDateRangeInformation.id", "Value=", ENDITEM,
		"Name=globalDateRangeInformation.relativeDateRangeValue", "Value=1", ENDITEM,
		"Name=globalDateRangeInformation.dateRangeStartAbsolute", "Value={From_Date}", ENDITEM,
		"Name=globalDateRangeInformation.dateRangeEndAbsolute", "Value={To_Date}", ENDITEM,
		"Name=sourceProfile.id", "Value=6594", ENDITEM,
		"Name=_excludeFollowUp", "Value=", ENDITEM,
		"Name=_includeLockedVersion", "Value=", ENDITEM,
		"Name=_includeAllStudyDrugsCases", "Value=", ENDITEM,
		"Name=includeAllStudyDrugsCases", "Value=on", ENDITEM,
		"Name=_excludeNonValidCases", "Value=", ENDITEM,
		"Name=excludeNonValidCases", "Value=on", ENDITEM,
		"Name=_includeMedicallyConfirmedCases", "Value=", ENDITEM,
		"Name=_includeNonSignificantFollowUp", "Value=", ENDITEM,
		"Name=_event_exactSearch", "Value=", ENDITEM,
		"Name=_product_exactSearch", "Value=", ENDITEM,
		"Name=productGroupName", "Value=", ENDITEM,
		"Name=shareWithProductGroup", "Value=", ENDITEM,
		"Name=descriptionProductGroup", "Value=", ENDITEM,
		"Name=productGroupId", "Value=", ENDITEM,
		"Name=_study_exactSearch", "Value=", ENDITEM,
		"Name=studyDrugs", "Value=", ENDITEM,
		"Name=_study_imp", "Value=", ENDITEM,
		"Name=studyCompounds", "Value=", ENDITEM,
		"Name=eventGroupShareWith", "Value=", ENDITEM,
		"Name=eventGroupDescription", "Value=", ENDITEM,
		"Name=eventGroupId", "Value=", ENDITEM,
		"Name=templateQueries[0].version", "Value=", ENDITEM,
		"Name=templateQueries[0].id", "Value=", ENDITEM,
		"Name=templateQueries[0].dynamicFormEntryDeleted", "Value=false", ENDITEM,
		"Name=templateQueries[0].new", "Value=true", ENDITEM,
		"Name=templateQueries[0].template", "Value={Template_Id}", ENDITEM,
		"Name=templateQueries[0].header", "Value=", ENDITEM,
		"Name=templateQueries[0].title", "Value=", ENDITEM,
		"Name=templateQueries[0].footer", "Value=", ENDITEM,
		"Name=templateQueries[_clone]._headerProductSelection", "Value=", ENDITEM,
		"Name=templateQueries[_clone]._headerDateRange", "Value=", ENDITEM,
		"Name=templateQueries[_clone]._displayMedDraVersionNumber", "Value=", ENDITEM,
		"Name=templateQueries[_clone]._privacyProtected", "Value=", ENDITEM,
		"Name=templateQueries[_clone]._blindProtected", "Value=", ENDITEM,
		"Name=templateQueries[0].query", "Value=", ENDITEM,
		"Name=templateQueries[0].queryLevel", "Value=CASE", ENDITEM,
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeEnum", "Value=PR_DATE_RANGE", ENDITEM,
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.relativeDateRangeValue", "Value=1", ENDITEM,
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeStartAbsolute", "Value=", ENDITEM,
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeEndAbsolute", "Value=", ENDITEM,
		"Name=templateQueries[0].validQueries", "Value=", ENDITEM,
		"Name=reportName", "Value={ReportName}", ENDITEM,
		"Name=description", "Value={ReportName}", ENDITEM,
		"Name=tenantId", "Value=1", ENDITEM,
		"Name=_qualityChecked", "Value=", ENDITEM,
		"Name=_isTemplate", "Value=", ENDITEM,
		"Name=sharedWith", "Value=User_{User_Id}", ENDITEM,
		"Name=TimeZoneSelectlist", "Value=", ENDITEM,
		"Name=intervalSelectlist", "Value=none", ENDITEM,
		"Name=monthlySelectlist", "Value=1", ENDITEM,
		"Name=repeat-monthly", "Value=bysetpos", ENDITEM,
		"Name=monthlySelectlist", "Value=1", ENDITEM,
		"Name=monthlySelectlist", "Value=SU", ENDITEM,
		"Name=repeat-yearly", "Value=bymonthday", ENDITEM,
		"Name=monthlySelectlist", "Value=1", ENDITEM,
		"Name=monthlySelectlist", "Value=1", ENDITEM,
		"Name=yearlyDateSelectlist", "Value=1", ENDITEM,
		"Name=yearlyDaySelectlist", "Value=SU", ENDITEM,
		"Name=yearlyDaySelectlist", "Value=1", ENDITEM,
		"Name=EndSelectlist", "Value=never", ENDITEM,
		"Name=isEnabled", "Value=true", ENDITEM,
		"Name=schedulerTime", "Value={SchDate} {SchTime1}", ENDITEM,
		"Name=scheduleDateJSON", "Value={\"startDateTime\":\"{SchDate}T{SchTime2}Z\",\"timeZone\":{\"text\":\"(GMT +00:00) UTC\\n"
		"                                \",\"selected\":true,\"offset\":\"+00:00\",\"name\":\"UTC\"},\"recurrencePattern\":\"FREQ=DAILY;INTERVAL=1;COUNT=1\"}", ENDITEM,
		"Name=configSelectedTimeZone", "Value=UTC", ENDITEM,
		"Name=timezone", "Value=name : UTC,offset : +00:00 ", ENDITEM,
		"Name=deliveryOption._attachmentFormats", "Value=", ENDITEM,
		"Name=deliveryOption._attachmentFormats", "Value=", ENDITEM,
		"Name=deliveryOption._attachmentFormats", "Value=", ENDITEM,
		"Name=deliveryOption._attachmentFormats", "Value=", ENDITEM,
		"Name=deliveryOption._attachmentFormats", "Value=", ENDITEM,
		"Name=deliveryOption._attachmentFormats", "Value=", ENDITEM,
		"Name=deliveryOption.additionalAttachments", "Value=", ENDITEM,
		"Name=ccValue", "Value=", ENDITEM,
		"Name=subjectValue", "Value=", ENDITEM,
		"Name=emailConfiguration.subject", "Value=", ENDITEM,
		"Name=bodyValue", "Value=", ENDITEM,
		"Name=emailConfiguration.body", "Value=", ENDITEM,
		"Name=emailConfiguration._noEmailOnNoData", "Value=", ENDITEM,
		"Name=noEmailOnNoDataValue", "Value=", ENDITEM,
		"Name=emailConfiguration.pageOrientation", "Value=PORTRAIT", ENDITEM,
		"Name=pageOrientationValue", "Value=PORTRAIT", ENDITEM,
		"Name=emailConfiguration.paperSize", "Value=LETTER", ENDITEM,
		"Name=paperSizeValue", "Value=LETTER", ENDITEM,
		"Name=emailConfiguration.sensitivityLabel", "Value=SENSITIVE", ENDITEM,
		"Name=sensitivityLabelValue", "Value=SENSITIVE", ENDITEM,
		"Name=emailConfiguration._showPageNumbering", "Value=", ENDITEM,
		"Name=emailConfiguration.showPageNumbering", "Value=on", ENDITEM,
		"Name=showPageNumberingValue", "Value=true", ENDITEM,
		"Name=emailConfiguration._showCompanyLogo", "Value=", ENDITEM,
		"Name=emailConfiguration.showCompanyLogo", "Value=on", ENDITEM,
		"Name=showCompanyLogoValue", "Value=true", ENDITEM,
		"Name=emailConfiguration._excludeCriteriaSheet", "Value=", ENDITEM,
		"Name=excludeCriteriaSheetValue", "Value=false", ENDITEM,
		"Name=emailConfiguration._excludeAppendix", "Value=", ENDITEM,
		"Name=excludeAppendixValue", "Value=false", ENDITEM,
		"Name=emailConfiguration._excludeComments", "Value=", ENDITEM,
		"Name=excludeCommentsValue", "Value=false", ENDITEM,
		"Name=emailConfiguration._excludeLegend", "Value=", ENDITEM,
		"Name=excludeLegendValue", "Value=false", ENDITEM,
		"Name=emailTemplateName", "Value=", ENDITEM,
		"Name=emailTemplateDescription", "Value=", ENDITEM,
		"Name=delimiter", "Value=none", ENDITEM,
		"Name=templateBlanks", "Value=false", ENDITEM,
		"Name=queryBlanks", "Value=false", ENDITEM,
		"Name=schedulerFrom", "Value=createPage", ENDITEM,
		"Name=editable", "Value=true", ENDITEM,
		"Name=blankValuesJSON", "Value=", ENDITEM,
		"Name=_csrf", "Value={CsrfTokenId2}", ENDITEM,
		LAST);

	web_concurrent_start(NULL);

	web_url("handlebars-v4.0.11-5c362fdd07b93a39b600cea43165302f.js", 
		"URL={URL}/reports/assets/handlebar/handlebars-v4.0.11-5c362fdd07b93a39b600cea43165302f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t133.inf", 
		LAST);

	web_url("executionStatus-0291e27b037d335048c8c802b3bd133c.css", 
		"URL={URL}/reports/assets/executionStatus-0291e27b037d335048c8c802b3bd133c.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t135.inf", 
		LAST);

	web_url("pvr-common-util-c530da31e318f4a1f8ebc65324b8ce1f.js", 
		"URL={URL}/reports/assets/app/utils/pvr-common-util-c530da31e318f4a1f8ebc65324b8ce1f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t136.inf", 
		LAST);

	web_url("pvr-filter-util-305f5a92f479b9a326da11feef107b94.js", 
		"URL={URL}/reports/assets/app/utils/pvr-filter-util-305f5a92f479b9a326da11feef107b94.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t137.inf", 
		LAST);

	web_url("executionStatus-4cbbed804b3f1124a43c8c7bca08a9fa.js", 
		"URL={URL}/reports/assets/app/configuration/executionStatus-4cbbed804b3f1124a43c8c7bca08a9fa.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t138.inf", 
		LAST);

	web_url("dataTablesActionButtons-dbaa4f19bed1b0ac11118699876720cb.js", 
		"URL={URL}/reports/assets/app/dataTablesActionButtons-dbaa4f19bed1b0ac11118699876720cb.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t139.inf", 
		LAST);

//	web_concurrent_end(NULL);
//
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_add_header("If-None-Match", 
//		"\"i18n/en-73992e9f1e3ec42357f9b54766fd9d49.json\"");

	web_url("en.json_3", 
		"URL={URL}/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t134.inf", 
		LAST);
//
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_add_header("If-None-Match", 
//		"\"i18n/dataTables_en-b9b01b8c59208a270975d85c7973f4ec.json\"");
//
//	web_concurrent_start(NULL);

	web_url("dataTables_en.json_3", 
		"URL={URL}/reports/assets/i18n/dataTables_en.json", 
		"Resource=1", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t140.inf", 
		LAST);
//
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("datepicker.hbs", 
		"URL={URL}/reports/assets/app/hbs-templates/datepicker.hbs", 
		"Resource=1", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t141.inf", 
		LAST);

//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("filter_panel.hbs", 
		"URL={URL}/reports/assets/app/hbs-templates/filter_panel.hbs", 
		"Resource=1", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t142.inf", 
		LAST);

//	web_concurrent_end(NULL);
//
//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"cors");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("{User_Id}_3", 
		"URL={URL}/reports/notificationRest/forUser/{User_Id}?_=1599742937974", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t143.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);
	web_url("executionStatus", 
		"URL={URL}/reports/configurationRest/executionStatus?draw=1&columns%5B0%5D%5Bdata%5D=reportName&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=periodicReportType&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=version&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=executionStatus&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=false&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B4%5D%5Bdata%5D=owner&columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=runDate&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=executionTime&columns%5B6%5D%5Bname%5D=&"
		"columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=frequency&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=sharedWith&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D="
		"false&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=deliveryMedia&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=false&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=runDate&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=true&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=5&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&tableFilter=%7B%7D&advancedFilter=false&sharedwith=&searchString=&direction=desc&sort=runDate&status=GENERATING&_=1599742937975", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t144.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"*/*");

	web_url("info_3", 
		"URL={URL}/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t145.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

//	web_reg_find("Text=Your report has been scheduled", 
//		LAST);

//	web_add_header("Cache-Control", 
//		"no-cache");
//
//	web_add_header("Pragma", 
//		"no-cache");
//
//	web_add_header("Upgrade", 
//		"websocket");
//
//	web_url("websocket_3", 
//		"URL={URL}/reports/stomp/074/h1uu3q9e/websocket", 
//		"Resource=0", 
//		"Referer=", 
//		"Snapshot=t146.inf", 
//		"Mode=HTTP", 
//		LAST);

	lr_end_transaction("Rep17_T08_SaveAndRun",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("Rep17_T09_Logout");

	web_reg_find("Search=Body",
		"Text=Login",
		LAST);

	web_url("logout", 
		"URL={URL}/reports/logout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/reports/executionStatus/list", 
		"Snapshot=t149.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("Rep17_T09_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}