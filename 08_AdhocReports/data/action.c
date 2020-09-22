Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

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

	web_url("analytics.js", 
		"URL=https://www.google-analytics.com/analytics.js", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	web_add_cookie("ANID=AHWqTUlArcxAu1rswMFtM3AWFrohvuUB1AHw6cmcXlcDj-xzHA2DNh5bG5i3eXE2; DOMAIN=accounts.google.com");

	web_add_cookie("NID=204=GK5vgUo0BoJ4JnIkpJJcAUbeFiIRuju8efCeSvvXlqQlD0ofCLiGwxogc3moJNwbC6lWK1HADE3X-tIQJcO_ZB8x4A6zqDPDsOjcOs9ynPRcmqzt0GfmGBdYBPke-srHSkO2qBNHIqrfvFubOqmCepl0RaABCLcvOzAJpixeQ6s; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2020-09-10-07; DOMAIN=accounts.google.com");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_header("Origin", 
		"https://www.google.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.102 Safari/537.36");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		"Body= ", 
		LAST);

	web_add_header("If-None-Match", 
		"ab70938de7a1dfb34ec8caf3f7592491c58e50f1");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=85", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_header("If-None-Match", 
		"\"bfea30f5f542aaef282aad29bdf2ed5d\"");

	web_concurrent_start(NULL);

	web_url("mixpanel-2.2.min.js", 
		"URL=https://cdn.mxpnl.com/libs/mixpanel-2.2.min.js", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t4.inf", 
		LAST);

	web_add_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("client_model_v5_ext_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t5.inf", 
		LAST);

	web_concurrent_end(NULL);

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

	web_url("reports", 
		"URL=https://pvr-perf.rxlogix.com/reports", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("login-bb2325f03b9d722b33f4a61d5aade09f.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/login-bb2325f03b9d722b33f4a61d5aade09f.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Snapshot=t7.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_url("decide", 
		"URL=https://api.mixpanel.com/decide/?verbose=1&version=1&lib=web&token=94b5c311692e7c9d03cef9c9a7a32eaf&ip=1&_=1599742559952", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_auto_header("Sec-Fetch-Dest", 
		"style");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("application-cbdbc8928e07797d5f5545294597382d.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/application-cbdbc8928e07797d5f5545294597382d.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Snapshot=t9.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("application-f8ff3189b5e73f6aa63ba16652634041.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/application-f8ff3189b5e73f6aa63ba16652634041.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Snapshot=t10.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_auto_header("Sec-Fetch-Dest", 
		"style");

	web_url("cookiecuttr-ae22cd548558353de252387c318c41c3.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/cookiecuttr-ae22cd548558353de252387c318c41c3.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Snapshot=t11.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("jquery.cookie-1.4.1.min-62bfa1d0d94f4791957d86b90ba720db.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/jquery/jquery.cookie-1.4.1.min-62bfa1d0d94f4791957d86b90ba720db.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Snapshot=t12.inf", 
		LAST);

	web_url("customise-jquery.cookiecuttr-7d5013f65bb830d28e9c0f882402df22.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/jquery/customise-jquery.cookiecuttr-7d5013f65bb830d28e9c0f882402df22.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Snapshot=t13.inf", 
		LAST);

	web_add_header("Origin", 
		"chrome-extension://mbopgmdnpcbohhpnfglgohlbhfongabi");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_submit_data("track", 
		"Action=https://api.mixpanel.com/track/?verbose=1&ip=1&_=1599742564854", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=data", "Value="
		"WwogICAgeyJldmVudCI6ICIkd2ViX2V2ZW50IiwicHJvcGVydGllcyI6IHsiJG9zIjogIldpbmRvd3MiLCIkYnJvd3NlciI6ICJDaHJvbWUiLCIkY3VycmVudF91cmwiOiAiY2hyb21lLWV4dGVuc2lvbjovL21ib3BnbWRucGNib2hocG5mZ2xnb2hsYmhmb25nYWJpL19nZW5lcmF0ZWRfYmFja2dyb3VuZF9wYWdlLmh0bWwiLCIkYnJvd3Nlcl92ZXJzaW9uIjogODUsIiRzY3JlZW5faGVpZ2h0IjogNzY4LCIkc2NyZWVuX3dpZHRoIjogMTM2NiwibXBfbGliIjogIndlYiIsIiRsaWJfdmVyc2lvbiI6ICIyLjM5LjAiLCIkaW5zZXJ0X2lkIjogImtjZnpmY3A5MjFza2R0ZWwiLCJ0aW1lIjogMTU5OTc0MjU2MS4zODEsImRpc3RpbmN0X2lkIjogIjE3M2MzMTEyNzhkMT"
		"UtMDUxY2EzOGYxM2FkYTQtMzMyMzc2NS0xMDAyMDAtMTczYzMxMTI3OTA2IiwiJGRldmljZV9pZCI6ICIxNzNjMzExMjc4ZDE1LTA1MWNhMzhmMTNhZGE0LTMzMjM3NjUtMTAwMjAwLTE3M2MzMTEyNzkwNiIsIiRpbml0aWFsX3JlZmVycmVyIjogIiRkaXJlY3QiLCIkaW5pdGlhbF9yZWZlcnJpbmdfZG9tYWluIjogIiRkaXJlY3QiLCIkdGl0bGUiOiAiIiwiJGV2ZW50X3R5cGUiOiAicGFnZXZpZXciLCIkY2VfdmVyc2lvbiI6IDEsIiRob3N0IjogIm1ib3BnbWRucGNib2hocG5mZ2xnb2hsYmhmb25nYWJpIiwiJHBhdGhuYW1lIjogIi9fZ2VuZXJhdGVkX2JhY2tncm91bmRfcGFnZS5odG1sIiwidG9rZW4iOiAiOTRiNWMzMTE2OTJlN2M5ZDAzY2VmOWM5YTdhMzJl"
		"YWYifX0KXQ==", ENDITEM, 
		LAST);

	web_add_header("Origin", 
		"https://pvr-perf.rxlogix.com");

	web_url("OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2?v=1.1.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://pvr-perf.rxlogix.com/reports/assets/application-cbdbc8928e07797d5f5545294597382d.css", 
		"Snapshot=t15.inf", 
		LAST);

	web_add_cookie("cc_cookie_decline=null; DOMAIN=pvr-perf.rxlogix.com");

	web_add_cookie("cc_cookie_accept=cc_cookie_accept; DOMAIN=pvr-perf.rxlogix.com");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Cache-Control", 
		"max-age=0");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("auth", 
		"URL=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Snapshot=t16.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("Rep1_T01_OpenApplication");

	lr_end_transaction("Rep1_T01_OpenApplication",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("Rep1_T02_Login");

	web_add_header("Content-Type", 
		"application/x-www-form-urlencoded");

	web_add_header("Origin", 
		"https://pvr-perf.rxlogix.com");

	web_submit_data("authenticate", 
		"Action=https://pvr-perf.rxlogix.com/reports/login/authenticate", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Snapshot=t17.inf", 
		"Mode=HTTP", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=username", "Value=perfuser1", ENDITEM, 
		"Name=password", "Value=perfuser1@123", ENDITEM, 
		"Name=_csrf", "Value=872e8186-3657-40f1-a6e4-fc23376e038a", ENDITEM, 
		LAST);

	web_revert_auto_header("Accept");

	web_revert_auto_header("Cache-Control");

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("X-Goog-Update-AppId", 
		"aapocclcgogkmnckokdopfmhonfmgoek,aohghmighlieiainnegkcijnfilokake,apdfllckaahabafndbhieahigkjlhalf,blpcfgokakmgnkcojhhkbfbldkacnbeo,djgfmlohefpomchfabngccpbaflcahjf,felcaaldnbdncclmgdcncolpebgiejap,hemibacgndhdhkfahkjdedjdgfapmfki,mbopgmdnpcbohhpnfglgohlbhfongabi,nllipdabkglnhmanndddgcihbcmjpfej,nmmhkkegccagdldgiimedpiccmgmieda,pjkljhegncpnkpknbcohdijeoejaedia,pkedcjkdefgpdelpbcmbmeomcjbeemfm");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-85.0.4183.102");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:168107004&cup2hreq=6223a83a83a6b2dddf81ab2e1bb680a99c22958fb52ab010c5d733152e9582c7", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"aapocclcgogkmnckokdopfmhonfmgoek\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{001b69dc-f323-48a3-a610-b363bfa0a576}\",\"rd\":5001},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"aohghmighlieiainnegkcijnfilokake\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\""
		",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{824110a7-1658-4069-86ec-b2af8592602e}\",\"rd\":5001},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"apdfllckaahabafndbhieahigkjlhalf\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.14.2\"}]},\"ping\":{\"ping_freshness\":\"{b67f9709-3426-4678-a616-34a8642dbaf3}\",\"rd\":5001},\"updatecheck\":{},\"version\":\"14.2\"},{\"appid\":\""
		"blpcfgokakmgnkcojhhkbfbldkacnbeo\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.4.2.8\"}]},\"ping\":{\"ping_freshness\":\"{b5188540-d692-43f4-9377-bcd23dc866cc}\",\"rd\":5001},\"updatecheck\":{},\"version\":\"4.2.8\"},{\"appid\":\"djgfmlohefpomchfabngccpbaflcahjf\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.1.6.1\"}]},\"ping\":{\"ping_freshness\":\""
		"{7ec3429d-6a93-4229-a25b-0058843d52e4}\",\"rd\":5001},\"updatecheck\":{},\"version\":\"1.6.1\"},{\"appid\":\"felcaaldnbdncclmgdcncolpebgiejap\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.1.2\"}]},\"ping\":{\"ping_freshness\":\"{45e0d375-cddd-4348-b92c-5cabd3bda173}\",\"rd\":5001},\"updatecheck\":{},\"version\":\"1.2\"},{\"appid\":\"hemibacgndhdhkfahkjdedjdgfapmfki\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\""
		"packages\":{\"package\":[{\"fp\":\"2.1.2\"}]},\"ping\":{\"ping_freshness\":\"{952a7dc6-4f9c-440d-84cf-8df5dc3203ed}\",\"rd\":5001},\"updatecheck\":{},\"version\":\"1.2\"},{\"appid\":\"mbopgmdnpcbohhpnfglgohlbhfongabi\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"1.77ce1d3507099188e40eef45eda87782029462777206292cec6b00dbba520884\"}]},\"ping\":{\"ping_freshness\":\"{47bd944a-1550-4346-b97c-307a07d2d1b3}\",\"rd\":5001},\"updatecheck\":{},\""
		"version\":\"4.9.7\"},{\"appid\":\"nllipdabkglnhmanndddgcihbcmjpfej\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.1.0\"}]},\"ping\":{\"ping_freshness\":\"{b3a4e5ea-662e-4c24-adff-62e764007c1d}\",\"rd\":5001},\"updatecheck\":{},\"version\":\"1.0\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.5\"}]},\"ping\":{\"ping_freshness\":\""
		"{858bbe59-9101-44e3-aa66-1f3a7b1275f3}\",\"rd\":5001},\"updatecheck\":{},\"version\":\"1.0.0.5\"},{\"appid\":\"pjkljhegncpnkpknbcohdijeoejaedia\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.8.2\"}]},\"ping\":{\"ping_freshness\":\"{2d5cf2bb-5096-43a0-b32d-118fca5e8417}\",\"rd\":5001},\"updatecheck\":{},\"version\":\"8.2\"},{\"appid\":\"pkedcjkdefgpdelpbcmbmeomcjbeemfm\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"other\",\""
		"packages\":{\"package\":[{\"fp\":\"1.d0e62ace64afc334330a7ac3a2cc657914feb321f1f89aee11d2a6d0e7d81c31\"}]},\"ping\":{\"ping_freshness\":\"{f929a8ed-dc69-41b2-b01c-1ad1d8a36025}\",\"rd\":5001},\"updatecheck\":{},\"version\":\"8520.615.0.5\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.1397\"},\"prodversion\":\"85.0.4183.102\",\"protocol\""
		":\"3.1\",\"requestid\":\"{11dfb376-b6d8-4a7e-b916-6c3fc1e0d092}\",\"sessionid\":\"{ed2ed86a-0166-4a2f-9c03-d266b8e7986c}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.452\"},\"updaterversion\":\"85.0.4183.102\"}}", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_auto_header("Sec-Fetch-Dest", 
		"style");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("theme_gradient_blue-e5b680b16e6c806c1a9a9ae4ce7afc98.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/theme_gradient_blue-e5b680b16e6c806c1a9a9ae4ce7afc98.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t19.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("addWidgetModal-55496a0c1d77d08dff1258ed41bf54ed.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/dashboard/addWidgetModal-55496a0c1d77d08dff1258ed41bf54ed.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t20.inf", 
		LAST);

	web_url("rxapplication-a4c64b62daed34952a91343c7b3f69bd.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/rxapplication-a4c64b62daed34952a91343c7b3f69bd.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t21.inf", 
		LAST);

	web_url("dashboard-bc7e562b6cf35fb9ffc8863c530c3b80.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/dashboard/dashboard-bc7e562b6cf35fb9ffc8863c530c3b80.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t22.inf", 
		LAST);

	web_url("actionItemModal-e7b4ce53f4cdabf3bc5cd40b9a1656bf.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/actionItem/actionItemModal-e7b4ce53f4cdabf3bc5cd40b9a1656bf.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t23.inf", 
		LAST);

	web_url("fullcalendar-ab21481ecaaf856ac398df2626c214f0.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fullcalendar/fullcalendar-ab21481ecaaf856ac398df2626c214f0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t24.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_auto_header("Sec-Fetch-Dest", 
		"style");

	web_url("gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t25.inf", 
		LAST);

	web_url("fuelux-b7cf5c5c681fcdbd63156284516c90e9.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fuelux-b7cf5c5c681fcdbd63156284516c90e9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t26.inf", 
		LAST);

	web_url("workflowModal-5491f0c21ba11e20273f35eef0ac46f9.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/workflowModal-5491f0c21ba11e20273f35eef0ac46f9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t27.inf", 
		LAST);

	web_url("dashboard-8dee5417b984f9891cddc783e9314ce6.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/dashboard-8dee5417b984f9891cddc783e9314ce6.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t28.inf", 
		LAST);

	web_url("fullcalendar.min-c86583f19d010365c34f3af8b45f413e.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fullcalendar.min-c86583f19d010365c34f3af8b45f413e.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t29.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("fullcalendar-lang-all-e4e9be403fd4dc092b72c368c27e5d47.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fullcalendar/fullcalendar-lang-all-e4e9be403fd4dc092b72c368c27e5d47.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t30.inf", 
		LAST);

	web_url("calendar-256cc2c226bcc02548ad879f630767db.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/calendar-256cc2c226bcc02548ad879f630767db.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t31.inf", 
		LAST);

	web_url("workFlow-3b78500b81fd61ce5b59cc202a54e63c.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/workFlow-3b78500b81fd61ce5b59cc202a54e63c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t32.inf", 
		LAST);

	web_url("fuelux-58910ec6bd502e7c4aabf85922131616.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fuelux/fuelux-58910ec6bd502e7c4aabf85922131616.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t33.inf", 
		LAST);

	web_url("highcharts-01ce2a5c16b4e040b95b02d8cf3ea23e.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/highcharts/highcharts-01ce2a5c16b4e040b95b02d8cf3ea23e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t34.inf", 
		LAST);

	web_url("highcharts-more-31bca387194b423710d019dfa069474a.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/highcharts/highcharts-more-31bca387194b423710d019dfa069474a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t35.inf", 
		LAST);

	web_url("no-data-to-display-93457bf691aefc406c1da97a1f8d7e2d.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/highcharts/modules/no-data-to-display-93457bf691aefc406c1da97a1f8d7e2d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t36.inf", 
		LAST);

	web_url("grouped-categories-8ddf90b557e5da14225afefcaa8bf9f6.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/highcharts/plugins/grouped-categories-8ddf90b557e5da14225afefcaa8bf9f6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t37.inf", 
		LAST);

	web_url("gridstack.min-157675a5f94f1a18234a494030c5d8f0.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/gridstack/gridstack.min-157675a5f94f1a18234a494030c5d8f0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t38.inf", 
		LAST);

	web_url("highcharts-3d-b0c0c823b44f85cb61361491f4353576.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/highcharts/highcharts-3d-b0c0c823b44f85cb61361491f4353576.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t39.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("en.json", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t40.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("gridstack.jQueryUI.min-5bd5204d23705e69adeb23742f04ff8c.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/gridstack/gridstack.jQueryUI.min-5bd5204d23705e69adeb23742f04ff8c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t41.inf", 
		LAST);

	web_url("pushNotification-26ee6ee35dd9b52934080a70ea04a8fd.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/pushNotification-26ee6ee35dd9b52934080a70ea04a8fd.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t42.inf", 
		LAST);

	web_url("deleteModal-68b8e74283c8070801d2afbaf40831a1.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/deleteModal-68b8e74283c8070801d2afbaf40831a1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t43.inf", 
		LAST);

	web_url("jquery.core-2c7cdf128b42d849235dea8cadd879b8.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/jquery.core-2c7cdf128b42d849235dea8cadd879b8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t44.inf", 
		LAST);

	web_url("store.modern.min-ee86dbde67356086e53dffdd31c6867d.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/store.modern.min-ee86dbde67356086e53dffdd31c6867d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t45.inf", 
		LAST);

	web_url("jquery.app-782d8f87ac279a019b37b18a315654b2.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/jquery.app-782d8f87ac279a019b37b18a315654b2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t46.inf", 
		LAST);

	web_url("customise-jquery-idleTimeout-6286fe026bdf78a6c38a29cfd8d979c8.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/jquery/customise-jquery-idleTimeout-6286fe026bdf78a6c38a29cfd8d979c8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t47.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_auto_header("Sec-Fetch-Dest", 
		"style");

	web_url("fullcalendar.print-5e9985f0185898b586ec4820f63bb446.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fullcalendar.print-5e9985f0185898b586ec4820f63bb446.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t48.inf", 
		LAST);

	web_add_header("Origin", 
		"https://pvr-perf.rxlogix.com");

	web_concurrent_start(NULL);

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://pvr-perf.rxlogix.com/reports/assets/application-cbdbc8928e07797d5f5545294597382d.css", 
		"Snapshot=t49.inf", 
		LAST);

	web_add_header("Origin", 
		"https://pvr-perf.rxlogix.com");

	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=https://pvr-perf.rxlogix.com/reports/assets/application-cbdbc8928e07797d5f5545294597382d.css", 
		"Snapshot=t50.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("index", 
		"URL=https://pvr-perf.rxlogix.com/reports/actionItemRest/index?length=5&start=0&sort=dueDate&direction=asc", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t51.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("64724", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/64724?_=1599742596788", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t52.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("latestAdhocReport", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportResultRest/latestAdhocReport?length=4&start=0", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t53.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t54.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("dataTables_en.json", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/dataTables_en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t55.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("latestPeriodicReport", 
		"URL=https://pvr-perf.rxlogix.com/reports/periodicReportConfigurationRest/latestPeriodicReport?length=4&start=0", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t56.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("dataTables_en.json_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/dataTables_en.json?_=1599742596789", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t57.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_url("websocket", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/230/zklv4maz/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t58.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("Rep1_T02_Login",LR_AUTO);

	lr_think_time(3);

	web_revert_auto_header("Accept-Language");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,cmahhnpholdijhjokonmfdjbfmklppij,llkgjffcdpffmhiakmfcdcblohccpfmo,khaoiebndkojlmppeemjhbpbandiljpe,giekcmmlnklenlaomppkphknjmnnpneh,gkmgaooipdjhmangpemjhigmamcehddo,ehgidpndbllacpjalkiimkbadgjfnnmc,oimompecagnajdejgnnjijobebaeigek,aemomkdncapdnfajjbbcbdebjljbpmpj,mimojjlkmoijpicakmndhoigimigcmbb,gcmjkmgdlgnkkcocmoeiminaijmmjnii,ggkkehgbnfjpeggfpleeakpidbkibbmn,hfnkpimlhhgieaddgfemjhofmfblmnib,bklopemakmnopmghhmccadeonafabnal,hnimpnehoodheedghdeeijklkeaacbdc,"
		"jflookgnkcckhobaglndicnbbgbonegd");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-85.0.4183.102");

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:4250933451&cup2hreq=8dfc0b195d4de96574eb74e32d9f8b0b1022dec56369fefb1b6f420d682c55b6", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t59.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GCEU\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{14855af1-7b92-4849-b271-b9ef3c9f9350}\",\"rd\":5001},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"cmahhnpholdijhjokonmfdjbfmklppij\",\"brand\":\"GCEU\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{c27e71cc-a7f3-4a96-8f35-2724ca73707e}\",\"rd\":5001},\"updatecheck\":{},\""
		"version\":\"0.0.0.0\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GCEU\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.3d885f0577e4fd9e5b9251ba18576da6b49e80870ceaafcaa996e3b1dc762c01\"}]},\"ping\":{\"ping_freshness\":\"{1c56d0aa-d48c-4863-b9e7-d55d15da6715}\",\"rd\":5001},\"updatecheck\":{},\"version\":\"1.0.0.4\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GCEU\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\""
		"packages\":{\"package\":[{\"fp\":\"1.5cb8df53fe2b86bf838ea2c9ffc3d5ef8460f679a779ac8aa924b5afffd052cb\"}]},\"ping\":{\"ping_freshness\":\"{d0558c7f-de8e-44ef-8311-31807087e597}\",\"rd\":5001},\"updatecheck\":{},\"version\":\"42\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GCEU\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\""
		":{\"ping_freshness\":\"{491f2922-5df0-44f9-ba30-58b9741a6711}\",\"rd\":5001},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"GCEU\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.b2b6e45daada4b5ab77a911b8c5b7762131377c49d639c72a82aa0f32db917a0\"}]},\"ping\":{\"ping_freshness\":\"{76318c74-cabf-4462-9b75-fdd4a0988311}\",\"rd\":5001},\"tag\":\"eset_exp_b\",\""
		"updatecheck\":{},\"version\":\"84.243.200\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GCEU\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{8a74d723-b077-4fdb-acbc-2dfee7a571df}\",\"rd\":5001},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\""
		"brand\":\"GCEU\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{b03762a7-b203-4137-a3b7-10819db1e518}\",\"rd\":5001},\"updatecheck\":{},\"version\":\"4.10.1679.0\"},{\"appid\":\"aemomkdncapdnfajjbbcbdebjljbpmpj\",\"brand\":\"GCEU\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{e4688b45-399f-43d5-94c6-cc95b6fe22e9}\",\"rd\":5001},\"updatecheck\":{},\"version\":\"1.0.5.0\"},{\"appid\":\"mimojjlkmoijpicakmndhoigimigcmbb\",\"brand\":\"GCEU\",\"cohort\":\"1:d0j:\",\"cohorthint\":\"Chrome [M50+]\","
		"\"cohortname\":\"Chrome [M50+]\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.10260edd25c540f58ac3ad8f19d86e8d7ce1ece4d904aa175b862b9c740ddeb5\"}]},\"ping\":{\"ping_freshness\":\"{cf7253d5-b1da-4cfa-94e9-9af3ae78ae4d}\",\"rd\":5001},\"updatecheck\":{},\"version\":\"32.0.0.433\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GCEU\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54ToM99\",\"cohortname\":\"M54ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.b946087d73d1736b59e32664c42ba9ab940aba04046dd3a611c1b1d53bc43dfd\"}]},\"ping\":{\"ping_freshness\":\"{379f635a-00ca-43a9-82c4-f3d93c543bf4}\",\"rd\":5001},\"updatecheck\":{},\"version\":\"9.16.0\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GCEU\",\"cohort\":\"1:ut9:wkx@0.01\",\"cohorthint\":\"M80ToM89\",\"cohortname\":\"M80ToM89\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.d2599810a3d0419bb40b8f6bf98160b6d09cffd25fa2ab53eee9b0339b3fe360\"}]},\"ping\":{\""
		"ping_freshness\":\"{40945aa6-8d6e-4ef0-8a74-4388e8b5d437}\",\"rd\":5001},\"updatecheck\":{},\"version\":\"2020.8.30.1141\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GCEU\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.fa35b534ce3264a2eea406169fd722048c35d2a847cbd3797605122e39d7aa9b\"}]},\"ping\":{\"ping_freshness\":\"{bb029bee-2646-4e69-90e6-c6ccb3763212}\",\"rd\":5001},\"updatecheck\":{},\"version\""
		":\"6108\"},{\"appid\":\"bklopemakmnopmghhmccadeonafabnal\",\"brand\":\"GCEU\",\"cohort\":\"1:swl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6dce22b9a11fa1e62b22559c4a157ce745e7fc63c6c6941a82cf11e8ecf65b0e\"}]},\"ping\":{\"ping_freshness\":\"{839d72b1-5499-4b22-9307-a031b62e83d6}\",\"rd\":5001},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GCEU\",\"enabled\":true,\"packages\":{\""
		"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{605da0d2-daee-4261-929c-12ec47d36b3f}\",\"rd\":5001},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GCEU\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.bb8b17bcab33df7ba7610f22cd2f82f969fa82c11f651df7985a250aa018893b\"}]},\"ping\":{\""
		"ping_freshness\":\"{67cb62c3-71fc-4a7c-a84f-af9f5a975d0d}\",\"rd\":5001},\"updatecheck\":{},\"version\":\"2067\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.1397\"},\"prodversion\":\"85.0.4183.102\",\"protocol\":\"3.1\",\"requestid\":\"{97dc5194-76ae-4c6c-9702-492b41a4c73d}\",\"sessionid\":\"{086f3ed6-bd51-4463-b4c8-ef7aa6a3dd7a}\",\""
		"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.452\"},\"updaterversion\":\"85.0.4183.102\"}}", 
		LAST);

	lr_start_transaction("Rep1_T03_NavigateAdhocReport_NewReport");

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

	web_url("create", 
		"URL=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
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
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/tags-0a636c4c7bc5e4dd91c0e4e6d1889215.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t61.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("templateQueries-40bbfd6232c6e3d39d5c0d24d8198ac6.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/templateQueries-40bbfd6232c6e3d39d5c0d24d8198ac6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t62.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("configurationCommon-2f0ee612a463e0aa971eab212c64352d.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/configurationCommon-2f0ee612a463e0aa971eab212c64352d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t63.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("scheduler-293bc77ad497c01ec53bcb2f97095e6b.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/scheduler-293bc77ad497c01ec53bcb2f97095e6b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t64.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("dateRange-73b821853e1bdbb1b6b76bf0136878f1.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/dateRange-73b821853e1bdbb1b6b76bf0136878f1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t65.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("periodicReport-d7d9353e8fb7cc172ac9a0cf79dc2731.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/periodicReport-d7d9353e8fb7cc172ac9a0cf79dc2731.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t66.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("deliveryOption-05a20bf051d1f3fb43f17352ce08685a.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/deliveryOption-05a20bf051d1f3fb43f17352ce08685a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t67.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("configuration-11b5b002dec2c8f1f643a1db6b80c6db.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/configuration-11b5b002dec2c8f1f643a1db6b80c6db.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t69.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("copyPasteModal-e538fdadfa9bb40beefda62316b6268f.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/copyPasteModal-e538fdadfa9bb40beefda62316b6268f.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t70.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("blankParameters-6b9040b9676c98a7861241e241c4df28.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/blankParameters-6b9040b9676c98a7861241e241c4df28.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t71.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("expandingTextarea-e6f68bca81423576f208f67bb1a470d2.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/expandingTextarea-e6f68bca81423576f208f67bb1a470d2.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t72.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("copyPasteValues-3ece0aca4da1adbba99a58d4936d46de.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/copyPasteValues-3ece0aca4da1adbba99a58d4936d46de.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t73.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("expandingTextarea-04fa51fd39d03f48f1fbbac3953c97b8.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/expandingTextarea-04fa51fd39d03f48f1fbbac3953c97b8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t74.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("emailConfiguration-59c065e4239f87a883e747de81101001.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/emailConfiguration-59c065e4239f87a883e747de81101001.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t75.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("disableAutocomplete-4b64c67585270722b33b13c06f9e5327.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/disableAutocomplete-4b64c67585270722b33b13c06f9e5327.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t76.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_url("column-view-e4186929b349cb382ade667c0c6a98f5.html", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/column-view-e4186929b349cb382ade667c0c6a98f5.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t77.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("If-None-Match", 
		"\"i18n/en-73992e9f1e3ec42357f9b54766fd9d49.json\"");

	web_url("en.json_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t68.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("dictionaries-e3ca4a1b0e40defbb26604f71d113fd0.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/dictionaries-e3ca4a1b0e40defbb26604f71d113fd0.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t78.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("dictionaries-1cda130ac44885e1ff6e0d3c1b8e6e7d.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/dictionaries-1cda130ac44885e1ff6e0d3c1b8e6e7d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t79.inf", 
		LAST);

	web_url("productGroup-e9dbab739905a7ce956699bd2b2da330.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/productGroup-e9dbab739905a7ce956699bd2b2da330.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t80.inf", 
		LAST);

	web_url("dictionary-utils-ef4323deede5f1397600e557dd3fbaf5.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/dictionary-utils-ef4323deede5f1397600e557dd3fbaf5.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t81.inf", 
		LAST);

	web_url("eventGroup-b609e8b0784233cb90bf0848eae39f28.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/eventGroup-b609e8b0784233cb90bf0848eae39f28.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t82.inf", 
		LAST);

	web_url("productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t83.inf", 
		LAST);

	web_url("studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t84.inf", 
		LAST);

	web_url("dictionaryMultiSearch-6eb3fdf8ab4860190935c80f93a691c7.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/dictionaryMultiSearch-6eb3fdf8ab4860190935c80f93a691c7.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t85.inf", 
		LAST);

	web_url("studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t86.inf", 
		LAST);

	web_url("emailAttachmentSplit-132f6f5b7d381a44835f915e98384f12.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/emailAttachmentSplit-132f6f5b7d381a44835f915e98384f12.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t87.inf", 
		LAST);

	web_url("emailTemplateEditor-340a1a96d629c756ba1192ca0bec7179.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/emailTemplateEditor-340a1a96d629c756ba1192ca0bec7179.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t88.inf", 
		LAST);

	web_url("tinymce.min-8913ae2d8b5e63961b59cb681291410b.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/tinymce.min-8913ae2d8b5e63961b59cb681291410b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t89.inf", 
		LAST);

	web_url("emailModal-c328f6452c15ee5b9612d5799369da83.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/emailModal-c328f6452c15ee5b9612d5799369da83.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t90.inf", 
		LAST);

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://pvr-perf.rxlogix.com/reports/assets/application-cbdbc8928e07797d5f5545294597382d.css", 
		"Snapshot=t91.inf", 
		LAST);

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/column-view-e4186929b349cb382ade667c0c6a98f5.html\"");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("column-view-e4186929b349cb382ade667c0c6a98f5.html_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/column-view-e4186929b349cb382ade667c0c6a98f5.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t92.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("fetchEvaluateCaseDatesForDatasource", 
		"URL=https://pvr-perf.rxlogix.com/reports/configurationRest/fetchEvaluateCaseDatesForDatasource?showAllversions=true&dataSourceId=6594", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t93.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("getStringOperators", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getStringOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t94.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getDateOperators", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getDateOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t95.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("fetchDateRangeTypesForDatasource", 
		"URL=https://pvr-perf.rxlogix.com/reports/configurationRest/fetchDateRangeTypesForDatasource?dataSourceId=6594", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t96.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("allEmailsForCC", 
		"URL=https://pvr-perf.rxlogix.com/reports/email/allEmailsForCC?emails=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t97.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("fetchEvaluateCaseDateSubmissionForDatasource", 
		"URL=https://pvr-perf.rxlogix.com/reports/configurationRest/fetchEvaluateCaseDateSubmissionForDatasource?dataSourceId=6594", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t98.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("getNumOperators", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getNumOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t99.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("allEmails", 
		"URL=https://pvr-perf.rxlogix.com/reports/email/allEmails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t100.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getValuelessOperators", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getValuelessOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t101.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("64724_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/64724?_=1599742618459", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t102.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("sharedWithValues", 
		"URL=https://pvr-perf.rxlogix.com/reports/userRest/sharedWithValues?ids=User_64724", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t103.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("polymer.html", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t104.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("info_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t105.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("theme.min.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/themes/modern/theme.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t106.inf", 
		LAST);

	web_url("polymer-mini.html", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t107.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("polymer-micro.html", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t108.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("plugin.min.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/imagetools/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t109.inf", 
		LAST);

	web_url("plugin.min.js_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/link/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t110.inf", 
		LAST);

	web_url("plugin.min.js_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/table/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t111.inf", 
		LAST);

	web_url("plugin.min.js_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/image/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t112.inf", 
		LAST);

	web_url("plugin.min.js_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/code/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t113.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("Accept");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_url("websocket_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/541/ual7skdw/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t114.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_concurrent_start(NULL);

	web_url("editor-687e49e2901f89d1e65cc77026ec0a3e.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/editor-687e49e2901f89d1e65cc77026ec0a3e.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t115.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("skin.min.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/skins/lightgray/skin.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t116.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("content.min.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/skins/lightgray/content.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t117.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("column-view-lib-ac11072f2d25b52e3f9f4302182ca97c.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/column-view-lib-ac11072f2d25b52e3f9f4302182ca97c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t118.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("Rep1_T03_NavigateAdhocReport_NewReport",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("Rep1_T04_ClickProductLookUp");

	lr_end_transaction("Rep1_T04_ClickProductLookUp",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("Rep1_T05_SearchProduct");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-CSRF-TOKEN", 
		"e6863fc6-5f2b-4288-9f0b-0be2197b2ee0");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("searchViews", 
		"Action=https://pvr-perf.rxlogix.com/reports/productDictionary/searchViews", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t119.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=contains", "Value=timolol maleate", ENDITEM, 
		"Name=dictionaryLevel", "Value=1", ENDITEM, 
		"Name=ref_level", "Value=", ENDITEM, 
		"Name=exact_search", "Value=false", ENDITEM, 
		"Name=imp", "Value=false", ENDITEM, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=filters", "Value={}", ENDITEM, 
		LAST);

	lr_end_transaction("Rep1_T05_SearchProduct",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("Rep1_T06_SelectProduct");

	web_custom_request("getSelectedItem", 
		"URL=https://pvr-perf.rxlogix.com/reports/productDictionary/getSelectedItem?productId=114822&dataSource=pva&dictionaryLevel=1&currentLang=en", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t120.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_submit_data("getPreLevelProductParents", 
		"Action=https://pvr-perf.rxlogix.com/reports/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t121.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=1", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=productIds", "Value=114822", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-CSRF-TOKEN");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("keep-alive", 
		"URL=https://pvr-perf.rxlogix.com/reports/keep-alive?_=1599742618460", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t122.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("Rep1_T06_SelectProduct",LR_AUTO);

	lr_think_time(3);

	web_url("keep-alive_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/keep-alive?_=1599742618461", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t123.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("Rep1_T07_SelectReportTemplate");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("getTemplateList", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateList?term=&page=1&max=30&oldSelectedValue=&_=1599742618462", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t124.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateList_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateList?term=Case+Line+Listing+(Study)&page=1&max=30&oldSelectedValue=&_=1599742618463", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t125.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("customSQLValuesForTemplate", 
		"URL=https://pvr-perf.rxlogix.com/reports/template/customSQLValuesForTemplate?templateId=23823&_=1599742618464", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t126.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("poiInputsForTemplate", 
		"URL=https://pvr-perf.rxlogix.com/reports/template/poiInputsForTemplate?templateId=23823&_=1599742618465", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t127.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("Rep1_T07_SelectReportTemplate",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("Rep1_T08_SaveAndRun");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("keep-alive_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/keep-alive?_=1599742618466", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t128.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-HTTP-Method-Override", 
		"POST");

	web_url("threatListUpdates_fetch", 
		"URL=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINODUuMC40MTgzLjEwMhopCAUQARobCg0IBRAGGAEiAzAwMTABELCgCRoCGAdf16RWIgQgASACKAEaKQgBEAEaGwoNCAEQBhgBIgMwMDEwARCl7QcaAhgHxhZ1tyIEIAEgAigBGikIAxABGhsKDQgDEAYYASIDMDAxMAEQ6fYHGgIYB3--8nYiBCABIAIoARopCAcQARobCg0IBxAGGAEiAzAwMTABELSMCBoCGAfFtY1EIgQgASACKAEaJwgBEAEaGQoNCAEQBhgBIgMwMDEwAxAUGgIYBzGxyUgiBCABIAIoAxooCAEQCBoaCg0IARAIGAEiAzAwMTAEENkbGgIYB7Y47z0iBCABIAIoBBonCAkQARoZCg0ICRAGGAEiAzAwMTAGEAMaAhgHfGc_tyIEIAEgAigGGigIDxABGhoKDQgPEAYYASIDMDAxMAEQkkAaAhgH2IpvNyIEIAEgAigBGicIChAIGh"
		"kKDQgKEAgYASIDMDAxMAEQBhoCGAe2bnt9IgQgASACKAEaJwgJEAEaGQoNCAkQBhgBIgMwMDEwARAdGgIYB1OJbn0iBCABIAIoARooCAgQARoaCg0ICBAGGAEiAzAwMTABEN8JGgIYB6NsVwwiBCABIAIoARooCA0QARoaCg0IDRAGGAEiAzAwMTABEIZ7GgIYBz0AFEYiBCABIAIoARopCA4QARobCg0IDhAGGAEiAzAwMTABEIefBBoCGAfLCOJsIgQgASACKAEaKAgQEAEaGgoNCBAQBhgBIgMwMDEwARC8BRoCGAei1tsbIgQgASACKAEiAggD&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t129.inf", 
		LAST);

	web_url("keep-alive_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/keep-alive?_=1599742618467", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t130.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("keep-alive_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/keep-alive?_=1599742618468", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t131.inf", 
		"Mode=HTTP", 
		LAST);

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

	web_submit_data("run", 
		"Action=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t132.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=owner", "Value=64724", ENDITEM, 
		"Name=_suspectProduct", "Value=", ENDITEM, 
		"Name=productSelection", "Value={\"1\":[{\"name\":\"timolol maleate\",\"id\":\"114822\"}],\"2\":[],\"3\":[],\"4\":[]}", ENDITEM, 
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
		"Name=globalDateRangeInformation.dateRangeStartAbsolute", "Value=01-Dec-1999", ENDITEM, 
		"Name=globalDateRangeInformation.dateRangeEndAbsolute", "Value=31-Dec-1999", ENDITEM, 
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
		"Name=templateQueries[0].template", "Value=23823", ENDITEM, 
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
		"Name=reportName", "Value=01_CLL-Stud_01", ENDITEM, 
		"Name=description", "Value=01_CLL-Stud_01", ENDITEM, 
		"Name=tenantId", "Value=1", ENDITEM, 
		"Name=_qualityChecked", "Value=", ENDITEM, 
		"Name=_isTemplate", "Value=", ENDITEM, 
		"Name=sharedWith", "Value=User_64724", ENDITEM, 
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
		"Name=schedulerTime", "Value=2020-09-10 12:56:55", ENDITEM, 
		"Name=scheduleDateJSON", "Value={\"startDateTime\":\"2020-09-10T12:56Z\",\"timeZone\":{\"text\":\"(GMT +00:00) UTC\\n                                \",\"selected\":true,\"offset\":\"+00:00\",\"name\":\"UTC\"},\"recurrencePattern\":\"FREQ=DAILY;INTERVAL=1;COUNT=1\"}", ENDITEM, 
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
		"Name=_csrf", "Value=e6863fc6-5f2b-4288-9f0b-0be2197b2ee0", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("handlebars-v4.0.11-5c362fdd07b93a39b600cea43165302f.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/handlebar/handlebars-v4.0.11-5c362fdd07b93a39b600cea43165302f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t133.inf", 
		LAST);

	web_url("executionStatus-0291e27b037d335048c8c802b3bd133c.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/executionStatus-0291e27b037d335048c8c802b3bd133c.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t135.inf", 
		LAST);

	web_url("pvr-common-util-c530da31e318f4a1f8ebc65324b8ce1f.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/utils/pvr-common-util-c530da31e318f4a1f8ebc65324b8ce1f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t136.inf", 
		LAST);

	web_url("pvr-filter-util-305f5a92f479b9a326da11feef107b94.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/utils/pvr-filter-util-305f5a92f479b9a326da11feef107b94.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t137.inf", 
		LAST);

	web_url("executionStatus-4cbbed804b3f1124a43c8c7bca08a9fa.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/executionStatus-4cbbed804b3f1124a43c8c7bca08a9fa.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t138.inf", 
		LAST);

	web_url("dataTablesActionButtons-dbaa4f19bed1b0ac11118699876720cb.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/dataTablesActionButtons-dbaa4f19bed1b0ac11118699876720cb.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t139.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"i18n/en-73992e9f1e3ec42357f9b54766fd9d49.json\"");

	web_url("en.json_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t134.inf", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"i18n/dataTables_en-b9b01b8c59208a270975d85c7973f4ec.json\"");

	web_concurrent_start(NULL);

	web_url("dataTables_en.json_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/dataTables_en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t140.inf", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("datepicker.hbs", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/hbs-templates/datepicker.hbs", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t141.inf", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("filter_panel.hbs", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/hbs-templates/filter_panel.hbs", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t142.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("64724_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/64724?_=1599742937974", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t143.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("executionStatus", 
		"URL=https://pvr-perf.rxlogix.com/reports/configurationRest/executionStatus?draw=1&columns%5B0%5D%5Bdata%5D=reportName&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=periodicReportType&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=version&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=executionStatus&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=false&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B4%5D%5Bdata%5D=owner&columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=runDate&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=executionTime&columns%5B6%5D%5Bname%5D=&"
		"columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=frequency&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=sharedWith&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D="
		"false&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=deliveryMedia&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=false&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=runDate&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=true&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=5&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&tableFilter=%7B%7D&advancedFilter=false&sharedwith=&searchString=&direction=desc&sort=runDate&status=GENERATING&_=1599742937975", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t144.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"*/*");

	web_url("info_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t145.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_reg_find("Text=Your report has been scheduled", 
		LAST);

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_url("websocket_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/074/h1uu3q9e/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t146.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("Rep1_T08_SaveAndRun",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("Rep1_T09_Logout");

	web_add_header("X-HTTP-Method-Override", 
		"POST");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_concurrent_start(NULL);

	web_url("fullHashes_find", 
		"URL=https://safebrowsing.googleapis.com/v4/fullHashes_find?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINODUuMC40MTgzLjEwMhIbCg0IBRAGGAEiAzAwMTABELGgCRoCGAd6PooyEhsKDQgBEAYYASIDMDAxMAEQpe0HGgIYB8YWdbcSGwoNCAMQBhgBIgMwMDEwARDp9gcaAhgHf77ydhIbCg0IBxAGGAEiAzAwMTABELWMCBoCGAcoPuN_EhkKDQgBEAYYASIDMDAxMAMQFBoCGAcxsclIEhoKDQgBEAgYASIDMDAxMAQQ2RsaAhgHtjjvPRIZCg0ICRAGGAEiAzAwMTAGEAMaAhgHfGc_txIaCg0IDxAGGAEiAzAwMTABEJNAGgIYB3y-gLASGQoNCAoQCBgBIgMwMDEwARAGGgIYB7Zue30SGQoNCAkQBhgBIgMwMDEwARAdGgIYB1OJbn0SGgoNCAgQBhgBIgMwMDEwARDfCRoCGAejbFcMEhoKDQgNEAYYASIDMDAxMAEQhnsaAhgHPQAURhIbCg0IDhAGGA"
		"EiAzAwMTABEIifBBoCGAfwiPTbEhoKDQgQEAYYASIDMDAxMAEQvAUaAhgHotbbGxosCAEIAwgFCAYIBwgICAkICggNCA4IDwgQEAEQCBoGCgT2SUeSIAEgAyAEIAY=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t147.inf", 
		LAST);

	web_add_header("X-HTTP-Method-Override", 
		"POST");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_url("fullHashes_find_2", 
		"URL=https://safebrowsing.googleapis.com/v4/fullHashes_find?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINODUuMC40MTgzLjEwMhIbCg0IBRAGGAEiAzAwMTABELGgCRoCGAd6PooyEhsKDQgBEAYYASIDMDAxMAEQpe0HGgIYB8YWdbcSGwoNCAMQBhgBIgMwMDEwARDp9gcaAhgHf77ydhIbCg0IBxAGGAEiAzAwMTABELWMCBoCGAcoPuN_EhkKDQgBEAYYASIDMDAxMAMQFBoCGAcxsclIEhoKDQgBEAgYASIDMDAxMAQQ2RsaAhgHtjjvPRIZCg0ICRAGGAEiAzAwMTAGEAMaAhgHfGc_txIaCg0IDxAGGAEiAzAwMTABEJNAGgIYB3y-gLASGQoNCAoQCBgBIgMwMDEwARAGGgIYB7Zue30SGQoNCAkQBhgBIgMwMDEwARAdGgIYB1OJbn0SGgoNCAgQBhgBIgMwMDEwARDfCRoCGAejbFcMEhoKDQgNEAYYASIDMDAxMAEQhnsaAhgHPQAURhIbCg0IDhAGGA"
		"EiAzAwMTABEIifBBoCGAfwiPTbEhoKDQgQEAYYASIDMDAxMAEQvAUaAhgHotbbGxosCAEIAwgFCAYIBwgICAkICggNCA4IDwgQEAEQCBoGCgT2SUeSIAEgAyAEIAY=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t148.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_reg_find("Text=Log in", 
		LAST);

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("logout", 
		"URL=https://pvr-perf.rxlogix.com/reports/logout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t149.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("Rep1_T09_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}