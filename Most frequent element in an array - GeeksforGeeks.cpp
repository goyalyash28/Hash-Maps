<!DOCTYPE html>
<!-- saved from url=(0053)https://www.geeksforgeeks.org/frequent-element-array/ -->
<html lang="en-US" prefix="og: http://ogp.me/ns#"><!--<![endif]--><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8">

<meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1"> 

<link rel="shortcut icon" href="https://media.geeksforgeeks.org/wp-content/cdn-uploads/gfg_favicon.png" type="image/x-icon">
<meta name="theme-color" content="#308D46">

<meta property="og:image" content="https://media.geeksforgeeks.org/wp-content/cdn-uploads/gfg_200x200-min.png">
<meta property="og:image:type" content="image/png">
<meta property="og:image:width" content="200">
<meta property="og:image:height" content="200">
<iframe src="javascript:void(0)" title="" style="width: 0px; height: 0px; border: 0px; display: none;" src="./Most frequent element in an array - GeeksforGeeks_files/saved_resource(1).html"></iframe><script src="./Most frequent element in an array - GeeksforGeeks_files/osd.js.download"></script><script async="" src="./Most frequent element in an array - GeeksforGeeks_files/async-ads.js.download"></script><script async="" src="./Most frequent element in an array - GeeksforGeeks_files/aperture.js.download"></script><script async="" src="./Most frequent element in an array - GeeksforGeeks_files/xray.js.download"></script><script type="text/javascript" async="" src="./Most frequent element in an array - GeeksforGeeks_files/f(4).txt"></script><script type="text/javascript" async="" src="./Most frequent element in an array - GeeksforGeeks_files/ga.js.download"></script><script defer="" src="./Most frequent element in an array - GeeksforGeeks_files/platform.js.download" gapi_processed="true"></script>
<script async="" src="./Most frequent element in an array - GeeksforGeeks_files/require.min.js.download"></script>
<!-- <link rel="stylesheet" href="https://use.typekit.net/mrg0hpc.css"/> -->
<link rel="stylesheet" href="./Most frequent element in an array - GeeksforGeeks_files/atk5goj.css">

<title>Most frequent element in an array - GeeksforGeeks</title>
<link rel="profile" href="http://gmpg.org/xfn/11">
<link rel="pingback" href="https://www.geeksforgeeks.org/frequent-element-array/">
<!--[if lt IE 9]>
<script src="https://www.geeksforgeeks.org/wp-content/themes/iconic-one/js/html5.js" type="text/javascript"></script>
<![endif]-->
<script type="application/ld+json">
    {
        "@context" : "http://schema.org",
        "@type" : "Organization",
        "name" : "GeeksforGeeks",
        "url" : "https://www.geeksforgeeks.org/",
        "logo" : "https://media.geeksforgeeks.org/wp-content/cdn-uploads/20200817185016/gfg_complete_logo_2x-min.png",
        "description" : "A computer science portal for geeks. It contains well written, well thought and well explained computer science and programming articles, quizzes and practice/competitive programming/company interview Questions.",
        "founder": [
            {
                "@type" : "Person",
                "name" : "Sandeep Jain",
                "url" : "https://in.linkedin.com/in/sandeep-jain-b3940815"
            }
        ],
        "sameAs" : [ "https://www.facebook.com/geeksforgeeks.org/",
            "https://twitter.com/geeksforgeeks",
            "https://www.linkedin.com/company/1299009",
            "https://www.youtube.com/geeksforgeeksvideos/"
        ]
    }
</script>
<script>

    var arrPostCat = new Array();
            arrPostCat.push('1756');
            arrPostCat.push('1751');
            arrPostCat.push('1752');
        var tIds = "1756,1751,1752";
    var domain = 1;
    var arrPost = new Array();
    var post_id = "183366";
    var post_type = "post";
    var post_slug = window.location.href;
    var ip = "92.122.92.188";
    var post_title = "Most frequent element in an array";
    var post_status = "publish";
    var post_date = "2018-03-02 08:55:27";
                            var isAdminLoggedIn = 0;
        </script>

<!-- This site is optimized with the Yoast SEO plugin v7.6 - https://yoast.com/wordpress/plugins/seo/ -->
<meta name="description" content="A Computer Science portal for geeks. It contains well written, well thought and well explained computer science and programming articles, quizzes and practice/competitive programming/company interview Questions.">
<link rel="canonical" href="https://www.geeksforgeeks.org/frequent-element-array/">
<meta property="og:locale" content="en_US">
<meta property="og:type" content="article">
<meta property="og:title" content="Most frequent element in an array - GeeksforGeeks">
<meta property="og:description" content="A Computer Science portal for geeks. It contains well written, well thought and well explained computer science and programming articles, quizzes and practice/competitive programming/company interview Questions.">
<meta property="og:url" content="https://www.geeksforgeeks.org/frequent-element-array/">
<meta property="og:site_name" content="GeeksforGeeks">
<meta property="article:section" content="Sorting">
<meta property="article:published_time" content="2018-03-02T08:55:27+00:00">
<meta property="article:modified_time" content="2019-01-16T13:10:27+00:00">
<meta property="og:updated_time" content="2019-01-16T13:10:27+00:00">
<script type="application/ld+json">{"@context":"https:\/\/schema.org","@type":"Organization","url":"https:\/\/www.geeksforgeeks.org\/","sameAs":[],"@id":"https:\/\/www.geeksforgeeks.org\/#organization","name":"GeeksforGeeks","logo":"http:\/\/www.geeksforgeeks.org\/wp-content\/uploads\/gfg_200X200-1.png"}</script>
<!-- / Yoast SEO plugin. -->

<link rel="dns-prefetch" href="https://www.cdn.geeksforgeeks.org/">
<link rel="dns-prefetch" href="https://s.w.org/">
<link rel="alternate" type="application/rss+xml" title="GeeksforGeeks » Feed" href="https://www.geeksforgeeks.org/feed/">
<link rel="alternate" type="application/rss+xml" title="GeeksforGeeks » Comments Feed" href="https://www.geeksforgeeks.org/comments/feed/">
<link rel="alternate" type="application/rss+xml" title="GeeksforGeeks » Most frequent element in an array Comments Feed" href="https://www.geeksforgeeks.org/frequent-element-array/feed/">
		<script type="text/javascript">
			window._wpemojiSettings = {"baseUrl":"https:\/\/s.w.org\/images\/core\/emoji\/11\/72x72\/","ext":".png","svgUrl":"https:\/\/s.w.org\/images\/core\/emoji\/11\/svg\/","svgExt":".svg","source":{"concatemoji":"https:\/\/www.geeksforgeeks.org\/wp-includes\/js\/wp-emoji-release.min.js?ver=4.9.8"}};
			!function(a,b,c){function d(a,b){var c=String.fromCharCode;l.clearRect(0,0,k.width,k.height),l.fillText(c.apply(this,a),0,0);var d=k.toDataURL();l.clearRect(0,0,k.width,k.height),l.fillText(c.apply(this,b),0,0);var e=k.toDataURL();return d===e}function e(a){var b;if(!l||!l.fillText)return!1;switch(l.textBaseline="top",l.font="600 32px Arial",a){case"flag":return!(b=d([55356,56826,55356,56819],[55356,56826,8203,55356,56819]))&&(b=d([55356,57332,56128,56423,56128,56418,56128,56421,56128,56430,56128,56423,56128,56447],[55356,57332,8203,56128,56423,8203,56128,56418,8203,56128,56421,8203,56128,56430,8203,56128,56423,8203,56128,56447]),!b);case"emoji":return b=d([55358,56760,9792,65039],[55358,56760,8203,9792,65039]),!b}return!1}function f(a){var c=b.createElement("script");c.src=a,c.defer=c.type="text/javascript",b.getElementsByTagName("head")[0].appendChild(c)}var g,h,i,j,k=b.createElement("canvas"),l=k.getContext&&k.getContext("2d");for(j=Array("flag","emoji"),c.supports={everything:!0,everythingExceptFlag:!0},i=0;i<j.length;i++)c.supports[j[i]]=e(j[i]),c.supports.everything=c.supports.everything&&c.supports[j[i]],"flag"!==j[i]&&(c.supports.everythingExceptFlag=c.supports.everythingExceptFlag&&c.supports[j[i]]);c.supports.everythingExceptFlag=c.supports.everythingExceptFlag&&!c.supports.flag,c.DOMReady=!1,c.readyCallback=function(){c.DOMReady=!0},c.supports.everything||(h=function(){c.readyCallback()},b.addEventListener?(b.addEventListener("DOMContentLoaded",h,!1),a.addEventListener("load",h,!1)):(a.attachEvent("onload",h),b.attachEvent("onreadystatechange",function(){"complete"===b.readyState&&c.readyCallback()})),g=c.source||{},g.concatemoji?f(g.concatemoji):g.wpemoji&&g.twemoji&&(f(g.twemoji),f(g.wpemoji)))}(window,document,window._wpemojiSettings);
		</script><script src="./Most frequent element in an array - GeeksforGeeks_files/wp-emoji-release.min.js.download" type="text/javascript" defer=""></script>
		<style type="text/css">
img.wp-smiley,
img.emoji {
	display: inline !important;
	border: none !important;
	box-shadow: none !important;
	height: 1em !important;
	width: 1em !important;
	margin: 0 .07em !important;
	vertical-align: -0.1em !important;
	background: none !important;
	padding: 0 !important;
}
</style>
<link rel="stylesheet" id="custom-style-css" href="./Most frequent element in an array - GeeksforGeeks_files/gfg.min.css" type="text/css" media="all">
<script type="text/javascript" src="./Most frequent element in an array - GeeksforGeeks_files/jquery-3.1.1.min.js.download"></script>
<script type="text/javascript" src="./Most frequent element in an array - GeeksforGeeks_files/jquery-migrate-3.0.0.min.js.download"></script>
<script type="text/javascript">
/* <![CDATA[ */
var gfgObject = {"authUrl":"https:\/\/auth.geeksforgeeks.org\/","writeApiUrl":"https:\/\/apiwrite.geeksforgeeks.org\/","writeUrl":"https:\/\/write.geeksforgeeks.org\/","utilUrl":"https:\/\/util.geeksforgeeks.org\/"};
/* ]]> */
</script>
<script type="text/javascript" async="async" src="./Most frequent element in an array - GeeksforGeeks_files/gfg.min.js.download"></script>
<link rel="https://api.w.org/" href="https://www.geeksforgeeks.org/wp-json/">
<link rel="EditURI" type="application/rsd+xml" title="RSD" href="https://www.cdn.geeksforgeeks.org/xmlrpc.php?rsd">
<link rel="wlwmanifest" type="application/wlwmanifest+xml" href="https://www.cdn.geeksforgeeks.org/wp-includes/wlwmanifest.xml"> 
<meta name="generator" content="WordPress 4.9.8">
<link rel="shortlink" href="https://www.geeksforgeeks.org/?p=183366">
<link rel="alternate" type="application/json+oembed" href="https://www.geeksforgeeks.org/wp-json/oembed/1.0/embed?url=https%3A%2F%2Fwww.geeksforgeeks.org%2Ffrequent-element-array%2F">
<link rel="alternate" type="text/xml+oembed" href="https://www.geeksforgeeks.org/wp-json/oembed/1.0/embed?url=https%3A%2F%2Fwww.geeksforgeeks.org%2Ffrequent-element-array%2F&amp;format=xml">
<style>
#wpadminbar{
background: #ff0000 !important;
}
</style>
<style type="text/css" id="custom-background-css">
body.custom-background { background-color: #ffffff; }
</style>
<link rel="amphtml" href="https://www.geeksforgeeks.org/frequent-element-array/amp/"><link rel="icon" href="https://www.geeksforgeeks.org/wp-content/uploads/gfg_200X200-100x100.png" sizes="32x32">
<link rel="icon" href="https://www.geeksforgeeks.org/wp-content/uploads/gfg_200X200.png" sizes="192x192">
<link rel="apple-touch-icon-precomposed" href="https://www.geeksforgeeks.org/wp-content/uploads/gfg_200X200.png">
<meta name="msapplication-TileImage" content="https://www.geeksforgeeks.org/wp-content/uploads/gfg_200X200.png">

<!--
<script type='text/javascript'>
  var googletag = googletag || {};
  googletag.cmd = googletag.cmd || [];
  (function() {
    var gads = document.createElement('script');
    gads.async = true;
    gads.type = 'text/javascript';
    var useSSL = 'https:' == document.location.protocol;
    gads.src = (useSSL ? 'https:' : 'http:') +
      '//www.googletagservices.com/tag/js/gpt.js';
    var node = document.getElementsByTagName('script')[0];
    node.parentNode.insertBefore(gads, node);
  })();
</script>

 AutoAds
<script async src="//pagead2.googlesyndication.com/pagead/js/adsbygoogle.js"></script>
<script>
(adsbygoogle = window.adsbygoogle || []).push({
google_ad_client: "ca-pub-9465609616171866",
enable_page_level_ads: true
});
</script>
-->
<script data-cfasync="false" type="text/javascript">
(function(w, d) {
  var s = d.createElement('script');
  s.src = '//cdn.adpushup.com/40792/adpushup.js';
  s.type = 'text/javascript'; s.async = true;
  (d.getElementsByTagName('head')[0] || d.getElementsByTagName('body')[0]).appendChild(s);
})(window, document);
</script><script src="./Most frequent element in an array - GeeksforGeeks_files/adpushup.js.download" type="text/javascript" async=""></script>

<style>
@media (max-width:1043px) and (min-width:992px) {
 .hide-1043992 {
   display: none!important;
 }
}
</style>

<script type="text/javascript">
    (function(){
        var bsa_optimize=document.createElement('script');
        bsa_optimize.type='text/javascript';
        bsa_optimize.async=true;
        bsa_optimize.src='https://cdn4.buysellads.net/pub/geeksforgeeks.js?'+(new Date()-new Date()%600000);
        (document.getElementsByTagName('head')[0]||document.getElementsByTagName('body')[0]).appendChild(bsa_optimize);
    })();
</script><script type="text/javascript" async="" src="./Most frequent element in an array - GeeksforGeeks_files/geeksforgeeks.js.download"></script>


  <script>(window.BOOMR_mq=window.BOOMR_mq||[]).push(["addVar",{"rua.upush":"false","rua.cpush":"false","rua.upre":"false","rua.cpre":"true","rua.uprl":"false","rua.cprl":"false","rua.cprf":"false","rua.trans":"SJ-beffabd1-d53d-4209-8094-db92233e89bb","rua.cook":"true","rua.ims":"false","rua.ufprl":"false","rua.cfprl":"true"}]);</script>
  <script>!function(a){var e="https://s.go-mpulse.net/boomerang/",t="addEventListener";if("False"=="True")a.BOOMR_config=a.BOOMR_config||{},a.BOOMR_config.PageParams=a.BOOMR_config.PageParams||{},a.BOOMR_config.PageParams.pci=!0,e="https://s2.go-mpulse.net/boomerang/";if(window.BOOMR_API_key="DRC3M-XVBSV-FUQK8-83JJR-8KUMW",function(){function n(e){a.BOOMR_onload=e&&e.timeStamp||(new Date).getTime()}if(!a.BOOMR||!a.BOOMR.version&&!a.BOOMR.snippetExecuted){a.BOOMR=a.BOOMR||{},a.BOOMR.snippetExecuted=!0;var i,_,o,r=document.createElement("iframe");if(a[t])a[t]("load",n,!1);else if(a.attachEvent)a.attachEvent("onload",n);r.src="javascript:void(0)",r.title="",r.role="presentation",(r.frameElement||r).style.cssText="width:0;height:0;border:0;display:none;",o=document.getElementsByTagName("script")[0],o.parentNode.insertBefore(r,o);try{_=r.contentWindow.document}catch(O){i=document.domain,r.src="javascript:var d=document.open();d.domain='"+i+"';void(0);",_=r.contentWindow.document}_.open()._l=function(){var a=this.createElement("script");if(i)this.domain=i;a.id="boomr-if-as",a.src=e+"DRC3M-XVBSV-FUQK8-83JJR-8KUMW",BOOMR_lstart=(new Date).getTime(),this.body.appendChild(a)},_.write("<bo"+'dy onload="document._l();">'),_.close()}}(),"".length>0)if(a&&"performance"in a&&a.performance&&"function"==typeof a.performance.setResourceTimingBufferSize)a.performance.setResourceTimingBufferSize();!function(){if(BOOMR=a.BOOMR||{},BOOMR.plugins=BOOMR.plugins||{},!BOOMR.plugins.AK){var e="true"=="true"?1:0,t="cookiepresent",n="yq2qazaxgi24wx7zjlaa-f-3c10fec43-clientnsv4-s.akamaihd.net",i={"ak.v":"29","ak.cp":"855608","ak.ai":parseInt("547329",10),"ak.ol":"0","ak.cr":0,"ak.ipv":4,"ak.proto":"h2","ak.rid":"9cadb940","ak.r":33093,"ak.a2":e,"ak.m":"","ak.n":"ff","ak.bpcip":"196.53.0.0","ak.cport":51752,"ak.gh":"23.50.53.199","ak.quicv":"","ak.tlsv":"tls1.3","ak.0rtt":"","ak.csrc":"-","ak.acc":"","ak.t":"1610173120","ak.ak":"hOBiQwZUYzCg5VSAfCLimQ==gRc8RbyKXAqpZVda9jtrC2hjWxB4PEkPAyiDaOYpM/Wsi9E+qED7xAUxfZMeOVIEkO8tcv4iEGhBZWPrB4w3/QZidHYWZIzX4XSPCNGvXssEJINGrjyNUATTdYJfMc1ZEvVcBZXWCJyOmWLq6CLJC/s4DHtie5d2mHJzkBgh1BEcjhQmSNx1gCctJ0PHVMKOSbrv67amD3hKmmvNsVl0nTv5x8tibVXlIoLwcyc/K4pAzbL+FTq+GeZmo3OO4ZAzYuzp5MVGe2wGkvd51naIGd25IkyqSMIttEUrLMcmR4Xu74Rm73cS1edXzfiuZ2cVRTRKmwUxa9fkx8xbZwGPEhDzQvbxOm43DRNHIlsDSZ3SZuopST0yw3xnjimeMrwcllZT/nkpjMdOIAAXs0dgae0GU+xmyRGY36U4EdwHkI0=","ak.pv":"31","ak.dpoabenc":""};if(""!==t)i["ak.ruds"]=t;var _={i:!1,av:function(e){var t="http.initiator";if(e&&(!e[t]||"spa_hard"===e[t]))i["ak.feo"]=void 0!==a.aFeoApplied?1:0,BOOMR.addVar(i)},rv:function(){var a=["ak.bpcip","ak.cport","ak.cr","ak.csrc","ak.gh","ak.ipv","ak.m","ak.n","ak.ol","ak.proto","ak.quicv","ak.tlsv","ak.0rtt","ak.r","ak.acc","ak.t"];BOOMR.removeVar(a)}};BOOMR.plugins.AK={akVars:i,akDNSPreFetchDomain:n,init:function(){if(!_.i){var a=BOOMR.subscribe;a("before_beacon",_.av,null,null),a("onbeacon",_.rv,null,null),_.i=!0}return this},is_complete:function(){return!0}}}}()}(window);</script><script type="text/javascript" async="" src="./Most frequent element in an array - GeeksforGeeks_files/pb.1607067690348.js.download"></script><script src="./Most frequent element in an array - GeeksforGeeks_files/gpt.js.download" async=""></script><script async="" src="./Most frequent element in an array - GeeksforGeeks_files/apstag.js.download"></script><script type="text/javascript">!function(t,e){var n,o,r,a;function s(){try{var n="off",o="NA",r=function(){try{var n,o=function(t,e,n){var o=null;for(t=void 0!==e&&!0===e?new RegExp("^\\s*"+t+"=\\s*(.*?)\\s*$"):new RegExp("^\\s*"+t+n+"=\\s*(.*?)\\s*$"),e=0;e<a.length;e++)if(null!==(o=a[e].match(t))){o=o[1];break}return o},r=null,a=e.cookie.split(";"),s=t.location.hostname,c=s.split(".");return"www"===c[0]&&c.splice(0,1),null!=(n=/^[0-9.]+$/.test(s)?"2":1===c.length?"1":o("__ssds",!0))&&null!==(r=o("__ssuzjsr",!1,n))?(r=parseInt(r[4],10),"function"==typeof isNaN&&!0===isNaN(r)&&(r=-2)):r=-1,r}catch(t){return-2}}();return 0<r&&9!==r?n="on":(9===r&&(n="dh"),"function"==typeof ssEnvEvaluator&&(o=ssEnvEvaluator(t,e))&&(n="on")),t.__klbfb=t.__klbfb||{},t.__klbfb.res=n,t.__klbfb.cv=r,t.__klbfb.env=o,t.__klbfb.envS="function"==typeof ssEnvEvaluator,n}catch(t){return"off"}}function c(){var e;"on"==s()&&(e=t.adpushup.$,t.adpushup={},t.googletag=t.googletag||{},googletag.cmd=googletag.cmd||[],googletag.cmd.push(function(){setTimeout(function(){googletag.destroySlots()},100)}),e("[data-render-time]").each(function(t,n){var o=(n=e(n)).attr("data-timeout");o&&clearTimeout(o),n.removeAttr("data-timeout"),n.removeAttr("data-refresh-time"),n.removeAttr("data-render-time")}))}o="script",(r=(n=e).createElement(o)).async=!0,r.src="https://cdn.perfdrive.com/aperture/xray.js",(a=n.getElementsByTagName(o)[0]).parentNode.insertBefore(r,a),r.onload=c,function(t,e,n,o,r,a,s,l){t.SSJSConnectorObj={ss_cid:"8f4b",domain_info:"auto"},t.ssConf=function(e,n){t.SSJSConnectorObj[e]=n},(s=e.createElement("script")).async=!0,s.src="https://cdn.perfdrive.com/aperture/aperture.js",(l=e.getElementsByTagName("script")[0]).parentNode.insertBefore(s,l),s.onload=c}(t,e),c()}(window,document);</script><script type="text/javascript">adpushup.$("#secondary 	._ap_apex_ad div").css('text-align','left')</script><script async="" type="text/javascript" src="./Most frequent element in an array - GeeksforGeeks_files/gpt.js(1).download" dropped-by="bsaoptimize"></script><meta http-equiv="origin-trial" content="A2shzsdPO+RKe83bUqT9oVkYwGZN6j9O7nrcOASNFPuQz8HefgVYb9qAqn6coNCSDIRtXoi6ybCrjEsYh3caFgIAAAB7eyJvcmlnaW4iOiJodHRwczovL2RvdWJsZWNsaWNrLm5ldDo0NDMiLCJmZWF0dXJlIjoiVHJ1c3RUb2tlbnMiLCJleHBpcnkiOjE2MTM0OTU4NjgsImlzU3ViZG9tYWluIjp0cnVlLCJpc1RoaXJkUGFydHkiOnRydWV9"><script src="./Most frequent element in an array - GeeksforGeeks_files/pubads_impl_2021010706.js.download" async=""></script><script src="./Most frequent element in an array - GeeksforGeeks_files/cse_element__en.js.download" type="text/javascript"></script><link type="text/css" rel="stylesheet" href="./Most frequent element in an array - GeeksforGeeks_files/default+en.css"><link type="text/css" rel="stylesheet" href="./Most frequent element in an array - GeeksforGeeks_files/default.css"><link rel="preload" href="./Most frequent element in an array - GeeksforGeeks_files/f(5).txt" as="script"><script type="text/javascript" src="./Most frequent element in an array - GeeksforGeeks_files/f(5).txt"></script><link rel="prefetch" href="https://acd027b8197188ddf080a2727c22b5d7.safeframe.googlesyndication.com/safeframe/1-0-37/html/container.html"><link rel="prefetch" href="https://tpc.googlesyndication.com/safeframe/1-0-37/html/container.html"><div id="_bsa_srv-CKYDL2JJ_0"></div><style type="text/css">.gsc-control-cse{font-family:arial, sans-serif}.gsc-control-cse .gsc-table-result{font-family:arial, sans-serif}.gsc-refinementsGradient{background:linear-gradient(to left,rgba(255,255,255,1),rgba(255,255,255,0))}.gsc-control-cse{border-color:#FFFFFF;background-color:#FFFFFF}input.gsc-input,.gsc-input-box,.gsc-input-box-hover,.gsc-input-box-focus{border-color:#6AA84F}.gsc-search-button-v2,.gsc-search-button-v2:hover,.gsc-search-button-v2:focus{border-color:#000000;background-color:#6AA84F;background-image:none;filter:none}.gsc-search-button-v2 svg{fill:#FFFFFF}.gsc-tabHeader.gsc-tabhActive,.gsc-refinementHeader.gsc-refinementhActive{color:#CCCCCC;border-color:#CCCCCC;background-color:#FFFFFF}.gsc-tabHeader.gsc-tabhInactive,.gsc-refinementHeader.gsc-refinementhInactive{color:#CCCCCC;border-color:#CCCCCC;background-color:#FFFFFF}.gsc-webResult.gsc-result,.gsc-results .gsc-imageResult{border-color:#FFFFFF;background-color:#FFFFFF}.gsc-webResult.gsc-result:hover{border-color:#FFFFFF;background-color:#FFFFFF}.gs-webResult.gs-result a.gs-title:link,.gs-webResult.gs-result a.gs-title:link b,.gs-imageResult a.gs-title:link,.gs-imageResult a.gs-title:link b{color:#006600}.gs-webResult.gs-result a.gs-title:visited,.gs-webResult.gs-result a.gs-title:visited b,.gs-imageResult a.gs-title:visited,.gs-imageResult a.gs-title:visited b{color:#EC4E20}.gs-webResult.gs-result a.gs-title:hover,.gs-webResult.gs-result a.gs-title:hover b,.gs-imageResult a.gs-title:hover,.gs-imageResult a.gs-title:hover b{color:#CA7700}.gs-webResult.gs-result a.gs-title:active,.gs-webResult.gs-result a.gs-title:active b,.gs-imageResult a.gs-title:active,.gs-imageResult a.gs-title:active b{color:#006600}.gsc-cursor-page{color:#006600}a.gsc-trailing-more-results:link{color:#006600}.gs-webResult:not(.gs-no-results-result):not(.gs-error-result) .gs-snippet,.gs-fileFormatType{color:#000000}.gs-webResult div.gs-visibleUrl{color:#008000}.gs-webResult div.gs-visibleUrl-short{color:#008000}.gsc-cursor-box{border-color:#FFFFFF}.gsc-results .gsc-cursor-box .gsc-cursor-page{border-color:#CCCCCC;background-color:#FFFFFF;color:#CCCCCC}.gsc-results .gsc-cursor-box .gsc-cursor-current-page{border-color:#CCCCCC;background-color:#FFFFFF;color:#CCCCCC}.gsc-webResult.gsc-result.gsc-promotion{border-color:#336699;background-color:#FFFFFF}.gsc-completion-title{color:#006600}.gsc-completion-snippet{color:#000000}.gs-promotion a.gs-title:link,.gs-promotion a.gs-title:link *,.gs-promotion .gs-snippet a:link{color:#006600}.gs-promotion a.gs-title:visited,.gs-promotion a.gs-title:visited *,.gs-promotion .gs-snippet a:visited{color:#EC4E20}.gs-promotion a.gs-title:hover,.gs-promotion a.gs-title:hover *,.gs-promotion .gs-snippet a:hover{color:#CA7700}.gs-promotion a.gs-title:active,.gs-promotion a.gs-title:active *,.gs-promotion .gs-snippet a:active{color:#006600}.gs-promotion .gs-snippet,.gs-promotion .gs-title .gs-promotion-title-right,.gs-promotion .gs-title .gs-promotion-title-right *{color:#000000}.gs-promotion .gs-visibleUrl,.gs-promotion .gs-visibleUrl-short{color:#008000}.gcsc-find-more-on-google{color:#006600}.gcsc-find-more-on-google-magnifier{fill:#006600}</style><style type="text/css">.gscb_a{display:inline-block;font:27px/13px arial,sans-serif}.gsst_a .gscb_a{color:#a1b9ed;cursor:pointer}.gsst_a:hover .gscb_a,.gsst_a:focus .gscb_a{color:#36c}.gsst_a{display:inline-block}.gsst_a{cursor:pointer;padding:0 4px}.gsst_a:hover{text-decoration:none!important}.gsst_b{font-size:16px;padding:0 2px;position:relative;user-select:none;-webkit-user-select:none;white-space:nowrap}.gsst_e{vertical-align:middle;opacity:0.55;}.gsst_a:hover .gsst_e,.gsst_a:focus .gsst_e{opacity:0.72;}.gsst_a:active .gsst_e{opacity:1;}.gsst_f{background:white;text-align:left}.gsst_g{background-color:white;border:1px solid #ccc;border-top-color:#d9d9d9;box-shadow:0 2px 4px rgba(0,0,0,0.2);-webkit-box-shadow:0 2px 4px rgba(0,0,0,0.2);margin:-1px -3px;padding:0 6px}.gsst_h{background-color:white;height:1px;margin-bottom:-1px;position:relative;top:-1px}.gsib_a{width:100%;padding:4px 6px 0}.gsib_a,.gsib_b{vertical-align:top}.gssb_c{border:0;position:absolute;z-index:989}.gssb_e{border:1px solid #ccc;border-top-color:#d9d9d9;box-shadow:0 2px 4px rgba(0,0,0,0.2);-webkit-box-shadow:0 2px 4px rgba(0,0,0,0.2);cursor:default}.gssb_f{visibility:hidden;white-space:nowrap}.gssb_k{border:0;display:block;position:absolute;top:0;z-index:988}.gsdd_a{border:none!important}.gsq_a{padding:0}.gssb_a{padding:0 7px}.gssb_a,.gssb_a td{white-space:nowrap;overflow:hidden;line-height:22px}#gssb_b{font-size:11px;color:#36c;text-decoration:none}#gssb_b:hover{font-size:11px;color:#36c;text-decoration:underline}.gssb_g{text-align:center;padding:8px 0 7px;position:relative}.gssb_h{font-size:15px;height:28px;margin:0.2em;-webkit-appearance:button}.gssb_i{background:#eee}.gss_ifl{visibility:hidden;padding-left:5px}.gssb_i .gss_ifl{visibility:visible}a.gssb_j{font-size:13px;color:#36c;text-decoration:none;line-height:100%}a.gssb_j:hover{text-decoration:underline}.gssb_l{height:1px;background-color:#e5e5e5}.gssb_m{color:#000;background:#fff}.gssb_a{padding:0 9px}.gsib_a{padding:5px 9px 4px 9px}.gscb_a{line-height:27px}.gssb_e{border:0}.gssb_l{margin:5px 0}input.gsc-input::-webkit-input-placeholder{font-size:14px}input.gsc-input:-moz-placeholder{font-size:14px}input.gsc-input::-moz-placeholder{font-size:14px}input.gsc-input:-ms-input-placeholder{font-size:14px}input.gsc-input:focus::-webkit-input-placeholder{color:transparent}input.gsc-input:focus:-moz-placeholder{color:transparent}input.gsc-input:focus::-moz-placeholder{color:transparent}input.gsc-input:focus:-ms-input-placeholder{color:transparent}.gssb_c .gsc-completion-container{position:static}.gssb_c{z-index:5000}.gsc-completion-container table{background:transparent;font-size:inherit;font-family:inherit}.gssb_c > tbody > tr,.gssb_c > tbody > tr > td,.gssb_d,.gssb_d > tbody > tr,.gssb_d > tbody > tr > td,.gssb_e,.gssb_e > tbody > tr,.gssb_e > tbody > tr > td{padding:0;margin:0;border:0}.gssb_a table,.gssb_a table tr,.gssb_a table tr td{padding:0;margin:0;border:0}</style></head>

<body class="post-template-default single single-post postid-183366 single-format-standard custom-background custom-background-white"><div id="_fbn_" data-attributes="{&quot;type&quot;:&quot;fancybar&quot;,&quot;key&quot;:&quot;CKYDL2JJ&quot;,&quot;segment&quot;:&quot;placement:geeksforgeeks&quot;,&quot;options&quot;:{&quot;target&quot;:&quot;body&quot;,&quot;script_id&quot;:&quot;_bsa_srv-CKYDL2JJ_0&quot;,&quot;platforms&quot;:[&quot;desktop&quot;,&quot;mobile&quot;]},&quot;ads&quot;:[{&quot;active&quot;:&quot;1&quot;,&quot;ad_via_link&quot;:&quot;http://selfserve.buysellads.com/checkout/new/?utm_source=geeksforgeeks-org-fancybar&amp;utm_medium=ad_via_link&amp;utm_campaign=in_unit&amp;utm_term=fancybar&quot;,&quot;backgroundColor&quot;:&quot;#FFFFFF&quot;,&quot;backgroundHoverColor&quot;:&quot;#FFFFFF&quot;,&quot;bannerid&quot;:&quot;417752&quot;,&quot;callToAction&quot;:&quot;Get $100 Free Credit&quot;,&quot;company&quot;:&quot;DigitalOcean&quot;,&quot;companyTagline&quot;:&quot;App Platform on DigitalOcean&quot;,&quot;creativeid&quot;:&quot;451485&quot;,&quot;ctaBackgroundColor&quot;:&quot;#217EFF&quot;,&quot;ctaBackgroundHoverColor&quot;:&quot;#217EFF&quot;,&quot;ctaTextColor&quot;:&quot;#FFFFFF&quot;,&quot;ctaTextColorHover&quot;:&quot;#FFFFFF&quot;,&quot;description&quot;:&quot;A quick, easy, and intuitive way to build, deploy, manage, and scale your apps.&quot;,&quot;evenodd&quot;:&quot;0&quot;,&quot;external_id&quot;:&quot;68073&quot;,&quot;height&quot;:&quot;0&quot;,&quot;i&quot;:&quot;0&quot;,&quot;identifier&quot;:&quot;db680eccda35cd084d0dbfa87c7db447&quot;,&quot;image&quot;:&quot;https://cdn4.buysellads.net/uu/1/78180/1608830102-80x80_brand_sammy-logo_static_transparent.png&quot;,&quot;logo&quot;:&quot;https://cdn4.buysellads.net/uu/1/78180/1608830045-250x100_brand_sammy_logo_static_transparent.png&quot;,&quot;longimp&quot;:&quot;T4VIROPXTTTTTTHYDFXMOTTTTTTGSQGXZATTTTTTK3DGLUYTTTTTT&quot;,&quot;longlink&quot;:&quot;TCVIROPXTTTTTTHYDFXMOTTTTTTGSQGXZATTTTTTK3DGLUYTTTTTTBDW5JYFC5JGHRENVZI62RBN6SDHK2NCLYSZH7UCPR3GKJLCBZSW5QENCBSD2JMLOIJJCVYI62QNCTUDCK37C67DEKP4PMKMCJPKQJTWVW7GVV7DPKQLCABI6535CVAI6KJ7CTSDTK3SKJJMORDL22GN4BZ6FWBDE2QICKBICK7UF2LCCUSW5QMMOYSQKEOI423IFTADKK3LCKRNVYBX2JEUVGQSKJJMOAI62HLDB5SWKHIMO7IG5QGNCBDQ2JLHO7DQ5QLNCRDHKJGUVAIHKHBCB7Z55EOINRDC5MEIB&quot;,&quot;num_slots&quot;:&quot;1&quot;,&quot;pixel&quot;:&quot;https://ad.doubleclick.net/ddm/trackimp/N1212560.3091281BUYSELLADS/B25127528.292290600;dc_trk_aid=485335337;dc_trk_cid=143886023;ord=[timestamp];dc_lat=;dc_rdid=;tag_for_child_directed_treatment=;tfua=?&quot;,&quot;rendering&quot;:&quot;fancybar&quot;,&quot;statimp&quot;:&quot;//srv.buysellads.com/ads/imp/x/GTND42JJCTYI5K3ECTYLYKQNC6YDP2QICAADVZ3JCYYIT2QYF6SDLK7KC6BD4K7YCVYD5K3ICESDL2JLCA7IT2JJHEYIKKQEC6SI6K3ECTNCLSZE5QLUCASQ2RUT&quot;,&quot;statlink&quot;:&quot;//srv.buysellads.com/ads/click/x/GTND42JJCTYI5K3ECTYLYKQNC6YDP2QICAADVZ3JCYYIT2QYF6SDLK7KC6BD4K7YCVYD5K3ICESDL2JLCA7IT2JJHEYIKKQEC6SI6K3ECTNCYBZ52K&quot;,&quot;textColor&quot;:&quot;#000000&quot;,&quot;textColorHover&quot;:&quot;#000000&quot;,&quot;timestamp&quot;:&quot;1610173125&quot;,&quot;width&quot;:&quot;0&quot;,&quot;zoneid&quot;:&quot;30961&quot;,&quot;zonekey&quot;:&quot;CKYDL2JJ&quot;}]}" class="_bsa_show"><style>#_fbn_._bsa_show ._bsa_fancybar{top:0}#_fbn_ ._bsa_fancybar{position:fixed;top:-50%;right:0;left:0;z-index:100001;margin:0 auto;background-color:#FFFFFF;box-shadow:0 1px 10px hsla(0,0%,0%,.25);font-family:-apple-system,BlinkMacSystemFont,"Segoe UI",Roboto,Oxygen-Sans,Ubuntu,Cantarell,"Helvetica Neue",Helvetica,Arial,sans-serif;-webkit-transition:top .5s ease-in-out;-moz-transition:top .5s ease-in-out;-o-transition:top .5s ease-in-out;transition:top .5s ease-in-out;backface-visibility:hidden}#_fbn_ .fancybar-wrap{display:flex;box-sizing:border-box;padding:14px 20px;text-align:left;text-decoration:none;justify-content:space-between}#_fbn_ a:hover{background:#FFFFFF}#_fbn_ .fancybar-left{display:flex;align-items:center}#_fbn_ .fancybar-right{display:flex;align-items:center}#_fbn_ a .fancybar-cta{box-sizing:border-box;padding:8px 12px;border-radius:4px;background-color:#217EFF;color:#FFFFFF;text-transform:uppercase;white-space:nowrap;letter-spacing:1px;line-height:1;font-weight:600;font-size:12px}._bsa_fancybar a:hover .fancybar-cta{background:#217EFF;color:#FFFFFF}#_fbn_ .fancybar-logo{line-height:0}#_fbn_ .fancybar-logo img{margin-right:20px;width:100px;background-color:transparent}#_fbn_ a .fancybar-text{display:flex;flex-direction:column;margin-right:20px;color:#000000;font-size:16px;line-height:1.5}#_fbn_ a:hover .fancybar-text{color:#000000}#_fbn_ .fancybar-disclaimer{font-style:italic;font-size:12px;color:#000000cc;letter-spacing:.5px;line-height:1.5}#_fbn_ .fancybar-footer{position:absolute;right:20px;bottom:4px;border-top:0;border-top-left-radius:3px;color:#000000;text-decoration:none;text-transform:uppercase;letter-spacing:1px;line-height:1;font-weight:600;font-size:8px}#_fbn_ .fancybar-close{color:#000000cc;cursor:pointer}#_fbn_ .fancybar-close:hover{color:#000000}#_fbn_ .fancybar-via{color:#000000cc;font-size:8px;text-decoration:none}#_fbn_ .fancybar-via:hover{color:#000000}@media only screen and (min-width:480px) and (max-width:759px){#_fbn_ a .fancybar-text{font-size:14px;margin-right:0}#_fbn_ .fancybar-right{display:none}#_fbn_ .fancybar-disclaimer{font-size:10px}}@media only screen and (min-width:320px) and (max-width:479px){#_fbn_ a .fancybar-text{font-size:12px;margin-right:0}#_fbn_ .fancybar-right{display:none}#_fbn_ .fancybar-logo img{margin-right:10px;width:80px}#_fbn_ .fancybar-disclaimer{font-size:10px}}</style><div class="_bsa_fancybar"><a href="https://srv.buysellads.com/ads/click/x/GTND42JJCTYI5K3ECTYLYKQNC6YDP2QICAADVZ3JCYYIT2QYF6SDLK7KC6BD4K7YCVYD5K3ICESDL2JLCA7IT2JJHEYIKKQEC6SI6K3ECTNCYBZ52K?segment=placement:geeksforgeeks;" class="fancybar-wrap" target="_blank" rel="noopener sponsored"><span class="fancybar-left"><span class="fancybar-logo"><img src="./Most frequent element in an array - GeeksforGeeks_files/1608830045-250x100_brand_sammy_logo_static_transparent.png"></span><span class="fancybar-text"><span class="fancybar-desc">A quick, easy, and intuitive way to build, deploy, manage, and scale your apps.</span></span></span><span class="fancybar-right"><span class="fancybar-cta">Get $100 Free Credit</span></span></a><div class="fancybar-footer"><span class="fancybar-close" onclick="_bsa.close(&#39;_fbn_&#39;)">Hide Ad</span> • <a class="fancybar-via" href="http://selfserve.buysellads.com/checkout/new/?utm_source=geeksforgeeks-org-fancybar&amp;utm_medium=ad_via_link&amp;utm_campaign=in_unit&amp;utm_term=fancybar">Ad via BuySellAds</a></div><img src="./Most frequent element in an array - GeeksforGeeks_files/B25127528.292290600" style="display:none;" height="0" width="0"></div></div>
      <div class="hello-bar-box stick-me" style="width: 100%; z-index: 1024;">
         
 <div class="hello-bar-body" style="height:35px;font-family:var(--font-sofia);font-size:15px;display:flex;align-items:center;justify-content:center;background-color:
 #ffc73e;color:#2f1757;">
                <div class="hello-bar-content" style="line-height:14px;text-align:center;padding-right:46px; 
padding-left:11px;">
                    

                    
                    

                        Dropping jaws in 3,2,1........ Happy New Year Geeks!
 <a href="https://practice.geeksforgeeks.org/resolution-days?ref=gfghb" target="_blank" style="text-decoration:underline;color:#2f1757;font-weight:bold;">
Enter Now</a>
                </div>
        
        <button class="close-hello-bar" aria-label="Aria Close 
Button" style="margin-bottom:0;padding-right:0;position:absolute;right:1em;outline:none;cursor:pointer;display:
 flex; background:transparent; border:0;font-size:20px;">
        
              <img src="./Most frequent element in an array - GeeksforGeeks_files/close-btn.png">

                </button>
          </div>
     
 </div>

    <div class="header-main__wrapper">
        <a href="https://www.geeksforgeeks.org/" aria-label="Logo" class="header-main__logo shrink">
            <div class="_logo">
                <!-- Original Logo -->
                <svg xmlns="http://www.w3.org/2000/svg" width="76.533" height="39.026" viewBox="0 0 76.533 39.026" class="ready">
                    <path d="M2380.7,6597.866a12.252,12.252,0,0,0-.261-1.513l-30.726-.027a12.545,12.545,0,0,1,.908-3.443,12.337,12.337,0,0,1,2.739-4.044,12.151,12.151,0,0,1,4.018-2.581,12.634,12.634,0,0,1,14.3,3.051l4.852-4.748a18.176,18.176,0,0,0-6.131-4.331,20.037,20.037,0,0,0-8.112-1.564,20.25,20.25,0,0,0-7.671,1.459,19.158,19.158,0,0,0-6.261,4.07,19.584,19.584,0,0,0-4.226,6.184,18.7,18.7,0,0,0-1.487,5.947h-.2a18.674,18.674,0,0,0-1.489-5.947,19.544,19.544,0,0,0-4.226-6.184,19.133,19.133,0,0,0-6.261-4.07,21.354,21.354,0,0,0-15.783.1,18.2,18.2,0,0,0-6.131,4.331l4.853,4.748a13.264,13.264,0,0,1,14.3-3.051,12.131,12.131,0,0,1,4.017,2.581,12.323,12.323,0,0,1,2.74,4.044,12.527,12.527,0,0,1,.908,3.443l-30.726.027a12.256,12.256,0,0,0-.261,1.513,15,15,0,0,0-.1,1.773,20.713,20.713,0,0,0,1.1,6.783,15.709,15.709,0,0,0,3.443,5.686,17.309,17.309,0,0,0,6,4.123,20.587,20.587,0,0,0,7.983,1.46,20.226,20.226,0,0,0,7.669-1.46,19.086,19.086,0,0,0,6.261-4.07,19.506,19.506,0,0,0,4.226-6.184,18.163,18.163,0,0,0,1.153-3.629h.871a18.27,18.27,0,0,0,1.151,3.629,19.545,19.545,0,0,0,4.226,6.184,19.111,19.111,0,0,0,6.261,4.07,20.241,20.241,0,0,0,7.671,1.46,20.572,20.572,0,0,0,7.981-1.46,17.282,17.282,0,0,0,6-4.123,15.717,15.717,0,0,0,3.445-5.686,20.726,20.726,0,0,0,1.1-6.783A15.259,15.259,0,0,0,2380.7,6597.866Zm-46.245,5.608a12.1,12.1,0,0,1-2.766,4.043,12.467,12.467,0,0,1-4.043,2.583,14.378,14.378,0,0,1-9.939.052,11.776,11.776,0,0,1-3.522-2.218,8.459,8.459,0,0,1-1.8-2.374,13.476,13.476,0,0,1-1.173-3.208l23.658,0A11.487,11.487,0,0,1,2334.457,6603.475Zm38.236,2.086a8.466,8.466,0,0,1-1.8,2.374,11.771,11.771,0,0,1-3.522,2.218,14.378,14.378,0,0,1-9.939-.052,12.491,12.491,0,0,1-4.044-2.583,12.088,12.088,0,0,1-2.765-4.043,11.427,11.427,0,0,1-.415-1.126h11.92v0h11.739A13.509,13.509,0,0,1,2372.692,6605.561Z" transform="translate(-2304.273 -6578.666)" fill="#2f8d46"></path>
                </svg>

                <svg xmlns="http://www.w3.org/2000/svg" width="155" height="21.281" viewBox="0 0 205.805 21.281" aria-hidden="true">
                    <g id="Group_156" data-name="Group 156" transform="translate(26.144 4.527)">
                        <line id="Line_1" data-name="Line 1" x1="1.046" fill="#0f2b3c"></line>
                    </g>
                    <g id="Group_157" data-name="Group 157" transform="translate(56.695 0.004)">
                        <path id="Path_243" data-name="Path 243" d="M1352.9,615.759l-6.714-6.771v6.771h-3.09V594.521h3.09v12.53l6.084-6.056,3.909,0-6.988,6.988,7.67,7.782Z" transform="translate(-1343.095 -594.521)" fill="#0f2b3c"></path>
                    </g>
                    <g id="Group_158" data-name="Group 158" transform="translate(113.247 6.427)">
                        <path id="Path_244" data-name="Path 244" d="M1504.614,627.712V612.948h3.09v2.558a3.7,3.7,0,0,1,1.447-1.91,3.9,3.9,0,0,1,2.262-.73,5.447,5.447,0,0,1,1.208.112l-.7,3a2.449,2.449,0,0,0-.842-.082,3.044,3.044,0,0,0-2.388,1.138,4.676,4.676,0,0,0-.983,3.16v7.515Z" transform="translate(-1504.614 -612.865)" fill="#0f2b3c"></path>
                    </g>
                    <g id="Group_159" data-name="Group 159" transform="translate(70.943 6.509)">
                        <path id="Path_245" data-name="Path 245" d="M1385.943,626.817a5.668,5.668,0,0,1-2.152-2.683l2.669-1.171a3.743,3.743,0,0,0,1.376,1.662,3.657,3.657,0,0,0,2.029.572,4.049,4.049,0,0,0,1.879-.395,1.266,1.266,0,0,0,.763-1.185,1.367,1.367,0,0,0-.654-1.2,6.492,6.492,0,0,0-2.016-.763l-1.662-.409a5.974,5.974,0,0,1-2.752-1.444,3.452,3.452,0,0,1-1.089-2.615,3.4,3.4,0,0,1,.722-2.152,4.647,4.647,0,0,1,1.948-1.43,6.957,6.957,0,0,1,2.67-.5,7.191,7.191,0,0,1,3.405.776,4.6,4.6,0,0,1,2.125,2.247l-2.615,1.144a2.925,2.925,0,0,0-2.888-1.608,3.231,3.231,0,0,0-1.689.409,1.213,1.213,0,0,0-.681,1.063,1.226,1.226,0,0,0,.518,1.021,4.442,4.442,0,0,0,1.526.667l2.043.518a6.573,6.573,0,0,1,3.092,1.566,3.5,3.5,0,0,1,1.049,2.575,3.72,3.72,0,0,1-.749,2.3,4.829,4.829,0,0,1-2.057,1.539,7.44,7.44,0,0,1-2.887.545A6.781,6.781,0,0,1,1385.943,626.817Z" transform="translate(-1383.791 -613.101)" fill="#0f2b3c"></path>
                    </g>
                    <g id="Group_160" data-name="Group 160" transform="translate(96.285 6.525)">
                        <path id="Path_246" data-name="Path 246" d="M1463.543,613.146a7.374,7.374,0,1,0,7.374,7.374A7.374,7.374,0,0,0,1463.543,613.146Zm0,11.532a4.228,4.228,0,1,1,4.228-4.228A4.228,4.228,0,0,1,1463.543,624.678Z" transform="translate(-1456.169 -613.146)" fill="#0f2b3c"></path>
                    </g>
                    <g id="Group_161" data-name="Group 161" transform="translate(23.011 6.524)">
                        <path id="Path_247" data-name="Path 247" d="M1261.615,621.145c.017-.232.027-.466.024-.7a7.292,7.292,0,0,0-.212-1.685,7.375,7.375,0,0,0-14.537,1.84c0,.236.017.47.04.7a7.263,7.263,0,0,0,.673,2.382,7.374,7.374,0,0,0,13.389-.141l-3.267.034a4.617,4.617,0,0,1-8.014-2.3Zm-11.664-2.266a4.614,4.614,0,0,1,8.592-.09Z" transform="translate(-1246.891 -613.144)" fill="#0f2b3c"></path>
                    </g>
                    <g id="Group_162" data-name="Group 162" transform="translate(39.461 6.524)">
                        <path id="Path_248" data-name="Path 248" d="M1308.6,621.145c.017-.232.027-.466.025-.7a7.375,7.375,0,1,0-14.749.155c0,.236.017.47.04.7a7.257,7.257,0,0,0,.672,2.382,7.375,7.375,0,0,0,13.39-.141l-3.268.034a4.616,4.616,0,0,1-8.014-2.3Zm-11.663-2.266a4.614,4.614,0,0,1,8.592-.09Z" transform="translate(-1293.873 -613.144)" fill="#0f2b3c"></path>
                    </g>
                    <g id="Group_163" data-name="Group 163" transform="translate(85.044 0.245)">
                        <path id="Path_249" data-name="Path 249" d="M1430.636,598.566a2.5,2.5,0,0,1,1.8-.549,4.2,4.2,0,0,1,1.657.281v-2.752a7.24,7.24,0,0,0-2.3-.337,4.82,4.82,0,0,0-3.455,1.278,4.666,4.666,0,0,0-1.349,3.554v1.417h-2.922v2.752h2.922v12.036h3.091V604.209h4.016v-2.752h-4.016V600.4A2.5,2.5,0,0,1,1430.636,598.566Z" transform="translate(-1424.063 -595.209)" fill="#0f2b3c"></path>
                    </g>
                    <g id="Group_164" data-name="Group 164" transform="translate(0)">
                        <path id="Path_250" data-name="Path 250" d="M1202.443,605.147a10.637,10.637,0,1,1-2.72-7.1l-1.983,1.982a7.837,7.837,0,1,0,1.656,7.09h-6.883v-2.851h9.895Q1202.443,604.7,1202.443,605.147Z" transform="translate(-1181.169 -594.51)" fill="#0f2b3c"></path>
                    </g>
                    <g id="Group_165" data-name="Group 165" transform="translate(179.788 0.004)">
                        <path id="Path_251" data-name="Path 251" d="M1704.467,615.759l-6.714-6.771v6.771h-3.09V594.521h3.09v12.53l6.084-6.056,3.909,0-6.988,6.988,7.669,7.782Z" transform="translate(-1694.663 -594.521)" fill="#0f2b3c"></path>
                    </g>
                    <g id="Group_166" data-name="Group 166" transform="translate(194.036 6.509)">
                        <path id="Path_252" data-name="Path 252" d="M1737.51,626.817a5.667,5.667,0,0,1-2.152-2.683l2.67-1.171a3.742,3.742,0,0,0,1.375,1.662,3.658,3.658,0,0,0,2.03.572,4.051,4.051,0,0,0,1.88-.395,1.267,1.267,0,0,0,.763-1.185,1.367,1.367,0,0,0-.654-1.2,6.492,6.492,0,0,0-2.016-.763l-1.662-.409a5.974,5.974,0,0,1-2.751-1.444,3.451,3.451,0,0,1-1.09-2.615,3.4,3.4,0,0,1,.722-2.152,4.651,4.651,0,0,1,1.948-1.43,6.96,6.96,0,0,1,2.67-.5,7.191,7.191,0,0,1,3.405.776,4.6,4.6,0,0,1,2.125,2.247l-2.615,1.144a2.926,2.926,0,0,0-2.888-1.608,3.232,3.232,0,0,0-1.689.409,1.214,1.214,0,0,0-.681,1.063,1.227,1.227,0,0,0,.518,1.021,4.443,4.443,0,0,0,1.526.667l2.043.518a6.576,6.576,0,0,1,3.092,1.566,3.5,3.5,0,0,1,1.049,2.575,3.719,3.719,0,0,1-.749,2.3,4.833,4.833,0,0,1-2.057,1.539,7.44,7.44,0,0,1-2.888.545A6.781,6.781,0,0,1,1737.51,626.817Z" transform="translate(-1735.358 -613.101)" fill="#0f2b3c"></path>
                    </g>
                    <g id="Group_167" data-name="Group 167" transform="translate(146.104 6.524)">
                        <path id="Path_253" data-name="Path 253" d="M1613.182,621.145c.017-.232.027-.466.025-.7a7.375,7.375,0,1,0-14.749.155c0,.236.017.47.04.7a7.254,7.254,0,0,0,.673,2.382,7.375,7.375,0,0,0,13.389-.141l-3.268.034a4.616,4.616,0,0,1-8.014-2.3Zm-11.663-2.266a4.615,4.615,0,0,1,8.592-.09Z" transform="translate(-1598.458 -613.144)" fill="#0f2b3c"></path>
                    </g>
                    <g id="Group_168" data-name="Group 168" transform="translate(162.554 6.524)">
                        <path id="Path_254" data-name="Path 254" d="M1660.165,621.145c.017-.232.027-.466.024-.7a7.375,7.375,0,1,0-14.749.155c0,.236.017.47.04.7a7.266,7.266,0,0,0,.673,2.382,7.375,7.375,0,0,0,13.389-.141l-3.268.034a4.616,4.616,0,0,1-8.014-2.3Zm-11.663-2.266a4.614,4.614,0,0,1,8.592-.09Z" transform="translate(-1645.44 -613.144)" fill="#0f2b3c"></path>
                    </g>
                    <g id="Group_169" data-name="Group 169" transform="translate(123.093)">
                        <path id="Path_255" data-name="Path 255" d="M1554.01,605.147a10.636,10.636,0,1,1-2.72-7.1l-1.983,1.982a7.837,7.837,0,1,0,1.656,7.09h-6.884v-2.851h9.895Q1554.01,604.7,1554.01,605.147Z" transform="translate(-1532.736 -594.51)" fill="#0f2b3c"></path>
                    </g>
                </svg>
            </div>
        </a>

        <div class="header-main__container">
            <span class="hamburger-menu">
                <span class="gfg-burger-1"></span>
                <span class="gfg-burger-2"></span>
                <span class="gfg-burger-3"></span>
            </span>

            <ul class="header-main__list">
                <li class="header-main__list-item" data-parent="false" aria-expanded="false" data-expandable="true">
                    Tutorials
                    <i class="gfg-icon gfg-icon_arrow-down gfg-icon_header"></i>

                    <ul class="mega-dropdown">
                        <li class="mega-dropdown__list-item" data-parent="true" aria-expanded="false" data-expandable="true">
                            <span>Algorithms</span>
                            <i class="gfg-icon gfg-icon_arrow-right"></i>
                            <ul class="mega-dropdown">
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="true">
                                    <span>Analysis of Algorithms</span>
                                    <i class="gfg-icon gfg-icon_arrow-right"></i>
                                    <ul class="mega-dropdown">
                                        <li class="mega-dropdown__list-item" aria-expanded="false" data-expandable="false">
                                            <a href="https://www.geeksforgeeks.org/analysis-of-algorithms-set-1-asymptotic-analysis/" target="_self">Asymptotic Analysis</a>
                                        </li>
                                        <li class="mega-dropdown__list-item" aria-expanded="false" data-expandable="false">
                                            <a href="https://www.geeksforgeeks.org/analysis-of-algorithms-set-2-asymptotic-analysis/" target="_self">Worst, Average and Best Cases</a>
                                        </li>
                                        <li class="mega-dropdown__list-item" aria-expanded="false" data-expandable="false">
                                            <a href="https://www.geeksforgeeks.org/analysis-of-algorithms-set-3asymptotic-notations/" target="_self">Asymptotic Notations</a>
                                        </li>
                                        <li class="mega-dropdown__list-item" aria-expanded="false" data-expandable="false">
                                            <a href="https://www.geeksforgeeks.org/analysis-of-algorithems-little-o-and-little-omega-notations/" target="_self">Little o and little omega notations</a>
                                        </li>
                                        <li class="mega-dropdown__list-item" aria-expanded="false" data-expandable="false">
                                            <a href="https://www.geeksforgeeks.org/lower-and-upper-bound-theory/" target="_self">Lower and Upper Bound Theory</a>
                                        </li>
                                        <li class="mega-dropdown__list-item" aria-expanded="false" data-expandable="false">
                                            <a href="https://www.geeksforgeeks.org/analysis-of-algorithms-set-4-analysis-of-loops/" target="_self">Analysis of Loops</a>
                                        </li>
                                        <li class="mega-dropdown__list-item" aria-expanded="false" data-expandable="false">
                                            <a href="https://www.geeksforgeeks.org/analysis-algorithm-set-4-master-method-solving-recurrences/" target="_self">Solving Recurrences</a>
                                        </li>
                                        <li class="mega-dropdown__list-item" aria-expanded="false" data-expandable="false">
                                            <a href="https://www.geeksforgeeks.org/analysis-algorithm-set-5-amortized-analysis-introduction/" target="_self">Amortized Analysis</a>
                                        </li>
                                        <li class="mega-dropdown__list-item" aria-expanded="false" data-expandable="false">
                                            <a href="https://www.geeksforgeeks.org/g-fact-86/" target="_self">What does 'Space Complexity' mean ?</a>
                                        </li>
                                        <li class="mega-dropdown__list-item" aria-expanded="false" data-expandable="false">
                                            <a href="https://www.geeksforgeeks.org/pseudo-polynomial-in-algorithms/" target="_self">Pseudo-polynomial Algorithms</a>
                                        </li>
                                        <li class="mega-dropdown__list-item" aria-expanded="false" data-expandable="false">
                                            <a href="https://www.geeksforgeeks.org/polynomial-time-approximation-scheme/" target="_self">Polynomial Time Approximation Scheme</a>
                                        </li>
                                        <li class="mega-dropdown__list-item" aria-expanded="false" data-expandable="false">
                                            <a href="https://www.geeksforgeeks.org/a-time-complexity-question/" target="_self">A Time Complexity Question</a>
                                        </li>
                                    </ul>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/searching-algorithms/" target="_self">Searching Algorithms</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/sorting-algorithms/" target="_self">Sorting Algorithms</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/graph-data-structure-and-algorithms/" target="_self">Graph Algorithms</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/algorithms-gq/pattern-searching/" target="_self">Pattern Searching</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/geometric-algorithms/" target="_self">Geometric Algorithms</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/mathematical-algorithms/" target="_self">Mathematical</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/randomized-algorithms/" target="_self">Randomized Algorithms</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/greedy-algorithms/" target="_self">Greedy Algorithms</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/dynamic-programming/" target="_self">Dynamic Programming</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/divide-and-conquer/" target="_self">Divide and Conquer</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/backtracking-algorithms/" target="_self">Backtracking</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/branch-and-bound-algorithm/" target="_self">Branch and Bound</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/fundamentals-of-algorithms/" target="_self">All Algorithms</a>
                                </li>
                            </ul>
                        </li>
                        <li class="mega-dropdown__list-item" data-parent="true" aria-expanded="false" data-expandable="true">
                            <span>Data Structures</span>
                            <i class="gfg-icon gfg-icon_arrow-right"></i>
                            <ul class="mega-dropdown">
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/array-data-structure/" target="_self">Arrays</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/data-structures/linked-list/" target="_self">Linked List</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/stack-data-structure/" target="_self">Stack</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/queue-data-structure/" target="_self">Queue</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/binary-tree-data-structure/" target="_self">Binary Tree</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/binary-search-tree-data-structure/" target="_self">Binary Search Tree</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/heap-data-structure/" target="_self">Heap</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/hashing-data-structure/" class="">Hashing</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/graph-data-structure-and-algorithms/" class="">Graph</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/advanced-data-structures/" class="">Advanced Data Structure</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/matrix/" class="">Matrix</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                <a href="https://www.geeksforgeeks.org/string-data-structure/" class="">Strings</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/data-structures/" target="_self">All Data Structures</a>
                                </li>
                            </ul>
                        </li>
                        <li class="mega-dropdown__list-item" data-parent="true" aria-expanded="false" data-expandable="true">
                            <span>Languages</span>
                            <i class="gfg-icon gfg-icon_arrow-right"></i>
                            <ul class="mega-dropdown">
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/c-programming-language/" tagret="_self">C</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/c-plus-plus/" tagret="_self">C++</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/java/" tagret="_self">Java</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/python-programming-language/" tagret="_self">Python</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/csharp-programming-language/" tagret="_self">C#</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/javascript-tutorial/" tagret="_self">Javascript</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/jquery-tutorials/" tagret="_self">jQuery</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/sql-tutorial/" tagret="_self">SQL</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/php/" tagret="_self">PHP</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/scala-programming-language/" tagret="_self">Scala</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/perl-programming-language/" tagret="_self">Perl</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/golang/" tagret="_self">Go Language</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/html-tutorials/" tagret="_self">HTML</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/css-tutorials/" tagret="_self">CSS</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/kotlin-programming-language/" tagret="_self">Kotlin</a>
                                </li>
                            </ul>
                        </li>
                        <li class="mega-dropdown__list-item" data-parent="true" aria-expanded="false" data-expandable="true">
                            <span>Interview Corner</span>
                            <i class="gfg-icon gfg-icon_arrow-right"></i>
                            <ul class="mega-dropdown">
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/company-preparation/" target="_self">Company Preparation</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/interview-preparation-for-software-developer/" target="_self">Top Topics</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://practice.geeksforgeeks.org/company-tags" target="_self" rel="noopener noreferrer">Practice Company Questions</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/company-interview-corner/" target="_self">Interview Experiences</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/experienced-interview-experiences-company-wise/" target="_self">Experienced Interviews</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/internship-interview-experiences-company-wise/" target="_self">Internship Interviews</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/category/competitive-programming/" target="_self">Competititve Programming</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/software-design-patterns/" target="_self">Design Patterns</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/quiz-corner-gq/" target="_self">Multiple Choice Quizzes</a>
                                </li>
                            </ul>
                        </li>
                        <li class="mega-dropdown__list-item" data-parent="true" aria-expanded="false" data-expandable="true">
                            <span>GATE</span>
                            <i class="gfg-icon gfg-icon_arrow-right"></i>
                            <ul class="mega-dropdown">
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/gate-cs-notes-gq/" target="_self">GATE CS Notes 2021</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/lmns-gq/" target="_self">Last Minute Notes</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/gate-corner-2-gq/" target="_self">GATE CS Solved Papers</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/original-gate-previous-year-question-papers-cse-and-it-gq/" target="_self">GATE CS Original Papers and Official Keys</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/gate-cs-2021-official-important-dates/" target="_self">GATE 2021 Dates</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/gate-cs-2021-revised-syllabus/" target="_self">GATE CS 2021 Syllabus</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/important-topics-prepare-gate-2020-computer-science-paper/" target="_self">Important Topics for GATE CS</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://practice.geeksforgeeks.org/courses/Sudo-GATE-2021" target="_self">Sudo GATE 2021</a>
                                </li>
                            </ul>
                        </li>
                        <li class="mega-dropdown__list-item" data-parent="false" aria-expanded="false" data-expandable="true">
                            ISRO CS
                            <i class="gfg-icon gfg-icon_arrow-right"></i>
                            <ul class="mega-dropdown">
                                <li class="mega-dropdown__list-item" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/isro-cs-preparation/" target="_self">ISRO CS Solved Papers</a>
                                </li>
                                <li class="mega-dropdown__list-item" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/isro-original-papers-official-keys/" target="_self">ISRO CS Original Papers and Official Keys</a>
                                </li>
                                <li class="mega-dropdown__list-item" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/isro-cse-syllabus-scientistengineer-exam-2018/" target="_self">ISRO CS Syllabus for Scientist/Engineer Exam</a>
                                </li>
                            </ul>
                        </li>
                        <li class="mega-dropdown__list-item" data-parent="false" aria-expanded="false" data-expandable="true">
                            UGC NET CS
                            <i class="gfg-icon gfg-icon_arrow-right"></i>
                            <ul class="mega-dropdown">
                                <li class="mega-dropdown__list-item" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/ugc-net-cs-notes-according-to-syllabus-of-paper-ii/" target="_self">UGC NET CS Notes Paper II</a>
                                </li>
                                <li class="mega-dropdown__list-item" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/ugc-net-cs-notes-according-to-syllabus-of-paper-iii-core-group/" target="_self">UGC NET CS Notes Paper III</a>
                                </li>
                                <li class="mega-dropdown__list-item" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/ugc-net-cs-preparation/" target="_self">UGC NET CS Solved Papers</a>
                                </li>
                            </ul>
                        </li>
                        <li class="mega-dropdown__list-item" data-parent="true" aria-expanded="false" data-expandable="true">
                            <span>CS Subjects</span>
                            <i class="gfg-icon gfg-icon_arrow-right"></i>
                            <ul class="mega-dropdown">
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/engineering-mathematics-tutorials/" target="_self">Mathematics</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/operating-systems/" target="_self">Operating System</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/dbms/" target="_self">DBMS</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/computer-network-tutorials/" target="_self">Computer Networks</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/computer-organization-and-architecture-tutorials/" target="_self">Computer Organization and Architecture</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/theory-of-computation-automata-tutorials/" target="_self">Theory of Computation</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/compiler-design-tutorials/" target="_self">Compiler Design</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/digital-electronics-logic-design-tutorials/#blg" target="_self">Digital Logic</a>
                                </li>
                                <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/software-engineering/" target="_self">Software Engineering</a>
                                </li>
                            </ul>
                        </li>
                        <li class="mega-dropdown__list-item" data-parent="false" aria-expanded="false" data-expandable="true">
                            Web Technologies
                            <i class="gfg-icon gfg-icon_arrow-right"></i>
                            <ul class="mega-dropdown">
                                <li class="mega-dropdown__list-item" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/html-tutorials/" target="_self">HTML</a>
                                </li>
                                <li class="mega-dropdown__list-item" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/css-tutorials/" target="_self">CSS</a>
                                </li>
                                <li class="mega-dropdown__list-item" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/javascript-tutorial/" target="_self">Javascript</a>
                                </li>
                                <li class="mega-dropdown__list-item" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/jquery-tutorials/" target="_self">jQuery</a>
                                </li>
                                <li class="mega-dropdown__list-item" aria-expanded="false" data-expandable="false">
                                    <a href="https://www.geeksforgeeks.org/php/" target="_self">PHP</a>
                                </li>
                            </ul>
                        </li>
                    </ul>
                </li>
                <li class="header-main__list-item" data-parent="true" aria-expanded="false" data-expandable="true">
                    <span>Student</span>
                    <i class="gfg-icon gfg-icon_arrow-down gfg-icon_header"></i>
                    <ul class="mega-dropdown">
                        <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                            <a href="https://www.geeksforgeeks.org/campus-ambassador-program-by-geeksforgeeks/" target="_self">Campus Ambassador Program</a>
                        </li>
                        <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                            <a href="https://www.geeksforgeeks.org/computer-science-projects/" target="_self">Project</a>
                        </li>
                        <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                            <a href="https://www.geeksforgeeks.org/geek-of-the-month/" target="_self">Geek of the Month</a>
                        </li>
                        <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                            <a href="https://www.geeksforgeeks.org/campus-geek-of-the-month/" target="_self">Campus Geek of the Month</a>
                        </li>
                        <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                            <a href="https://www.geeksforgeeks.org/placements-gq/" target="_self">Placement Course</a>
                        </li>
                        <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                            <a href="https://www.geeksforgeeks.org/category/competitive-programming/" target="_self">Competititve Programming</a>
                        </li>
                        <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                            <a href="https://www.geeksforgeeks.org/testimonials/" target="_self">Testimonials</a>
                        </li>
                        <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                            <a href="https://www.geeksforgeeks.org/category/geek-on-the-top/" target="_self">Geek on the Top</a>
                        </li>
                        <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                            <a href="https://www.geeksforgeeks.org/careers/" target="_self">Careers</a>
                        </li>
                        <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                            <a href="https://www.geeksforgeeks.org/internship/" target="_self">Internship</a>
                        </li>
                    </ul>
                </li>
                <li class="header-main__list-item" data-parent="true" aria-expanded="false" data-expandable="true" style="margin-left: 50px;">
                    <span>Jobs</span>
                    <i class="gfg-icon gfg-icon_arrow-down gfg-icon_header"></i>

                    <ul class="mega-dropdown">
                        <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                            <a href="https://practice.geeksforgeeks.org/jobs/" target="_self">Apply for Jobs</a>
                        </li>
                        <li class="mega-dropdown__list-item" data-child="true" aria-expanded="false" data-expandable="false">
                            <a href="https://www.geeksforgeeks.org/hire-with-us/" target="_self">Post a Job</a>
                        </li>
                    </ul>
                </li>
                <li class="header-main__list-item" aria-expanded="false" data-expandable="false">
                    <a href="https://practice.geeksforgeeks.org/" class="remove-anchor__decoration" target="_self">Courses</a>
                </li>
            </ul>

            <ul class="header-main__left-list" data-nl="false">
                <li class="header-main__left-list-item gcse-search_li p-relative" aria-expanded="false" data-expandable="false">
                    <div class="gcse_input-class">
                        <div id="___gcse_0"><div class="gsc-control-cse gsc-control-cse-en"><div class="gsc-control-wrapper-cse" dir="ltr"><form class="gsc-search-box gsc-search-box-tools" accept-charset="utf-8"><table cellspacing="0" cellpadding="0" class="gsc-search-box"><tbody><tr><td class="gsc-input"><div class="gsc-input-box" id="gsc-iw-id1"><table cellspacing="0" cellpadding="0" id="gs_id50" class="gstl_50 gsc-input" style="width: 100%; padding: 0px;"><tbody><tr><td id="gs_tti50" class="gsib_a"><input autocomplete="off" type="text" size="10" class="gsc-input" name="search" title="search" id="gsc-i-id1" dir="ltr" spellcheck="false" style="width: 100%; padding: 0px; border: none; margin: 0px; height: auto; background: url(&quot;https://www.google.com/cse/static/images/1x/en/branding.png&quot;) left center no-repeat rgb(255, 255, 255); outline: none;"></td><td class="gsib_b"><div class="gsst_b" id="gs_st50" dir="ltr"><a class="gsst_a" href="javascript:void(0)" title="Clear search box" role="button" style="display: none;"><span class="gscb_a" id="gs_cb50" aria-hidden="true">×</span></a></div></td></tr></tbody></table></div></td><td class="gsc-search-button"><button class="gsc-search-button gsc-search-button-v2"><svg width="13" height="13" viewBox="0 0 13 13"><title>search</title><path d="m4.8495 7.8226c0.82666 0 1.5262-0.29146 2.0985-0.87438 0.57232-0.58292 0.86378-1.2877 0.87438-2.1144 0.010599-0.82666-0.28086-1.5262-0.87438-2.0985-0.59352-0.57232-1.293-0.86378-2.0985-0.87438-0.8055-0.010599-1.5103 0.28086-2.1144 0.87438-0.60414 0.59352-0.8956 1.293-0.87438 2.0985 0.021197 0.8055 0.31266 1.5103 0.87438 2.1144 0.56172 0.60414 1.2665 0.8956 2.1144 0.87438zm4.4695 0.2115 3.681 3.6819-1.259 1.284-3.6817-3.7 0.0019784-0.69479-0.090043-0.098846c-0.87973 0.76087-1.92 1.1413-3.1207 1.1413-1.3553 0-2.5025-0.46363-3.4417-1.3909s-1.4088-2.0686-1.4088-3.4239c0-1.3553 0.4696-2.4966 1.4088-3.4239 0.9392-0.92727 2.0864-1.3969 3.4417-1.4088 1.3553-0.011889 2.4906 0.45771 3.406 1.4088 0.9154 0.95107 1.379 2.0924 1.3909 3.4239 0 1.2126-0.38043 2.2588-1.1413 3.1385l0.098834 0.090049z"></path></svg></button></td><td class="gsc-clear-button"><div class="gsc-clear-button" title="clear results">&nbsp;</div></td></tr></tbody></table></form><div class="gsc-results-wrapper-overlay"><div class="gsc-results-close-btn" tabindex="0"></div><div class="gsc-positioningWrapper"><div class="gsc-tabsAreaInvisible"><div aria-label="refinement" role="tab" class="gsc-tabHeader gsc-inline-block gsc-tabhActive">Custom Search</div><span class="gs-spacer"> </span></div></div><div class="gsc-positioningWrapper"><div class="gsc-tabsAreaInvisible"></div></div><div class="gsc-above-wrapper-area-invisible"><table cellspacing="0" cellpadding="0" class="gsc-above-wrapper-area-container"><tbody><tr><td class="gsc-result-info-container"><div class="gsc-result-info-invisible"></div></td><td class="gsc-orderby-container"><div class="gsc-orderby-invisible"><div class="gsc-orderby-label gsc-inline-block">Sort by:</div><div class="gsc-option-menu-container gsc-inline-block"><div class="gsc-selected-option-container gsc-inline-block"><div class="gsc-selected-option">Relevance</div><div class="gsc-option-selector"></div></div><div class="gsc-option-menu-invisible"><div class="gsc-option-menu-item gsc-option-menu-item-highlighted"><div class="gsc-option">Relevance</div></div><div class="gsc-option-menu-item"><div class="gsc-option">Date</div></div></div></div></div></td></tr></tbody></table></div><div class="gsc-adBlockInvisible"></div><div class="gsc-wrapper"><div class="gsc-adBlockInvisible"></div><div class="gsc-resultsbox-invisible"><div class="gsc-resultsRoot gsc-tabData gsc-tabdActive"><div><div class="gsc-expansionArea"></div></div></div></div></div></div><div class="gsc-modal-background-image" tabindex="0"></div></div></div></div>
                    </div>
                    <input id="header--search__input" placeholder="Search..." type="text" aria-label="GeeksforGeeks Search" name="header--search__input">
                    <!-- <i class="material-icons header--search__input-icon" style="">search</i> -->
                    <i class="header--search__input-icon">
                        <svg xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" width="24" height="24" viewBox="0 0 24 24">
                            <defs>
                                <clippath id="clip-path">
                                <rect id="Rectangle_1818" data-name="Rectangle 1818" width="24" height="24" transform="translate(21 119)" fill="#fff" stroke="#707070" stroke-width="1"></rect>
                                </clippath>
                            </defs>
                            <g id="Mask_Group_54" data-name="Mask Group 54" transform="translate(-21 -119)" clip-path="url(#clip-path)">
                                <g id="Group_4508" data-name="Group 4508" transform="translate(14 -16)">
                                <circle id="Ellipse_227" data-name="Ellipse 227" cx="6.5" cy="6.5" r="6.5" transform="translate(11 139)" fill="none" stroke="#fff" stroke-linecap="round" stroke-linejoin="round" stroke-width="1.8"></circle>
                                <line id="Line_153" data-name="Line 153" x1="6" y1="6" transform="translate(22 150)" fill="none" stroke="#fff" stroke-linecap="round" stroke-linejoin="round" stroke-width="1.6"></line>
                                </g>
                            </g>
                        </svg>
                    </i>
                    <i class="material-icons gcse-search__close-n" style="opacity: 1; width: auto;">close</i>
                </li>
                <li id="userProfileId" class="header-main__left-list-item p-relative" aria-expanded="false" data-expandable="false">
        <div class="header-main__profile">
        <img class="" src="./Most frequent element in an array - GeeksforGeeks_files/user_web-1598433228.svg" alt="yashgico Avatar">
        </div>
        <ul class="mega-dropdown">
            <li>
              <a href="https://auth.geeksforgeeks.org/user/yashgico/todo-done/" class="remove-anchor__decoration">
        <span class="gfg-icon gfg-icon_user"></span>
                <span>My Profile</span>
              </a>
            </li>
            <li>
              <a href="https://practice.geeksforgeeks.org/myCourses" class="remove-anchor__decoration">
        <span class="gfg-icon gfg-icon_courses"></span>
                <span>My Courses</span>
              </a>
            </li>
            <li>
              <a href="https://premium.geeksforgeeks.org/" class="remove-anchor__decoration">
        <span class="gfg-icon gfg-icon_premium"></span>
                <span>Go Premium</span>
              </a>
            </li>
            <li>
              <a href="https://auth.geeksforgeeks.org/edit-profile.php" class="remove-anchor__decoration">
        <span class="gfg-icon gfg-icon_edit"></span>
                <span>Edit Profile</span>
              </a>
            </li>
            <li>
              <a class="remove-anchor__decoration" href="https://auth.geeksforgeeks.org/logout.php/?to=https://www.geeksforgeeks.org/frequent-element-array/">
        <span class="gfg-icon gfg-icon_logout"></span>
                <span>Logout</span>
              </a>
            </li>
         </ul></li>
            </ul>
        </div>

        <div class="gfg-overlay display-none" id="gfg-overlay"></div>

        <div class="header-sidebar__wrapper">
            <ul class="header-sidebar__list">
    <li class="header-sidebar__list-item" style="text-align:center;padding-right:0;">
      <img style="max-width: 100px; margin-bottom: 10px;" alt="yashgico Avatar" class="" src="./Most frequent element in an array - GeeksforGeeks_files/user_web-1598433228.svg">
      <table class="userSidebar-table" style="margin-bottom:0!important;">
        <tbody><tr>
          <td>
            <a href="https://auth.geeksforgeeks.org/user/yashgico/todo-done/" target="_self">
              <span class="gfg-icon gfg-icon_default-pos gfg-icon_user"></span>
              <span>My Profile</span>
            </a>
          </td>
          <td>
            <a href="https://auth.geeksforgeeks.org/edit-profile.php" target="_self">
              <span class="gfg-icon gfg-icon_default-pos gfg-icon_edit"></span>
              <span>Edit Profile</span>
            </a>
          </td>
        </tr>
        <tr>
          <td>
            <a href="https://practice.geeksforgeeks.org/myCourses" target="_self">
              <span class="gfg-icon gfg-icon_default-pos gfg-icon_courses"></span>
              <span>My Courses</span>
            </a>
          </td>
          <td>
            <a href="https://premium.geeksforgeeks.org/" target="_self">
              <span class="gfg-icon gfg-icon_default-pos gfg-icon_premium"></span>
              <span>Go Premium</span>
            </a>
          </td>
        </tr>
      </tbody></table>
      <a href="https://auth.geeksforgeeks.org/logout.php/?to=https://www.geeksforgeeks.org/frequent-element-array/" target="_self" style="margin:0 0 15px !important;padding-top:0 !important;">
        <span class="gfg-icon gfg-icon_default-pos gfg-icon_logout"></span>
        <span>Logout</span>
      </a>
    </li>
                <li class="header-sidebar__list-item">
                    <a href="https://www.geeksforgeeks.org/" target="_self">Home</a>
                </li>
                <li class="header-sidebar__list-item">
                    <a href="https://practice.geeksforgeeks.org/" target="_self">Courses</a>
                </li>
                <li>
                    <ul id="sidebar-list">
            <li class="header-sidebar__list-item" data-expandable="true" aria-expanded="false">
                <span>Algorithms
                    <i class="gfg-icon gfg-icon_arrow-down"></i>
                </span>
            <ul class="mega-dropdown"><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/frequent-element-array/#">Analysis of Algorithms</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/searching-algorithms/">Searching Algorithms</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/sorting-algorithms/">Sorting Algorithms</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/graph-data-structure-and-algorithms/">Graph Algorithms</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/algorithms-gq/pattern-searching/">Pattern Searching</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/geometric-algorithms/">Geometric Algorithms</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/mathematical-algorithms/">Mathematical</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/randomized-algorithms/">Randomized Algorithms</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/greedy-algorithms/">Greedy Algorithms</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/dynamic-programming/">Dynamic Programming</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/divide-and-conquer/">Divide and Conquer</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/backtracking-algorithms/">Backtracking</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/branch-and-bound-algorithm/">Branch and Bound</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/fundamentals-of-algorithms/">All Algorithms</a>
                </li></ul></li>
            <li class="header-sidebar__list-item" data-expandable="true" aria-expanded="false">
                <span>Data Structures
                    <i class="gfg-icon gfg-icon_arrow-down"></i>
                </span>
            <ul class="mega-dropdown"><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/array-data-structure/">Arrays</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/data-structures/linked-list/">Linked List</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/stack-data-structure/">Stack</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/queue-data-structure/">Queue</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/binary-tree-data-structure/">Binary Tree</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/binary-search-tree-data-structure/">Binary Search Tree</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/heap-data-structure/">Heap</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/hashing-data-structure/">Hashing</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/graph-data-structure-and-algorithms/">Graph</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/advanced-data-structures/">Advanced Data Structure</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/matrix/">Matrix</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/string-data-structure/">Strings</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/data-structures/">All Data Structures</a>
                </li></ul></li>
            <li class="header-sidebar__list-item" data-expandable="true" aria-expanded="false">
                <span>Languages
                    <i class="gfg-icon gfg-icon_arrow-down"></i>
                </span>
            <ul class="mega-dropdown"><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/c-programming-language/">C</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/c-plus-plus/">C++</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/java/">Java</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/python-programming-language/">Python</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/csharp-programming-language/">C#</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/javascript-tutorial/">Javascript</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/jquery-tutorials/">jQuery</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/sql-tutorial/">SQL</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/php/">PHP</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/scala-programming-language/">Scala</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/perl-programming-language/">Perl</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/golang/">Go Language</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/html-tutorials/">HTML</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/css-tutorials/">CSS</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/kotlin-programming-language/">Kotlin</a>
                </li></ul></li>
            <li class="header-sidebar__list-item" data-expandable="true" aria-expanded="false">
                <span>Interview Corner
                    <i class="gfg-icon gfg-icon_arrow-down"></i>
                </span>
            <ul class="mega-dropdown"><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/company-preparation/">Company Preparation</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/interview-preparation-for-software-developer/">Top Topics</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://practice.geeksforgeeks.org/company-tags">Practice Company Questions</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/company-interview-corner/">Interview Experiences</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/experienced-interview-experiences-company-wise/">Experienced Interviews</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/internship-interview-experiences-company-wise/">Internship Interviews</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/category/competitive-programming/">Competititve Programming</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/software-design-patterns/">Design Patterns</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/quiz-corner-gq/">Multiple Choice Quizzes</a>
                </li></ul></li>
            <li class="header-sidebar__list-item" data-expandable="true" aria-expanded="false">
                <span>GATE
                    <i class="gfg-icon gfg-icon_arrow-down"></i>
                </span>
            <ul class="mega-dropdown"><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/gate-cs-notes-gq/">GATE CS Notes 2021</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/lmns-gq/">Last Minute Notes</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/gate-corner-2-gq/">GATE CS Solved Papers</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/original-gate-previous-year-question-papers-cse-and-it-gq/">GATE CS Original Papers and Official Keys</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/gate-cs-2021-official-important-dates/">GATE 2021 Dates</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/gate-cs-2021-revised-syllabus/">GATE CS 2021 Syllabus</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/important-topics-prepare-gate-2020-computer-science-paper/">Important Topics for GATE CS</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://practice.geeksforgeeks.org/courses/Sudo-GATE-2021">Sudo GATE 2021</a>
                </li></ul></li>
            <li class="header-sidebar__list-item" data-expandable="true" aria-expanded="false">
                <span>CS Subjects
                    <i class="gfg-icon gfg-icon_arrow-down"></i>
                </span>
            <ul class="mega-dropdown"><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/engineering-mathematics-tutorials/">Mathematics</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/operating-systems/">Operating System</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/dbms/">DBMS</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/computer-network-tutorials/">Computer Networks</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/computer-organization-and-architecture-tutorials/">Computer Organization and Architecture</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/theory-of-computation-automata-tutorials/">Theory of Computation</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/compiler-design-tutorials/">Compiler Design</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/digital-electronics-logic-design-tutorials/#blg">Digital Logic</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/software-engineering/">Software Engineering</a>
                </li></ul></li>
            <li class="header-sidebar__list-item" data-expandable="true" aria-expanded="false">
                <span>Student
                    <i class="gfg-icon gfg-icon_arrow-down"></i>
                </span>
            <ul class="mega-dropdown"><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/campus-ambassador-program-by-geeksforgeeks/">Campus Ambassador Program</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/computer-science-projects/">Project</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/geek-of-the-month/">Geek of the Month</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/campus-geek-of-the-month/">Campus Geek of the Month</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/placements-gq/">Placement Course</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/category/competitive-programming/">Competititve Programming</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/testimonials/">Testimonials</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/category/geek-on-the-top/">Geek on the Top</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/careers/">Careers</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/internship/">Internship</a>
                </li></ul></li>
            <li class="header-sidebar__list-item" data-expandable="true" aria-expanded="false">
                <span>Jobs
                    <i class="gfg-icon gfg-icon_arrow-down"></i>
                </span>
            <ul class="mega-dropdown"><li class="mega-dropdown__list-item">
                    <a href="https://practice.geeksforgeeks.org/jobs/">Apply for Jobs</a>
                </li><li class="mega-dropdown__list-item">
                    <a href="https://www.geeksforgeeks.org/hire-with-us/">Post a Job</a>
                </li></ul></li></ul>
                </li>
                <li class="header-sidebar__list-item">
                    <a href="https://www.geeksforgeeks.org/category/guestblogs/" target="_self">GBlog</a>
                </li>
                <li class="header-sidebar__list-item">
                    <a href="https://www.geeksforgeeks.org/puzzles/" target="_self">Puzzles</a>
                </li>
                <li class="header-sidebar__list-item">
                    <a href="https://www.geeksforgeeks.org/geeks-classes-geeksforgeeks/" target="_self">What's New ?</a>
                </li>
            </ul>
            <div class="" style="height: 80px;"></div>
        </div>

            </div>

        <div class="header-main__slider header-main__slider-sticky top-offset">
        <div class="header-main__slider-flex">
            <div class="header-main__slider-flex-inner" title="Related articles" data-gfg-action="article-slider">
                <i class="gfg-icon gfg-icon_article"></i>
                <span style="margin-top: -2px">Related Articles</span>
                <i class="gfg-icon gfg-icon_arrow-right"></i>
            </div>
            <div class="header-main__slider-flex-inner" title="Bookmark Article" data-gfg-action="bookmark-article" data-bookmark-value="0">
                <i class="gfg-icon gfg-icon_bookmark"></i>
                <span class="hide-sm" style="margin-top: -2px" data-value="bookmark-message"></span>
            </div>
        </div>
    </div>
    
<button id="scrollTopBtn" title="Scroll to Top" type="button" class="btn btn-success" style="display: inline-block; opacity: 1;">▲</button>
    <div id="main" class="wrapper top-spacing">
  
<style>
    .wrapper { flex-direction: column !important; }
</style>

<div class="article-page_sidebar" data-article-slider="0">
    <div class="article-page_sidebar-overlay" data-gfg-action="article-slider"></div>
    <div class="article-page_sidebar-inner">
        <div class="article-page_sidebar-head">
            <h2>Related Articles</h2>
            <i class="gfg-icon gfg-icon_close cursor-p" data-gfg-action="article-slider"></i>
        </div>
        <ul class="leftBarList"><li class="currentpage" style="background-color: var(--color-gfg)"><b><a href="https://www.geeksforgeeks.org/frequent-element-array/?ref=lbp">Most frequent element in an array</a></b></li><li><a href="https://www.geeksforgeeks.org/find-k-numbers-occurrences-given-array/?ref=lbp">Find k numbers with most occurrences in the given array</a></li><li><a href="https://www.geeksforgeeks.org/to-find-smallest-and-second-smallest-element-in-an-array/?ref=lbp">Find the smallest and second smallest elements in an array</a></li><li><a href="https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/?ref=lbp">Maximum and minimum of an array using minimum number of comparisons</a></li><li><a href="https://www.geeksforgeeks.org/reverse-digits-integer-overflow-handled/?ref=lbp">Reverse digits of an integer with overflow handled</a></li><li><a href="https://www.geeksforgeeks.org/write-a-program-to-reverse-digits-of-a-number/?ref=lbp">Write a program to reverse digits of a number</a></li><li><a href="https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/?ref=lbp">Write a program to reverse an array or string</a></li><li><a href="https://www.geeksforgeeks.org/rearrange-array-arri-arrj-even-arri/?ref=lbp">Rearrange array such that arr[i] &gt;= arr[j] if i is even and arr[i]&lt;=arr[j] if i is odd and j &lt; i</a></li><li><a href="https://www.geeksforgeeks.org/rearrange-positive-and-negative-numbers-publish/?ref=lbp">Rearrange positive and negative numbers in O(n) time and O(1) extra space</a></li><li><a href="https://www.geeksforgeeks.org/rearrange-array-alternating-positive-negative-items-o1-extra-space/?ref=lbp">Rearrange array in alternating positive &amp; negative items with O(1) extra space | Set 1</a></li><li><a href="https://www.geeksforgeeks.org/rearrange-array-in-alternating-positive-negative-items-with-o1-extra-space-set-2/?ref=lbp">Rearrange array in alternating positive &amp; negative items with O(1) extra space | Set 2</a></li><li><a href="https://www.geeksforgeeks.org/move-zeroes-end-array/?ref=lbp">Move all zeroes to end of array</a></li><li><a href="https://www.geeksforgeeks.org/move-zeroes-end-array-set-2-using-single-traversal/?ref=lbp">Move all zeroes to end of array | Set-2 (Using single traversal)</a></li><li><a href="https://www.geeksforgeeks.org/minimum-swaps-required-bring-elements-less-equal-k-together/?ref=lbp">Minimum swaps required to bring all elements less than or equal to k together</a></li><li><a href="https://www.geeksforgeeks.org/rearrange-positive-negative-numbers-using-inbuilt-sort-function/?ref=lbp">Rearrange positive and negative numbers using inbuilt sort function</a></li><li><a href="https://www.geeksforgeeks.org/rearrange-array-such-that-even-positioned-are-greater-than-odd/?ref=lbp">Rearrange array such that even positioned are greater than odd</a></li><li><a href="https://www.geeksforgeeks.org/rearrange-array-order-smallest-largest-2nd-smallest-2nd-largest/?ref=lbp">Rearrange an array in order – smallest, largest, 2nd smallest, 2nd largest, ..</a></li><li><a href="https://www.geeksforgeeks.org/double-first-element-move-zero-end/?ref=lbp">Double the first element and move zero to end</a></li><li><a href="https://www.geeksforgeeks.org/reorder-a-array-according-to-given-indexes/?ref=lbp">Reorder an array according to given indexes</a></li><li><a href="https://www.geeksforgeeks.org/given-an-array-of-numbers-arrange-the-numbers-to-form-the-biggest-number/?ref=lbp">Arrange given numbers to form the biggest number | Set 1</a></li><li><a href="https://www.geeksforgeeks.org/arrange-given-numbers-form-biggest-number-set-2/?ref=lbp">Arrange given numbers to form the biggest number | Set 2</a></li><li><a href="https://www.geeksforgeeks.org/find-the-largest-number-that-can-be-formed-with-the-given-digits/?ref=lbp">Find the largest number that can be formed with the given digits</a></li><li><a href="https://www.geeksforgeeks.org/find-next-greater-number-set-digits/?ref=lbp">Find next greater number with same set of digits</a></li><li><a href="https://www.geeksforgeeks.org/given-an-array-a-and-a-number-x-check-for-pair-in-a-with-sum-as-x/?ref=leftbar-rightbar">Given an array A[] and a number x, check for pair in A[] with sum as x</a></li><li><a href="https://www.geeksforgeeks.org/hashing-set-1-introduction/?ref=leftbar-rightbar">Hashing | Set 1 (Introduction)</a></li><li><a href="https://www.geeksforgeeks.org/hashing-set-3-open-addressing/?ref=leftbar-rightbar">Hashing | Set 3 (Open Addressing)</a></li><li><a href="https://www.geeksforgeeks.org/count-pairs-with-given-sum/?ref=leftbar-rightbar">Count pairs with given sum</a></li><li><a href="https://www.geeksforgeeks.org/internal-working-of-hashmap-java/?ref=leftbar-rightbar">Internal Working of HashMap in Java</a></li><li><a href="https://www.geeksforgeeks.org/hashing-set-2-separate-chaining/?ref=leftbar-rightbar">Hashing | Set 2 (Separate Chaining)</a></li><li><a href="https://www.geeksforgeeks.org/print-nodes-top-view-binary-tree/?ref=leftbar-rightbar">Print Nodes in Top View of Binary Tree</a></li></ul>    </div>    
</div>

<div class="container-fluid bg-light" id="home-page" style="position: relative; max-width:100%;">
    <div class="article-page_flex">
        <div class="leftBar">
          <div class="article--viewer">
              <div class="article--viewer_content">
                  <div class="a-wrapper">
                    <div class="" style="z-index:9999 !important;position:relative;">
                                        </div>
                    <article class="content post-183366 post type-post status-publish format-standard hentry category-hash category-searching category-sorting" id="post-183366">
                        <div class="title">Most frequent element in an array</div>
                        <div class="media">
                            <!-- <div class="author">
                                <div class="image-wrap">
        <img src="https://media.geeksforgeeks.org/auth/profile/rx58pta1hoijjjxu7p5f" class="img-fluid restrict-popup-gfg" alt="https://media.geeksforgeeks.org/auth/avatar.png">
    </div>
    <div class="info">
        <div class="name">
            <a href="https://auth.geeksforgeeks.org/user/kartik/articles">kartik</a>
        </div>
        <div class="handle">
            <a href="https://auth.geeksforgeeks.org/user/kartik">@kartik</a>
        </div>
    </div>                            </div> -->
                            <div class="meta">
                                <ul>
                                    <!-- <li>8 Min Read</li> -->
                                                                    <li>
                                        <span class="strong">Difficulty Level :</span>
                                        <span><a href="https://www.geeksforgeeks.org/easy">Easy</a></span>
                                    </li>
                                                                    <li>
                                        <span class="strong">Last Updated : </span>
                                        <!-- <span>02 Mar, 2018</span> -->
                                        <span>16 Jan, 2019</span>
                                    </li>
                                </ul>
                            </div>
                        </div>
                        <div class="text">
                            <p>Given an array, find the most frequent element in it. If there are multiple elements that appear maximum number of times, print any one of them.</p>
<p><strong>Examples:</strong></p>
<pre>Input : arr[] = {1, 3, 2, 1, 4, 1}
Output : 1
1 appears three times in array which
is maximum frequency.

Input : arr[] = {10, 20, 10, 20, 30, 20, 20}
Output : 20
</pre>
<p><!-- To show strongly recommend and practice link    --></p>
<div id="practiceLinkDiv">
<h2><a href="https://ide.geeksforgeeks.org/">Recommended: Please try your approach on <b><i><u>{IDE}</u></i></b> first, before moving on to the solution.</a></h2>
</div>
<p>A <strong>simple solution </strong>is to run two loops. The outer loop picks all elements one by one. The inner loop finds frequency of the picked element and compares with the maximum so far. Time complexity of this solution is O(n<sup>2</sup>)</p>
<p>A <strong>better solution</strong> is to do sorting. We first sort the array, then linearly traverse the array.</p><br><div id="AP_G4GR_5" style="min-height:280px"><div id="c9541d0b-2b1f-47f8-8b8b-63e4e11f2de9" data-section="c9541d0b-2b1f-47f8-8b8b-63e4e11f2de9" class="_ap_apex_ad" data-xpath="#AP_G4GR_5" data-section-id="" data-render-time="1610172800935" data-ap-network="adpTags" style="display: block; clear: both; text-align: center; margin: 10px auto;" data-refresh-time="1610172805414" data-timeout="210"><div id="ADP_40792_728X280_c9541d0b-2b1f-47f8-8b8b-63e4e11f2de9" style="text-align: center; margin: 0 auto;" data-google-query-id="CL2156iaju4CFcJQcgodTsEAnQ">

<div id="google_ads_iframe_/103512698/21930050872_0__container__" style="border: 0pt none; display: inline-block; width: 100%; height: auto;"><iframe frameborder="0" src="./Most frequent element in an array - GeeksforGeeks_files/container.html" id="google_ads_iframe_/103512698/21930050872_0" title="3rd party ad content" name="" scrolling="no" marginwidth="0" marginheight="0" width="0" height="159" data-is-safeframe="true" sandbox="allow-forms allow-popups allow-popups-to-escape-sandbox allow-same-origin allow-scripts allow-top-navigation-by-user-activation" data-google-container-id="4" style="border: 0px; vertical-align: bottom; min-width: 100%;" data-load-complete="true"></iframe></div></div></div></div><br>
<div class="responsive-tabs-wrapper"><div class="responsive-tabs responsive-tabs--enabled"><ul class="responsive-tabs__list" role="tablist"><li class="responsive-tabs__list__item responsive-tabs__list__item--active" id="tablist1-tab1" aria-controls="tablist1-panel1" role="tab" tabindex="0">C++</li><li class="responsive-tabs__list__item" id="tablist1-tab2" aria-controls="tablist1-panel2" role="tab" tabindex="0">Java</li><li class="responsive-tabs__list__item" id="tablist1-tab3" aria-controls="tablist1-panel3" role="tab" tabindex="0">Python3</li><li class="responsive-tabs__list__item" id="tablist1-tab4" aria-controls="tablist1-panel4" role="tab" tabindex="0">C#</li><li class="responsive-tabs__list__item" id="tablist1-tab5" aria-controls="tablist1-panel5" role="tab" tabindex="0">PHP</li></ul>
<h2 class="tabtitle responsive-tabs__heading responsive-tabs__heading--active" tabindex="0">C++</h2>
<div class="tabcontent responsive-tabs__panel responsive-tabs__panel--active" aria-hidden="false" role="tabpanel" aria-labelledby="tablist1-tab1" id="tablist1-panel1">

<div class="code-block">
<div class="code-gutter">
<div class="editor-buttons-container">
<div class="editor-buttons">
<div class="editor-buttons-div" title="Run and Edit">
                                    <i id="copy-code-button" title="Copy Code" class="material-icons code-sidebar-button copy-code-button" style="opacity: 1; width: auto;">filter_none</i><p></p>
<div id="run-and-edit-loader" class="ring-load"></div>
<p>                                    <i id="run-and-edit-button" title="Edit Code" lang="cpp" class="material-icons code-sidebar-button" style="opacity: 1; width: auto;">edit</i><br>
                                    <i id="close-code-editor-button" title="Close Editor" class="material-icons code-sidebar-button close-code-editor-button" style="opacity: 1; width: auto;">close</i></p>
<div id="run-code-loader" class="ring-load"></div>
<p>                                    <i id="run-code-button" lang="cpp" title="Run Code and See Output" class="material-icons code-sidebar-button" style="opacity: 1; width: auto;">play_arrow</i></p>
<div id="generate-url-loader" class="ring-load"></div>
<p>                                    <i id="generate-url-and-run-button" title="Run Code and Generate IDE URL" lang="cpp" class="material-icons code-sidebar-button generate-url-and-run-button" style="opacity: 1; width: auto;">link</i><br>
                                    <i title="Dark Mode" class="material-icons code-sidebar-button dark-editor-button" style="opacity: 1; width: auto;">brightness_4</i><br>
                                    <i id="edit-on-ide-button" title="Edit on IDE" lang="cpp" class="material-icons code-sidebar-button edit-on-ide-button" style="opacity: 1; width: auto;">code</i>
                                </p></div>
<p></p></div>
<p></p></div>
<p></p></div>
<div class="code-container">
<div id="highlighter_280291" class="syntaxhighlighter nogutter  ">
<table border="0" cellpadding="0" cellspacing="0">
<tbody>
<tr>
<td class="code">
<div class="container">
<div class="line number1 index0 alt2"><code class="comments">// CPP program to find the most frequent element </code></div>
<div class="line number2 index1 alt1"><code class="comments">// in an array. </code></div>
<div class="line number3 index2 alt2"><code class="preprocessor">#include &lt;bits/stdc++.h&gt; </code></div>
<div class="line number4 index3 alt1"><code class="keyword bold">using</code> <code class="keyword bold">namespace</code> <code class="plain">std; </code></div>
<div class="line number5 index4 alt2"><code class="undefined spaces">&nbsp;</code>&nbsp;</div>
<div class="line number6 index5 alt1"><code class="color1 bold">int</code> <code class="plain">mostFrequent(</code><code class="color1 bold">int</code> <code class="plain">arr[], </code><code class="color1 bold">int</code> <code class="plain">n) </code></div>
<div class="line number7 index6 alt2"><code class="plain">{ </code></div>
<div class="line number8 index7 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// Sort the array </code></div>
<div class="line number9 index8 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">sort(arr, arr + n); </code></div>
<div class="line number10 index9 alt1"><code class="undefined spaces">&nbsp;</code>&nbsp;</div>
<div class="line number11 index10 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// find the max frequency using linear traversal </code></div>
<div class="line number12 index11 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="color1 bold">int</code> <code class="plain">max_count = 1, res = arr[0], curr_count = 1; </code></div>
<div class="line number13 index12 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword bold">for</code> <code class="plain">(</code><code class="color1 bold">int</code> <code class="plain">i = 1; i &lt; n; i++) { </code></div>
<div class="line number14 index13 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword bold">if</code> <code class="plain">(arr[i] == arr[i - 1]) </code></div>
<div class="line number15 index14 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">curr_count++; </code></div>
<div class="line number16 index15 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword bold">else</code> <code class="plain">{ </code></div>
<div class="line number17 index16 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword bold">if</code> <code class="plain">(curr_count &gt; max_count) { </code></div>
<div class="line number18 index17 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">max_count = curr_count; </code></div>
<div class="line number19 index18 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">res = arr[i - 1]; </code></div>
<div class="line number20 index19 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number21 index20 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">curr_count = 1; </code></div>
<div class="line number22 index21 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number23 index22 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number24 index23 alt1"><code class="undefined spaces">&nbsp;</code>&nbsp;</div>
<div class="line number25 index24 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// If last element is most frequent </code></div>
<div class="line number26 index25 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword bold">if</code> <code class="plain">(curr_count &gt; max_count) </code></div>
<div class="line number27 index26 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">{ </code></div>
<div class="line number28 index27 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">max_count = curr_count; </code></div>
<div class="line number29 index28 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">res = arr[n - 1]; </code></div>
<div class="line number30 index29 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number31 index30 alt2"><code class="undefined spaces">&nbsp;</code>&nbsp;</div>
<div class="line number32 index31 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword bold">return</code> <code class="plain">res; </code></div>
<div class="line number33 index32 alt2"><code class="plain">} </code></div>
<div class="line number34 index33 alt1"><code class="undefined spaces">&nbsp;</code>&nbsp;</div>
<div class="line number35 index34 alt2"><code class="comments">// driver program </code></div>
<div class="line number36 index35 alt1"><code class="color1 bold">int</code> <code class="plain">main() </code></div>
<div class="line number37 index36 alt2"><code class="plain">{ </code></div>
<div class="line number38 index37 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="color1 bold">int</code> <code class="plain">arr[] = { 1, 5, 2, 1, 3, 2, 1 }; </code></div>
<div class="line number39 index38 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="color1 bold">int</code> <code class="plain">n = </code><code class="keyword bold">sizeof</code><code class="plain">(arr) / </code><code class="keyword bold">sizeof</code><code class="plain">(arr[0]); </code></div>
<div class="line number40 index39 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">cout &lt;&lt; mostFrequent(arr, n); </code></div>
<div class="line number41 index40 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword bold">return</code> <code class="plain">0; </code></div>
<div class="line number42 index41 alt1"><code class="plain">} </code></div>
</div>
</td>
</tr>
</tbody>
</table>
</div></div>
<div class="code-editor-container"></div>
<p></p></div>
<div class="code-output-container">
<div class="output-block">
                        <i id="output-icon" title="Output" class="material-icons code-sidebar-button output-icon" style="opacity: 1; width: auto;">chevron_right</i><p></p>
<pre class="output-pre"></pre>
<p></p></div>
<div class="ide-link-div">
                        <i id="copy-url-button" title="Copy Generated Ide URL" class="material-icons code-sidebar-button copy-url-button" style="opacity: 1; width: auto;">filter_none</i><p></p>
<pre id="ide-url"></pre>
<p></p></div>
<p></p></div>

</div><h2 class="tabtitle responsive-tabs__heading" tabindex="0">Java</h2>
<div class="tabcontent responsive-tabs__panel" aria-hidden="true" role="tabpanel" aria-labelledby="tablist1-tab2" id="tablist1-panel2" style="display: none;">

<div class="code-block">
<div class="code-gutter">
<div class="editor-buttons-container">
<div class="editor-buttons">
<div class="editor-buttons-div" title="Run and Edit">
                                    <i id="copy-code-button" title="Copy Code" class="material-icons code-sidebar-button copy-code-button" style="opacity: 1; width: auto;">filter_none</i><p></p>
<div id="run-and-edit-loader" class="ring-load"></div>
<p>                                    <i id="run-and-edit-button" title="Edit Code" lang="java" class="material-icons code-sidebar-button" style="opacity: 1; width: auto;">edit</i><br>
                                    <i id="close-code-editor-button" title="Close Editor" class="material-icons code-sidebar-button close-code-editor-button" style="opacity: 1; width: auto;">close</i></p>
<div id="run-code-loader" class="ring-load"></div>
<p>                                    <i id="run-code-button" lang="java" title="Run Code and See Output" class="material-icons code-sidebar-button" style="opacity: 1; width: auto;">play_arrow</i></p>
<div id="generate-url-loader" class="ring-load"></div>
<p>                                    <i id="generate-url-and-run-button" title="Run Code and Generate IDE URL" lang="java" class="material-icons code-sidebar-button generate-url-and-run-button" style="opacity: 1; width: auto;">link</i><br>
                                    <i title="Dark Mode" class="material-icons code-sidebar-button dark-editor-button" style="opacity: 1; width: auto;">brightness_4</i><br>
                                    <i id="edit-on-ide-button" title="Edit on IDE" lang="java" class="material-icons code-sidebar-button edit-on-ide-button" style="opacity: 1; width: auto;">code</i>
                                </p></div>
<p></p></div>
<p></p></div>
<p></p></div>
<div class="code-container">
<div id="highlighter_992643" class="syntaxhighlighter nogutter  ">
<table border="0" cellpadding="0" cellspacing="0">
<tbody>
<tr>
<td class="code">
<div class="container">
<div class="line number1 index0 alt2"><code class="comments">//Java program to find the most frequent element </code></div>
<div class="line number2 index1 alt1"><code class="comments">//in an array </code></div>
<div class="line number3 index2 alt2"><code class="keyword">import</code> <code class="plain">java.util.*; </code></div>
<div class="line number4 index3 alt1"><code class="undefined spaces">&nbsp;</code>&nbsp;</div>
<div class="line number5 index4 alt2"><code class="keyword">class</code> <code class="plain">GFG { </code></div>
<div class="line number6 index5 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number7 index6 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">static</code> <code class="keyword">int</code> <code class="plain">mostFrequent(</code><code class="keyword">int</code> <code class="plain">arr[], </code><code class="keyword">int</code> <code class="plain">n) </code></div>
<div class="line number8 index7 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">{ </code></div>
<div class="line number9 index8 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number10 index9 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// Sort the array </code></div>
<div class="line number11 index10 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">Arrays.sort(arr); </code></div>
<div class="line number12 index11 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number13 index12 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// find the max frequency using linear </code></div>
<div class="line number14 index13 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// traversal </code></div>
<div class="line number15 index14 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">int</code> <code class="plain">max_count = </code><code class="value">1</code><code class="plain">, res = arr[</code><code class="value">0</code><code class="plain">]; </code></div>
<div class="line number16 index15 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">int</code> <code class="plain">curr_count = </code><code class="value">1</code><code class="plain">; </code></div>
<div class="line number17 index16 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number18 index17 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">for</code> <code class="plain">(</code><code class="keyword">int</code> <code class="plain">i = </code><code class="value">1</code><code class="plain">; i &lt; n; i++) </code></div>
<div class="line number19 index18 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">{ </code></div>
<div class="line number20 index19 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">if</code> <code class="plain">(arr[i] == arr[i - </code><code class="value">1</code><code class="plain">]) </code></div>
<div class="line number21 index20 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">curr_count++; </code></div>
<div class="line number22 index21 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">else</code>&nbsp;</div>
<div class="line number23 index22 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">{ </code></div>
<div class="line number24 index23 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">if</code> <code class="plain">(curr_count &gt; max_count) </code></div>
<div class="line number25 index24 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">{ </code></div>
<div class="line number26 index25 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">max_count = curr_count; </code></div>
<div class="line number27 index26 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">res = arr[i - </code><code class="value">1</code><code class="plain">]; </code></div>
<div class="line number28 index27 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number29 index28 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">curr_count = </code><code class="value">1</code><code class="plain">; </code></div>
<div class="line number30 index29 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number31 index30 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number32 index31 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number33 index32 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// If last element is most frequent </code></div>
<div class="line number34 index33 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">if</code> <code class="plain">(curr_count &gt; max_count) </code></div>
<div class="line number35 index34 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">{ </code></div>
<div class="line number36 index35 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">max_count = curr_count; </code></div>
<div class="line number37 index36 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">res = arr[n - </code><code class="value">1</code><code class="plain">]; </code></div>
<div class="line number38 index37 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number39 index38 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number40 index39 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">return</code> <code class="plain">res; </code></div>
<div class="line number41 index40 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number42 index41 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number43 index42 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// Driver program </code></div>
<div class="line number44 index43 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">public</code> <code class="keyword">static</code> <code class="keyword">void</code> <code class="plain">main (String[] args) { </code></div>
<div class="line number45 index44 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number46 index45 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">int</code> <code class="plain">arr[] = {</code><code class="value">1</code><code class="plain">, </code><code class="value">5</code><code class="plain">, </code><code class="value">2</code><code class="plain">, </code><code class="value">1</code><code class="plain">, </code><code class="value">3</code><code class="plain">, </code><code class="value">2</code><code class="plain">, </code><code class="value">1</code><code class="plain">}; </code></div>
<div class="line number47 index46 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">int</code> <code class="plain">n = arr.length; </code></div>
<div class="line number48 index47 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number49 index48 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">System.out.println(mostFrequent(arr,n)); </code></div>
<div class="line number50 index49 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number51 index50 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number52 index51 alt1"><code class="plain">} </code></div>
<div class="line number53 index52 alt2"><code class="undefined spaces">&nbsp;</code>&nbsp;</div>
<div class="line number54 index53 alt1"><code class="comments">// This code is contributed by Akash Singh. </code></div>
</div>
</td>
</tr>
</tbody>
</table>
</div></div>
<div class="code-editor-container"></div>
<p></p></div>
<div class="code-output-container">
<div class="output-block">
                        <i id="output-icon" title="Output" class="material-icons code-sidebar-button output-icon" style="opacity: 1; width: auto;">chevron_right</i><p></p>
<pre class="output-pre"></pre>
<p></p></div>
<div class="ide-link-div">
                        <i id="copy-url-button" title="Copy Generated Ide URL" class="material-icons code-sidebar-button copy-url-button" style="opacity: 1; width: auto;">filter_none</i><p></p>
<pre id="ide-url"></pre>
<p></p></div>
<p></p></div>

</div><h2 class="tabtitle responsive-tabs__heading" tabindex="0">Python3</h2>
<div class="tabcontent responsive-tabs__panel" aria-hidden="true" role="tabpanel" aria-labelledby="tablist1-tab3" id="tablist1-panel3" style="display: none;">

<div class="code-block">
<div class="code-gutter">
<div class="editor-buttons-container">
<div class="editor-buttons">
<div class="editor-buttons-div" title="Run and Edit">
                                    <i id="copy-code-button" title="Copy Code" class="material-icons code-sidebar-button copy-code-button" style="opacity: 1; width: auto;">filter_none</i><p></p>
<div id="run-and-edit-loader" class="ring-load"></div>
<p>                                    <i id="run-and-edit-button" title="Edit Code" lang="python3" class="material-icons code-sidebar-button" style="opacity: 1; width: auto;">edit</i><br>
                                    <i id="close-code-editor-button" title="Close Editor" class="material-icons code-sidebar-button close-code-editor-button" style="opacity: 1; width: auto;">close</i></p>
<div id="run-code-loader" class="ring-load"></div>
<p>                                    <i id="run-code-button" lang="python3" title="Run Code and See Output" class="material-icons code-sidebar-button" style="opacity: 1; width: auto;">play_arrow</i></p>
<div id="generate-url-loader" class="ring-load"></div>
<p>                                    <i id="generate-url-and-run-button" title="Run Code and Generate IDE URL" lang="python3" class="material-icons code-sidebar-button generate-url-and-run-button" style="opacity: 1; width: auto;">link</i><br>
                                    <i title="Dark Mode" class="material-icons code-sidebar-button dark-editor-button" style="opacity: 1; width: auto;">brightness_4</i><br>
                                    <i id="edit-on-ide-button" title="Edit on IDE" lang="python3" class="material-icons code-sidebar-button edit-on-ide-button" style="opacity: 1; width: auto;">code</i>
                                </p></div>
<p></p></div>
<p></p></div>
<p></p></div>
<div class="code-container">
<div id="highlighter_349979" class="syntaxhighlighter nogutter  ">
<table border="0" cellpadding="0" cellspacing="0">
<tbody>
<tr>
<td class="code">
<div class="container">
<div class="line number1 index0 alt2"><code class="comments"># Python3 program to find the most&nbsp; </code></div>
<div class="line number2 index1 alt1"><code class="comments"># frequent element in an array. </code></div>
<div class="line number3 index2 alt2"><code class="undefined spaces">&nbsp;</code>&nbsp;</div>
<div class="line number4 index3 alt1"><code class="keyword">def</code> <code class="plain">mostFrequent(arr, n): </code></div>
<div class="line number5 index4 alt2"><code class="undefined spaces">&nbsp;</code>&nbsp;</div>
<div class="line number6 index5 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments"># Sort the array </code></div>
<div class="line number7 index6 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">arr.sort() </code></div>
<div class="line number8 index7 alt1"><code class="undefined spaces">&nbsp;</code>&nbsp;</div>
<div class="line number9 index8 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments"># find the max frequency using </code></div>
<div class="line number10 index9 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments"># linear traversal </code></div>
<div class="line number11 index10 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">max_count </code><code class="keyword">=</code> <code class="value">1</code><code class="plain">; res </code><code class="keyword">=</code> <code class="plain">arr[</code><code class="value">0</code><code class="plain">]; curr_count </code><code class="keyword">=</code> <code class="value">1</code></div>
<div class="line number12 index11 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number13 index12 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">for</code> <code class="plain">i </code><code class="keyword">in</code> <code class="functions">range</code><code class="plain">(</code><code class="value">1</code><code class="plain">, n):&nbsp; </code></div>
<div class="line number14 index13 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">if</code> <code class="plain">(arr[i] </code><code class="keyword">=</code><code class="keyword">=</code> <code class="plain">arr[i </code><code class="keyword">-</code> <code class="value">1</code><code class="plain">]): </code></div>
<div class="line number15 index14 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">curr_count </code><code class="keyword">+</code><code class="keyword">=</code> <code class="value">1</code></div>
<div class="line number16 index15 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number17 index16 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">else</code> <code class="plain">: </code></div>
<div class="line number18 index17 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">if</code> <code class="plain">(curr_count &gt; max_count):&nbsp; </code></div>
<div class="line number19 index18 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">max_count </code><code class="keyword">=</code> <code class="plain">curr_count </code></div>
<div class="line number20 index19 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">res </code><code class="keyword">=</code> <code class="plain">arr[i </code><code class="keyword">-</code> <code class="value">1</code><code class="plain">] </code></div>
<div class="line number21 index20 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number22 index21 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">curr_count </code><code class="keyword">=</code> <code class="value">1</code></div>
<div class="line number23 index22 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number24 index23 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments"># If last element is most frequent </code></div>
<div class="line number25 index24 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">if</code> <code class="plain">(curr_count &gt; max_count): </code></div>
<div class="line number26 index25 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number27 index26 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">max_count </code><code class="keyword">=</code> <code class="plain">curr_count </code></div>
<div class="line number28 index27 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">res </code><code class="keyword">=</code> <code class="plain">arr[n </code><code class="keyword">-</code> <code class="value">1</code><code class="plain">] </code></div>
<div class="line number29 index28 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number30 index29 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">return</code> <code class="plain">res </code></div>
<div class="line number31 index30 alt2"><code class="undefined spaces">&nbsp;</code>&nbsp;</div>
<div class="line number32 index31 alt1"><code class="comments"># Driver Code </code></div>
<div class="line number33 index32 alt2"><code class="plain">arr </code><code class="keyword">=</code> <code class="plain">[</code><code class="value">1</code><code class="plain">, </code><code class="value">5</code><code class="plain">, </code><code class="value">2</code><code class="plain">, </code><code class="value">1</code><code class="plain">, </code><code class="value">3</code><code class="plain">, </code><code class="value">2</code><code class="plain">, </code><code class="value">1</code><code class="plain">]&nbsp; </code></div>
<div class="line number34 index33 alt1"><code class="plain">n </code><code class="keyword">=</code> <code class="functions">len</code><code class="plain">(arr) </code></div>
<div class="line number35 index34 alt2"><code class="functions">print</code><code class="plain">(mostFrequent(arr, n)) </code></div>
<div class="line number36 index35 alt1"><code class="undefined spaces">&nbsp;</code>&nbsp;</div>
<div class="line number37 index36 alt2"><code class="comments"># This code is contributed by Smitha Dinesh Semwal. </code></div>
</div>
</td>
</tr>
</tbody>
</table>
</div></div>
<div class="code-editor-container"></div>
<p></p></div>
<div class="code-output-container">
<div class="output-block">
                        <i id="output-icon" title="Output" class="material-icons code-sidebar-button output-icon" style="opacity: 1; width: auto;">chevron_right</i><p></p>
<pre class="output-pre"></pre>
<p></p></div>
<div class="ide-link-div">
                        <i id="copy-url-button" title="Copy Generated Ide URL" class="material-icons code-sidebar-button copy-url-button" style="opacity: 1; width: auto;">filter_none</i><p></p>
<pre id="ide-url"></pre>
<p></p></div>
<p></p></div>

</div><h2 class="tabtitle responsive-tabs__heading" tabindex="0">C#</h2>
<div class="tabcontent responsive-tabs__panel" aria-hidden="true" role="tabpanel" aria-labelledby="tablist1-tab4" id="tablist1-panel4" style="display: none;">

<div class="code-block">
<div class="code-gutter">
<div class="editor-buttons-container">
<div class="editor-buttons">
<div class="editor-buttons-div" title="Run and Edit">
                                    <i id="copy-code-button" title="Copy Code" class="material-icons code-sidebar-button copy-code-button" style="opacity: 1; width: auto;">filter_none</i><p></p>
<div id="run-and-edit-loader" class="ring-load"></div>
<p>                                    <i id="run-and-edit-button" title="Edit Code" lang="csharp" class="material-icons code-sidebar-button" style="opacity: 1; width: auto;">edit</i><br>
                                    <i id="close-code-editor-button" title="Close Editor" class="material-icons code-sidebar-button close-code-editor-button" style="opacity: 1; width: auto;">close</i></p>
<div id="run-code-loader" class="ring-load"></div>
<p>                                    <i id="run-code-button" lang="csharp" title="Run Code and See Output" class="material-icons code-sidebar-button" style="opacity: 1; width: auto;">play_arrow</i></p>
<div id="generate-url-loader" class="ring-load"></div>
<p>                                    <i id="generate-url-and-run-button" title="Run Code and Generate IDE URL" lang="csharp" class="material-icons code-sidebar-button generate-url-and-run-button" style="opacity: 1; width: auto;">link</i><br>
                                    <i title="Dark Mode" class="material-icons code-sidebar-button dark-editor-button" style="opacity: 1; width: auto;">brightness_4</i><br>
                                    <i id="edit-on-ide-button" title="Edit on IDE" lang="csharp" class="material-icons code-sidebar-button edit-on-ide-button" style="opacity: 1; width: auto;">code</i>
                                </p></div>
<p></p></div>
<p></p></div>
<p></p></div>
<div class="code-container">
<div id="highlighter_50547" class="syntaxhighlighter nogutter  ">
<table border="0" cellpadding="0" cellspacing="0">
<tbody>
<tr>
<td class="code">
<div class="container">
<div class="line number1 index0 alt2"><code class="comments">// C# program to find the most&nbsp; </code></div>
<div class="line number2 index1 alt1"><code class="comments">// frequent element in an array </code></div>
<div class="line number3 index2 alt2"><code class="keyword">using</code> <code class="plain">System; </code></div>
<div class="line number4 index3 alt1"><code class="undefined spaces">&nbsp;</code>&nbsp;</div>
<div class="line number5 index4 alt2"><code class="keyword">class</code> <code class="plain">GFG { </code></div>
<div class="line number6 index5 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number7 index6 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">static</code> <code class="keyword">int</code> <code class="plain">mostFrequent(</code><code class="keyword">int</code> <code class="plain">[]arr, </code><code class="keyword">int</code> <code class="plain">n) </code></div>
<div class="line number8 index7 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">{ </code></div>
<div class="line number9 index8 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number10 index9 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// Sort the array </code></div>
<div class="line number11 index10 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">Array.Sort(arr); </code></div>
<div class="line number12 index11 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number13 index12 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// find the max frequency using&nbsp; </code></div>
<div class="line number14 index13 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// linear traversal </code></div>
<div class="line number15 index14 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">int</code> <code class="plain">max_count = 1, res = arr[0]; </code></div>
<div class="line number16 index15 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">int</code> <code class="plain">curr_count = 1; </code></div>
<div class="line number17 index16 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number18 index17 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">for</code> <code class="plain">(</code><code class="keyword">int</code> <code class="plain">i = 1; i &lt; n; i++) </code></div>
<div class="line number19 index18 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">{ </code></div>
<div class="line number20 index19 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">if</code> <code class="plain">(arr[i] == arr[i - 1]) </code></div>
<div class="line number21 index20 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">curr_count++; </code></div>
<div class="line number22 index21 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">else</code></div>
<div class="line number23 index22 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">{ </code></div>
<div class="line number24 index23 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">if</code> <code class="plain">(curr_count &gt; max_count) </code></div>
<div class="line number25 index24 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">{ </code></div>
<div class="line number26 index25 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">max_count = curr_count; </code></div>
<div class="line number27 index26 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">res = arr[i - 1]; </code></div>
<div class="line number28 index27 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number29 index28 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">curr_count = 1; </code></div>
<div class="line number30 index29 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number31 index30 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number32 index31 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number33 index32 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// If last element is most frequent </code></div>
<div class="line number34 index33 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">if</code> <code class="plain">(curr_count &gt; max_count) </code></div>
<div class="line number35 index34 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">{ </code></div>
<div class="line number36 index35 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">max_count = curr_count; </code></div>
<div class="line number37 index36 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">res = arr[n - 1]; </code></div>
<div class="line number38 index37 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number39 index38 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number40 index39 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">return</code> <code class="plain">res; </code></div>
<div class="line number41 index40 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number42 index41 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number43 index42 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// Driver code </code></div>
<div class="line number44 index43 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">public</code> <code class="keyword">static</code> <code class="keyword">void</code> <code class="plain">Main ()&nbsp; </code></div>
<div class="line number45 index44 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">{ </code></div>
<div class="line number46 index45 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number47 index46 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">int</code> <code class="plain">[]arr = {1, 5, 2, 1, 3, 2, 1}; </code></div>
<div class="line number48 index47 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">int</code> <code class="plain">n = arr.Length; </code></div>
<div class="line number49 index48 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number50 index49 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">Console.WriteLine(mostFrequent(arr,n)); </code></div>
<div class="line number51 index50 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number52 index51 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number53 index52 alt2"><code class="plain">} </code></div>
<div class="line number54 index53 alt1"><code class="undefined spaces">&nbsp;</code>&nbsp;</div>
<div class="line number55 index54 alt2"><code class="comments">// This code is contributed by vt_m. </code></div>
</div>
</td>
</tr>
</tbody>
</table>
</div></div>
<div class="code-editor-container"></div>
<p></p></div>
<div class="code-output-container">
<div class="output-block">
                        <i id="output-icon" title="Output" class="material-icons code-sidebar-button output-icon" style="opacity: 1; width: auto;">chevron_right</i><p></p>
<pre class="output-pre"></pre>
<p></p></div>
<div class="ide-link-div">
                        <i id="copy-url-button" title="Copy Generated Ide URL" class="material-icons code-sidebar-button copy-url-button" style="opacity: 1; width: auto;">filter_none</i><p></p>
<pre id="ide-url"></pre>
<p></p></div>
<p></p></div>

</div><h2 class="tabtitle responsive-tabs__heading" tabindex="0">PHP</h2>
<div class="tabcontent responsive-tabs__panel" aria-hidden="true" role="tabpanel" aria-labelledby="tablist1-tab5" id="tablist1-panel5" style="display: none;">

<div class="code-block">
<div class="code-gutter">
<div class="editor-buttons-container">
<div class="editor-buttons">
<div class="editor-buttons-div" title="Run and Edit">
                                    <i id="copy-code-button" title="Copy Code" class="material-icons code-sidebar-button copy-code-button" style="opacity: 1; width: auto;">filter_none</i><p></p>
<div id="run-and-edit-loader" class="ring-load"></div>
<p>                                    <i id="run-and-edit-button" title="Edit Code" lang="php" class="material-icons code-sidebar-button" style="opacity: 1; width: auto;">edit</i><br>
                                    <i id="close-code-editor-button" title="Close Editor" class="material-icons code-sidebar-button close-code-editor-button" style="opacity: 1; width: auto;">close</i></p>
<div id="run-code-loader" class="ring-load"></div>
<p>                                    <i id="run-code-button" lang="php" title="Run Code and See Output" class="material-icons code-sidebar-button" style="opacity: 1; width: auto;">play_arrow</i></p>
<div id="generate-url-loader" class="ring-load"></div>
<p>                                    <i id="generate-url-and-run-button" title="Run Code and Generate IDE URL" lang="php" class="material-icons code-sidebar-button generate-url-and-run-button" style="opacity: 1; width: auto;">link</i><br>
                                    <i title="Dark Mode" class="material-icons code-sidebar-button dark-editor-button" style="opacity: 1; width: auto;">brightness_4</i><br>
                                    <i id="edit-on-ide-button" title="Edit on IDE" lang="php" class="material-icons code-sidebar-button edit-on-ide-button" style="opacity: 1; width: auto;">code</i>
                                </p></div>
<p></p></div>
<p></p></div>
<p></p></div>
<div class="code-container">
<div id="highlighter_646287" class="syntaxhighlighter nogutter  ">
<table border="0" cellpadding="0" cellspacing="0">
<tbody>
<tr>
<td class="code">
<div class="container">
<div class="line number1 index0 alt2"><code class="plain">&lt;?php </code></div>
<div class="line number2 index1 alt1"><code class="comments">// PHP program to find the </code></div>
<div class="line number3 index2 alt2"><code class="comments">// most frequent element </code></div>
<div class="line number4 index3 alt1"><code class="comments">// in an array. </code></div>
<div class="line number5 index4 alt2"><code class="undefined spaces">&nbsp;</code>&nbsp;</div>
<div class="line number6 index5 alt1"><code class="keyword">function</code> <code class="plain">mostFrequent( </code><code class="variable">$arr</code><code class="plain">, </code><code class="variable">$n</code><code class="plain">) </code></div>
<div class="line number7 index6 alt2"><code class="plain">{ </code></div>
<div class="line number8 index7 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number9 index8 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// Sort the array </code></div>
<div class="line number10 index9 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">sort(</code><code class="variable">$arr</code><code class="plain">); </code></div>
<div class="line number11 index10 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">sort(</code><code class="variable">$arr</code> <code class="plain">, </code><code class="variable">$n</code><code class="plain">); </code></div>
<div class="line number12 index11 alt1"><code class="undefined spaces">&nbsp;</code>&nbsp;</div>
<div class="line number13 index12 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// find the max frequency&nbsp; </code></div>
<div class="line number14 index13 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// using linear traversal </code></div>
<div class="line number15 index14 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="variable">$max_count</code> <code class="plain">= 1;&nbsp; </code></div>
<div class="line number16 index15 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="variable">$res</code> <code class="plain">= </code><code class="variable">$arr</code><code class="plain">[0];&nbsp; </code></div>
<div class="line number17 index16 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="variable">$curr_count</code> <code class="plain">= 1; </code></div>
<div class="line number18 index17 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">for</code> <code class="plain">(</code><code class="variable">$i</code> <code class="plain">= 1; </code><code class="variable">$i</code> <code class="plain">&lt; </code><code class="variable">$n</code><code class="plain">; </code><code class="variable">$i</code><code class="plain">++)&nbsp; </code></div>
<div class="line number19 index18 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">{ </code></div>
<div class="line number20 index19 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">if</code> <code class="plain">(</code><code class="variable">$arr</code><code class="plain">[</code><code class="variable">$i</code><code class="plain">] == </code><code class="variable">$arr</code><code class="plain">[</code><code class="variable">$i</code> <code class="plain">- 1]) </code></div>
<div class="line number21 index20 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="variable">$curr_count</code><code class="plain">++; </code></div>
<div class="line number22 index21 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">else</code>&nbsp;</div>
<div class="line number23 index22 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">{ </code></div>
<div class="line number24 index23 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">if</code> <code class="plain">(</code><code class="variable">$curr_count</code> <code class="plain">&gt; </code><code class="variable">$max_count</code><code class="plain">) </code></div>
<div class="line number25 index24 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">{ </code></div>
<div class="line number26 index25 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="variable">$max_count</code> <code class="plain">= </code><code class="variable">$curr_count</code><code class="plain">; </code></div>
<div class="line number27 index26 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="variable">$res</code> <code class="plain">= </code><code class="variable">$arr</code><code class="plain">[</code><code class="variable">$i</code> <code class="plain">- 1]; </code></div>
<div class="line number28 index27 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number29 index28 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="variable">$curr_count</code> <code class="plain">= 1; </code></div>
<div class="line number30 index29 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number31 index30 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number32 index31 alt1"><code class="undefined spaces">&nbsp;</code>&nbsp;</div>
<div class="line number33 index32 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// If last element&nbsp; </code></div>
<div class="line number34 index33 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// is most frequent </code></div>
<div class="line number35 index34 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">if</code> <code class="plain">(</code><code class="variable">$curr_count</code> <code class="plain">&gt; </code><code class="variable">$max_count</code><code class="plain">) </code></div>
<div class="line number36 index35 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">{ </code></div>
<div class="line number37 index36 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="variable">$max_count</code> <code class="plain">= </code><code class="variable">$curr_count</code><code class="plain">; </code></div>
<div class="line number38 index37 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="variable">$res</code> <code class="plain">= </code><code class="variable">$arr</code><code class="plain">[</code><code class="variable">$n</code> <code class="plain">- 1]; </code></div>
<div class="line number39 index38 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number40 index39 alt1"><code class="undefined spaces">&nbsp;</code>&nbsp;</div>
<div class="line number41 index40 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">return</code> <code class="variable">$res</code><code class="plain">; </code></div>
<div class="line number42 index41 alt1"><code class="plain">} </code></div>
<div class="line number43 index42 alt2"><code class="undefined spaces">&nbsp;</code>&nbsp;</div>
<div class="line number44 index43 alt1"><code class="comments">// Driver Code </code></div>
<div class="line number45 index44 alt2"><code class="plain">{ </code></div>
<div class="line number46 index45 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="variable">$arr</code> <code class="plain">= </code><code class="keyword">array</code><code class="plain">(1, 5, 2, 1, 3, 2, 1); </code></div>
<div class="line number47 index46 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="variable">$n</code> <code class="plain">= sizeof(</code><code class="variable">$arr</code><code class="plain">) / sizeof(</code><code class="variable">$arr</code><code class="plain">[0]); </code></div>
<div class="line number48 index47 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="functions">echo</code> <code class="plain">mostFrequent(</code><code class="variable">$arr</code><code class="plain">, </code><code class="variable">$n</code><code class="plain">); </code></div>
<div class="line number49 index48 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">return</code> <code class="plain">0; </code></div>
<div class="line number50 index49 alt1"><code class="plain">} </code></div>
<div class="line number51 index50 alt2"><code class="undefined spaces">&nbsp;</code>&nbsp;</div>
<div class="line number52 index51 alt1"><code class="comments">// This code is contributed by nitin mittal </code></div>
<div class="line number53 index52 alt2"><code class="plain">?&gt; </code></div>
</div>
</td>
</tr>
</tbody>
</table>
</div></div>
<div class="code-editor-container"></div>
<p></p></div>
<div class="code-output-container">
<div class="output-block">
                        <i id="output-icon" title="Output" class="material-icons code-sidebar-button output-icon" style="opacity: 1; width: auto;">chevron_right</i><p></p>
<pre class="output-pre"></pre>
<p></p></div>
<div class="ide-link-div">
                        <i id="copy-url-button" title="Copy Generated Ide URL" class="material-icons code-sidebar-button copy-url-button" style="opacity: 1; width: auto;">filter_none</i><p></p>
<pre id="ide-url"></pre>
<p></p></div>
<p></p></div>
</div></div></div>
<div class="outputDiv">
<b>Output :</b><p></p>
<pre>1
</pre>
</div>
<p>Time Complexity : O(n Log n)<br>
Auxiliary Space : O(1)</p>
<p>An <strong>efficient solution</strong> is to use hashing. We create a hash table and store elements and their frequency counts as key value pairs. Finally we traverse the hash table and print the key with maximum value.<br>
</p><div class="responsive-tabs-wrapper"><div class="responsive-tabs responsive-tabs--enabled"><ul class="responsive-tabs__list" role="tablist"><li class="responsive-tabs__list__item responsive-tabs__list__item--active" id="tablist2-tab1" aria-controls="tablist2-panel1" role="tab" tabindex="0">C++</li><li class="responsive-tabs__list__item" id="tablist2-tab2" aria-controls="tablist2-panel2" role="tab" tabindex="0">Java</li><li class="responsive-tabs__list__item" id="tablist2-tab3" aria-controls="tablist2-panel3" role="tab" tabindex="0">Python3</li><li class="responsive-tabs__list__item" id="tablist2-tab4" aria-controls="tablist2-panel4" role="tab" tabindex="0">C#</li></ul>
<h2 class="tabtitle responsive-tabs__heading responsive-tabs__heading--active" tabindex="0">C++</h2>
<div class="tabcontent responsive-tabs__panel responsive-tabs__panel--active" aria-hidden="false" role="tabpanel" aria-labelledby="tablist2-tab1" id="tablist2-panel1">
<p></p>
<div class="code-block">
<div class="code-gutter">
<div class="editor-buttons-container">
<div class="editor-buttons">
<div class="editor-buttons-div" title="Run and Edit">
                                    <i id="copy-code-button" title="Copy Code" class="material-icons code-sidebar-button copy-code-button" style="opacity: 1; width: auto;">filter_none</i><p></p>
<div id="run-and-edit-loader" class="ring-load"></div>
<p>                                    <i id="run-and-edit-button" title="Edit Code" lang="cpp" class="material-icons code-sidebar-button" style="opacity: 1; width: auto;">edit</i><br>
                                    <i id="close-code-editor-button" title="Close Editor" class="material-icons code-sidebar-button close-code-editor-button" style="opacity: 1; width: auto;">close</i></p>
<div id="run-code-loader" class="ring-load"></div>
<p>                                    <i id="run-code-button" lang="cpp" title="Run Code and See Output" class="material-icons code-sidebar-button" style="opacity: 1; width: auto;">play_arrow</i></p>
<div id="generate-url-loader" class="ring-load"></div>
<p>                                    <i id="generate-url-and-run-button" title="Run Code and Generate IDE URL" lang="cpp" class="material-icons code-sidebar-button generate-url-and-run-button" style="opacity: 1; width: auto;">link</i><br>
                                    <i title="Dark Mode" class="material-icons code-sidebar-button dark-editor-button" style="opacity: 1; width: auto;">brightness_4</i><br>
                                    <i id="edit-on-ide-button" title="Edit on IDE" lang="cpp" class="material-icons code-sidebar-button edit-on-ide-button" style="opacity: 1; width: auto;">code</i>
                                </p></div>
<p></p></div>
<p></p></div>
<p></p></div>
<div class="code-container">
<div id="highlighter_283559" class="syntaxhighlighter nogutter  ">
<table border="0" cellpadding="0" cellspacing="0">
<tbody>
<tr>
<td class="code">
<div class="container">
<div class="line number1 index0 alt2"><code class="comments">// CPP program to find the most frequent element </code></div>
<div class="line number2 index1 alt1"><code class="comments">// in an array. </code></div>
<div class="line number3 index2 alt2"><code class="preprocessor">#include &lt;bits/stdc++.h&gt; </code></div>
<div class="line number4 index3 alt1"><code class="keyword bold">using</code> <code class="keyword bold">namespace</code> <code class="plain">std; </code></div>
<div class="line number5 index4 alt2"><code class="undefined spaces">&nbsp;</code>&nbsp;</div>
<div class="line number6 index5 alt1"><code class="color1 bold">int</code> <code class="plain">mostFrequent(</code><code class="color1 bold">int</code> <code class="plain">arr[], </code><code class="color1 bold">int</code> <code class="plain">n) </code></div>
<div class="line number7 index6 alt2"><code class="plain">{ </code></div>
<div class="line number8 index7 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// Insert all elements in hash. </code></div>
<div class="line number9 index8 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">unordered_map&lt;</code><code class="color1 bold">int</code><code class="plain">, </code><code class="color1 bold">int</code><code class="plain">&gt; hash; </code></div>
<div class="line number10 index9 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword bold">for</code> <code class="plain">(</code><code class="color1 bold">int</code> <code class="plain">i = 0; i &lt; n; i++) </code></div>
<div class="line number11 index10 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">hash[arr[i]]++; </code></div>
<div class="line number12 index11 alt1"><code class="undefined spaces">&nbsp;</code>&nbsp;</div>
<div class="line number13 index12 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// find the max frequency </code></div>
<div class="line number14 index13 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="color1 bold">int</code> <code class="plain">max_count = 0, res = -1; </code></div>
<div class="line number15 index14 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword bold">for</code> <code class="plain">(</code><code class="keyword bold">auto</code> <code class="plain">i : hash) { </code></div>
<div class="line number16 index15 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword bold">if</code> <code class="plain">(max_count &lt; i.second) { </code></div>
<div class="line number17 index16 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">res = i.first; </code></div>
<div class="line number18 index17 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">max_count = i.second; </code></div>
<div class="line number19 index18 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number20 index19 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number21 index20 alt2"><code class="undefined spaces">&nbsp;</code>&nbsp;</div>
<div class="line number22 index21 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword bold">return</code> <code class="plain">res; </code></div>
<div class="line number23 index22 alt2"><code class="plain">} </code></div>
<div class="line number24 index23 alt1"><code class="undefined spaces">&nbsp;</code>&nbsp;</div>
<div class="line number25 index24 alt2"><code class="comments">// driver program </code></div>
<div class="line number26 index25 alt1"><code class="color1 bold">int</code> <code class="plain">main() </code></div>
<div class="line number27 index26 alt2"><code class="plain">{ </code></div>
<div class="line number28 index27 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="color1 bold">int</code> <code class="plain">arr[] = { 1, 5, 2, 1, 3, 2, 1 }; </code></div>
<div class="line number29 index28 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="color1 bold">int</code> <code class="plain">n = </code><code class="keyword bold">sizeof</code><code class="plain">(arr) / </code><code class="keyword bold">sizeof</code><code class="plain">(arr[0]); </code></div>
<div class="line number30 index29 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">cout &lt;&lt; mostFrequent(arr, n); </code></div>
<div class="line number31 index30 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword bold">return</code> <code class="plain">0; </code></div>
<div class="line number32 index31 alt1"><code class="plain">} </code></div>
</div>
</td>
</tr>
</tbody>
</table>
</div></div>
<div class="code-editor-container"></div>
<p></p></div>
<div class="code-output-container">
<div class="output-block">
                        <i id="output-icon" title="Output" class="material-icons code-sidebar-button output-icon" style="opacity: 1; width: auto;">chevron_right</i><p></p>
<pre class="output-pre"></pre>
<p></p></div>
<div class="ide-link-div">
                        <i id="copy-url-button" title="Copy Generated Ide URL" class="material-icons code-sidebar-button copy-url-button" style="opacity: 1; width: auto;">filter_none</i><p></p>
<pre id="ide-url"></pre>
<p></p></div>
<p></p></div>

</div><h2 class="tabtitle responsive-tabs__heading" tabindex="0">Java</h2>
<div class="tabcontent responsive-tabs__panel" aria-hidden="true" role="tabpanel" aria-labelledby="tablist2-tab2" id="tablist2-panel2" style="display: none;">

<div class="code-block">
<div class="code-gutter">
<div class="editor-buttons-container">
<div class="editor-buttons">
<div class="editor-buttons-div" title="Run and Edit">
                                    <i id="copy-code-button" title="Copy Code" class="material-icons code-sidebar-button copy-code-button" style="opacity: 1; width: auto;">filter_none</i><p></p>
<div id="run-and-edit-loader" class="ring-load"></div>
<p>                                    <i id="run-and-edit-button" title="Edit Code" lang="java" class="material-icons code-sidebar-button" style="opacity: 1; width: auto;">edit</i><br>
                                    <i id="close-code-editor-button" title="Close Editor" class="material-icons code-sidebar-button close-code-editor-button" style="opacity: 1; width: auto;">close</i></p>
<div id="run-code-loader" class="ring-load"></div>
<p>                                    <i id="run-code-button" lang="java" title="Run Code and See Output" class="material-icons code-sidebar-button" style="opacity: 1; width: auto;">play_arrow</i></p>
<div id="generate-url-loader" class="ring-load"></div>
<p>                                    <i id="generate-url-and-run-button" title="Run Code and Generate IDE URL" lang="java" class="material-icons code-sidebar-button generate-url-and-run-button" style="opacity: 1; width: auto;">link</i><br>
                                    <i title="Dark Mode" class="material-icons code-sidebar-button dark-editor-button" style="opacity: 1; width: auto;">brightness_4</i><br>
                                    <i id="edit-on-ide-button" title="Edit on IDE" lang="java" class="material-icons code-sidebar-button edit-on-ide-button" style="opacity: 1; width: auto;">code</i>
                                </p></div>
<p></p></div>
<p></p></div>
<p></p></div>
<div class="code-container">
<div id="highlighter_879242" class="syntaxhighlighter nogutter  ">
<table border="0" cellpadding="0" cellspacing="0">
<tbody>
<tr>
<td class="code">
<div class="container">
<div class="line number1 index0 alt2"><code class="comments">//Java program to find the most frequent element </code></div>
<div class="line number2 index1 alt1"><code class="comments">//in an array </code></div>
<div class="line number3 index2 alt2"><code class="keyword">import</code> <code class="plain">java.util.HashMap; </code></div>
<div class="line number4 index3 alt1"><code class="keyword">import</code> <code class="plain">java.util.Map; </code></div>
<div class="line number5 index4 alt2"><code class="keyword">import</code> <code class="plain">java.util.Map.Entry; </code></div>
<div class="line number6 index5 alt1"><code class="undefined spaces">&nbsp;</code>&nbsp;</div>
<div class="line number7 index6 alt2"><code class="keyword">class</code> <code class="plain">GFG { </code></div>
<div class="line number8 index7 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number9 index8 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">static</code> <code class="keyword">int</code> <code class="plain">mostFrequent(</code><code class="keyword">int</code> <code class="plain">arr[], </code><code class="keyword">int</code> <code class="plain">n) </code></div>
<div class="line number10 index9 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">{ </code></div>
<div class="line number11 index10 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number12 index11 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// Insert all elements in hash </code></div>
<div class="line number13 index12 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">Map&lt;Integer, Integer&gt; hp = </code></div>
<div class="line number14 index13 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">new</code> <code class="plain">HashMap&lt;Integer, Integer&gt;(); </code></div>
<div class="line number15 index14 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number16 index15 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">for</code><code class="plain">(</code><code class="keyword">int</code> <code class="plain">i = </code><code class="value">0</code><code class="plain">; i &lt; n; i++) </code></div>
<div class="line number17 index16 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">{ </code></div>
<div class="line number18 index17 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">int</code> <code class="plain">key = arr[i]; </code></div>
<div class="line number19 index18 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">if</code><code class="plain">(hp.containsKey(key)) </code></div>
<div class="line number20 index19 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">{ </code></div>
<div class="line number21 index20 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">int</code> <code class="plain">freq = hp.get(key); </code></div>
<div class="line number22 index21 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">freq++; </code></div>
<div class="line number23 index22 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">hp.put(key, freq); </code></div>
<div class="line number24 index23 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number25 index24 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">else</code></div>
<div class="line number26 index25 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">{ </code></div>
<div class="line number27 index26 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">hp.put(key, </code><code class="value">1</code><code class="plain">); </code></div>
<div class="line number28 index27 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number29 index28 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number30 index29 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number31 index30 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// find max frequency. </code></div>
<div class="line number32 index31 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">int</code> <code class="plain">max_count = </code><code class="value">0</code><code class="plain">, res = -</code><code class="value">1</code><code class="plain">; </code></div>
<div class="line number33 index32 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number34 index33 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">for</code><code class="plain">(Entry&lt;Integer, Integer&gt; val : hp.entrySet()) </code></div>
<div class="line number35 index34 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">{ </code></div>
<div class="line number36 index35 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">if</code> <code class="plain">(max_count &lt; val.getValue()) </code></div>
<div class="line number37 index36 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">{ </code></div>
<div class="line number38 index37 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">res = val.getKey(); </code></div>
<div class="line number39 index38 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">max_count = val.getValue(); </code></div>
<div class="line number40 index39 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number41 index40 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number42 index41 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number43 index42 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">return</code> <code class="plain">res; </code></div>
<div class="line number44 index43 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number45 index44 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number46 index45 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// Driver code </code></div>
<div class="line number47 index46 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">public</code> <code class="keyword">static</code> <code class="keyword">void</code> <code class="plain">main (String[] args) { </code></div>
<div class="line number48 index47 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number49 index48 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">int</code> <code class="plain">arr[] = {</code><code class="value">1</code><code class="plain">, </code><code class="value">5</code><code class="plain">, </code><code class="value">2</code><code class="plain">, </code><code class="value">1</code><code class="plain">, </code><code class="value">3</code><code class="plain">, </code><code class="value">2</code><code class="plain">, </code><code class="value">1</code><code class="plain">}; </code></div>
<div class="line number50 index49 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">int</code> <code class="plain">n = arr.length; </code></div>
<div class="line number51 index50 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number52 index51 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">System.out.println(mostFrequent(arr, n)); </code></div>
<div class="line number53 index52 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number54 index53 alt1"><code class="plain">} </code></div>
<div class="line number55 index54 alt2"><code class="undefined spaces">&nbsp;</code>&nbsp;</div>
<div class="line number56 index55 alt1"><code class="comments">// This code is contributed by Akash Singh. </code></div>
</div>
</td>
</tr>
</tbody>
</table>
</div></div>
<div class="code-editor-container"></div>
<p></p></div>
<div class="code-output-container">
<div class="output-block">
                        <i id="output-icon" title="Output" class="material-icons code-sidebar-button output-icon" style="opacity: 1; width: auto;">chevron_right</i><p></p>
<pre class="output-pre"></pre>
<p></p></div>
<div class="ide-link-div">
                        <i id="copy-url-button" title="Copy Generated Ide URL" class="material-icons code-sidebar-button copy-url-button" style="opacity: 1; width: auto;">filter_none</i><p></p>
<pre id="ide-url"></pre>
<p></p></div>
<p></p></div>

</div><h2 class="tabtitle responsive-tabs__heading" tabindex="0">Python3</h2>
<div class="tabcontent responsive-tabs__panel" aria-hidden="true" role="tabpanel" aria-labelledby="tablist2-tab3" id="tablist2-panel3" style="display: none;">

<div class="code-block">
<div class="code-gutter">
<div class="editor-buttons-container">
<div class="editor-buttons">
<div class="editor-buttons-div" title="Run and Edit">
                                    <i id="copy-code-button" title="Copy Code" class="material-icons code-sidebar-button copy-code-button" style="opacity: 1; width: auto;">filter_none</i><p></p>
<div id="run-and-edit-loader" class="ring-load"></div>
<p>                                    <i id="run-and-edit-button" title="Edit Code" lang="python3" class="material-icons code-sidebar-button" style="opacity: 1; width: auto;">edit</i><br>
                                    <i id="close-code-editor-button" title="Close Editor" class="material-icons code-sidebar-button close-code-editor-button" style="opacity: 1; width: auto;">close</i></p>
<div id="run-code-loader" class="ring-load"></div>
<p>                                    <i id="run-code-button" lang="python3" title="Run Code and See Output" class="material-icons code-sidebar-button" style="opacity: 1; width: auto;">play_arrow</i></p>
<div id="generate-url-loader" class="ring-load"></div>
<p>                                    <i id="generate-url-and-run-button" title="Run Code and Generate IDE URL" lang="python3" class="material-icons code-sidebar-button generate-url-and-run-button" style="opacity: 1; width: auto;">link</i><br>
                                    <i title="Dark Mode" class="material-icons code-sidebar-button dark-editor-button" style="opacity: 1; width: auto;">brightness_4</i><br>
                                    <i id="edit-on-ide-button" title="Edit on IDE" lang="python3" class="material-icons code-sidebar-button edit-on-ide-button" style="opacity: 1; width: auto;">code</i>
                                </p></div>
<p></p></div>
<p></p></div>
<p></p></div>
<div class="code-container">
<div id="highlighter_626541" class="syntaxhighlighter nogutter  ">
<table border="0" cellpadding="0" cellspacing="0">
<tbody>
<tr>
<td class="code">
<div class="container">
<div class="line number1 index0 alt2"><code class="comments"># Python3 program to find the most&nbsp; </code></div>
<div class="line number2 index1 alt1"><code class="comments"># frequent element in an array. </code></div>
<div class="line number3 index2 alt2"><code class="keyword">import</code> <code class="plain">math as mt </code></div>
<div class="line number4 index3 alt1"><code class="undefined spaces">&nbsp;</code>&nbsp;</div>
<div class="line number5 index4 alt2"><code class="keyword">def</code> <code class="plain">mostFrequent(arr, n): </code></div>
<div class="line number6 index5 alt1"><code class="undefined spaces">&nbsp;</code>&nbsp;</div>
<div class="line number7 index6 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments"># Insert all elements in Hash. </code></div>
<div class="line number8 index7 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="functions">Hash</code> <code class="keyword">=</code> <code class="functions">dict</code><code class="plain">() </code></div>
<div class="line number9 index8 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">for</code> <code class="plain">i </code><code class="keyword">in</code> <code class="functions">range</code><code class="plain">(n): </code></div>
<div class="line number10 index9 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">if</code> <code class="plain">arr[i] </code><code class="keyword">in</code> <code class="functions">Hash</code><code class="plain">.keys(): </code></div>
<div class="line number11 index10 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="functions">Hash</code><code class="plain">[arr[i]] </code><code class="keyword">+</code><code class="keyword">=</code> <code class="value">1</code></div>
<div class="line number12 index11 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">else</code><code class="plain">: </code></div>
<div class="line number13 index12 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="functions">Hash</code><code class="plain">[arr[i]] </code><code class="keyword">=</code> <code class="value">1</code></div>
<div class="line number14 index13 alt1"><code class="undefined spaces">&nbsp;</code>&nbsp;</div>
<div class="line number15 index14 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments"># find the max frequency </code></div>
<div class="line number16 index15 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">max_count </code><code class="keyword">=</code> <code class="value">0</code></div>
<div class="line number17 index16 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">res </code><code class="keyword">=</code> <code class="keyword">-</code><code class="value">1</code></div>
<div class="line number18 index17 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">for</code> <code class="plain">i </code><code class="keyword">in</code> <code class="functions">Hash</code><code class="plain">:&nbsp; </code></div>
<div class="line number19 index18 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">if</code> <code class="plain">(max_count &lt; </code><code class="functions">Hash</code><code class="plain">[i]):&nbsp; </code></div>
<div class="line number20 index19 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">res </code><code class="keyword">=</code> <code class="plain">i </code></div>
<div class="line number21 index20 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">max_count </code><code class="keyword">=</code> <code class="functions">Hash</code><code class="plain">[i] </code></div>
<div class="line number22 index21 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number23 index22 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">return</code> <code class="plain">res </code></div>
<div class="line number24 index23 alt1"><code class="undefined spaces">&nbsp;</code>&nbsp;</div>
<div class="line number25 index24 alt2"><code class="comments"># Driver Code </code></div>
<div class="line number26 index25 alt1"><code class="plain">arr </code><code class="keyword">=</code> <code class="plain">[ </code><code class="value">1</code><code class="plain">, </code><code class="value">5</code><code class="plain">, </code><code class="value">2</code><code class="plain">, </code><code class="value">1</code><code class="plain">, </code><code class="value">3</code><code class="plain">, </code><code class="value">2</code><code class="plain">, </code><code class="value">1</code><code class="plain">]&nbsp; </code></div>
<div class="line number27 index26 alt2"><code class="plain">n </code><code class="keyword">=</code> <code class="functions">len</code><code class="plain">(arr) </code></div>
<div class="line number28 index27 alt1"><code class="keyword">print</code><code class="plain">(mostFrequent(arr, n)) </code></div>
<div class="line number29 index28 alt2"><code class="undefined spaces">&nbsp;</code>&nbsp;</div>
<div class="line number30 index29 alt1"><code class="comments"># This code is contributed&nbsp; </code></div>
<div class="line number31 index30 alt2"><code class="comments"># by Mohit kumar 29 </code></div>
</div>
</td>
</tr>
</tbody>
</table>
</div></div>
<div class="code-editor-container"></div>
<p></p></div>
<div class="code-output-container">
<div class="output-block">
                        <i id="output-icon" title="Output" class="material-icons code-sidebar-button output-icon" style="opacity: 1; width: auto;">chevron_right</i><p></p>
<pre class="output-pre"></pre>
<p></p></div>
<div class="ide-link-div">
                        <i id="copy-url-button" title="Copy Generated Ide URL" class="material-icons code-sidebar-button copy-url-button" style="opacity: 1; width: auto;">filter_none</i><p></p>
<pre id="ide-url"></pre>
<p></p></div>
<p></p></div>

</div><h2 class="tabtitle responsive-tabs__heading" tabindex="0">C#</h2>
<div class="tabcontent responsive-tabs__panel" aria-hidden="true" role="tabpanel" aria-labelledby="tablist2-tab4" id="tablist2-panel4" style="display: none;">

<div class="code-block">
<div class="code-gutter">
<div class="editor-buttons-container">
<div class="editor-buttons">
<div class="editor-buttons-div" title="Run and Edit">
                                    <i id="copy-code-button" title="Copy Code" class="material-icons code-sidebar-button copy-code-button" style="opacity: 1; width: auto;">filter_none</i><p></p>
<div id="run-and-edit-loader" class="ring-load"></div>
<p>                                    <i id="run-and-edit-button" title="Edit Code" lang="csharp" class="material-icons code-sidebar-button" style="opacity: 1; width: auto;">edit</i><br>
                                    <i id="close-code-editor-button" title="Close Editor" class="material-icons code-sidebar-button close-code-editor-button" style="opacity: 1; width: auto;">close</i></p>
<div id="run-code-loader" class="ring-load"></div>
<p>                                    <i id="run-code-button" lang="csharp" title="Run Code and See Output" class="material-icons code-sidebar-button" style="opacity: 1; width: auto;">play_arrow</i></p>
<div id="generate-url-loader" class="ring-load"></div>
<p>                                    <i id="generate-url-and-run-button" title="Run Code and Generate IDE URL" lang="csharp" class="material-icons code-sidebar-button generate-url-and-run-button" style="opacity: 1; width: auto;">link</i><br>
                                    <i title="Dark Mode" class="material-icons code-sidebar-button dark-editor-button" style="opacity: 1; width: auto;">brightness_4</i><br>
                                    <i id="edit-on-ide-button" title="Edit on IDE" lang="csharp" class="material-icons code-sidebar-button edit-on-ide-button" style="opacity: 1; width: auto;">code</i>
                                </p></div>
<p></p></div>
<p></p></div>
<p></p></div>
<div class="code-container">
<div id="highlighter_360695" class="syntaxhighlighter nogutter  ">
<table border="0" cellpadding="0" cellspacing="0">
<tbody>
<tr>
<td class="code">
<div class="container">
<div class="line number1 index0 alt2"><code class="comments">// C# program to find the most&nbsp; </code></div>
<div class="line number2 index1 alt1"><code class="comments">// frequent element in an array </code></div>
<div class="line number3 index2 alt2"><code class="keyword">using</code> <code class="plain">System; </code></div>
<div class="line number4 index3 alt1"><code class="keyword">using</code> <code class="plain">System.Collections.Generic; </code></div>
<div class="line number5 index4 alt2"><code class="undefined spaces">&nbsp;</code>&nbsp;</div>
<div class="line number6 index5 alt1"><code class="keyword">class</code> <code class="plain">GFG </code></div>
<div class="line number7 index6 alt2"><code class="plain">{ </code></div>
<div class="line number8 index7 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">static</code> <code class="keyword">int</code> <code class="plain">mostFrequent(</code><code class="keyword">int</code> <code class="plain">[]arr,&nbsp; </code></div>
<div class="line number9 index8 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">int</code> <code class="plain">n) </code></div>
<div class="line number10 index9 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">{ </code></div>
<div class="line number11 index10 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// Insert all elements in hash </code></div>
<div class="line number12 index11 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">Dictionary&lt;</code><code class="keyword">int</code><code class="plain">, </code><code class="keyword">int</code><code class="plain">&gt; hp =&nbsp; </code></div>
<div class="line number13 index12 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">new</code> <code class="plain">Dictionary&lt;</code><code class="keyword">int</code><code class="plain">, </code><code class="keyword">int</code><code class="plain">&gt;(); </code></div>
<div class="line number14 index13 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number15 index14 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">for</code> <code class="plain">(</code><code class="keyword">int</code> <code class="plain">i = 0; i &lt; n; i++) </code></div>
<div class="line number16 index15 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">{ </code></div>
<div class="line number17 index16 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">int</code> <code class="plain">key = arr[i]; </code></div>
<div class="line number18 index17 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">if</code><code class="plain">(hp.ContainsKey(key)) </code></div>
<div class="line number19 index18 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">{ </code></div>
<div class="line number20 index19 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">int</code> <code class="plain">freq = hp[key]; </code></div>
<div class="line number21 index20 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">freq++; </code></div>
<div class="line number22 index21 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">hp[key] = freq; </code></div>
<div class="line number23 index22 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number24 index23 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">else</code></div>
<div class="line number25 index24 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">hp.Add(key, 1); </code></div>
<div class="line number26 index25 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number27 index26 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number28 index27 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// find max frequency. </code></div>
<div class="line number29 index28 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">int</code> <code class="plain">min_count = 0, res = -1; </code></div>
<div class="line number30 index29 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number31 index30 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">foreach</code> <code class="plain">(KeyValuePair&lt;</code><code class="keyword">int</code><code class="plain">,&nbsp; </code></div>
<div class="line number32 index31 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">int</code><code class="plain">&gt; pair </code><code class="keyword">in</code> <code class="plain">hp) </code></div>
<div class="line number33 index32 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">{ </code></div>
<div class="line number34 index33 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">if</code> <code class="plain">(min_count &lt; pair.Value) </code></div>
<div class="line number35 index34 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">{ </code></div>
<div class="line number36 index35 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">res = pair.Key; </code></div>
<div class="line number37 index36 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">min_count = pair.Value; </code></div>
<div class="line number38 index37 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number39 index38 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">}&nbsp; </code></div>
<div class="line number40 index39 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">return</code> <code class="plain">res; </code></div>
<div class="line number41 index40 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number42 index41 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number43 index42 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="comments">// Driver code </code></div>
<div class="line number44 index43 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">static</code> <code class="keyword">void</code> <code class="plain">Main () </code></div>
<div class="line number45 index44 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">{ </code></div>
<div class="line number46 index45 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">int</code> <code class="plain">[]arr = </code><code class="keyword">new</code> <code class="keyword">int</code><code class="plain">[]{1, 5, 2,&nbsp; </code></div>
<div class="line number47 index46 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">1, 3, 2, 1}; </code></div>
<div class="line number48 index47 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="keyword">int</code> <code class="plain">n = arr.Length; </code></div>
<div class="line number49 index48 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code>&nbsp;</div>
<div class="line number50 index49 alt1"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">Console.Write(mostFrequent(arr, n)); </code></div>
<div class="line number51 index50 alt2"><code class="undefined spaces">&nbsp;&nbsp;&nbsp;&nbsp;</code><code class="plain">} </code></div>
<div class="line number52 index51 alt1"><code class="plain">} </code></div>
<div class="line number53 index52 alt2"><code class="undefined spaces">&nbsp;</code>&nbsp;</div>
<div class="line number54 index53 alt1"><code class="comments">// This code is contributed by </code></div>
<div class="line number55 index54 alt2"><code class="comments">// Manish Shaw(manishshaw1) </code></div>
</div>
</td>
</tr>
</tbody>
</table>
</div></div>
<div class="code-editor-container"></div>
<p></p></div>
<div class="code-output-container">
<div class="output-block">
                        <i id="output-icon" title="Output" class="material-icons code-sidebar-button output-icon" style="opacity: 1; width: auto;">chevron_right</i><p></p>
<pre class="output-pre"></pre>
<p></p></div>
<div class="ide-link-div">
                        <i id="copy-url-button" title="Copy Generated Ide URL" class="material-icons code-sidebar-button copy-url-button" style="opacity: 1; width: auto;">filter_none</i><p></p>
<pre id="ide-url"></pre>
<p></p></div>
<p></p></div>
</div></div></div>
<div class="outputDiv">
<b>Output:</b><p></p>
<pre>1
</pre>
</div>
<p><strong>Time Complexity :</strong> O(n)<br>
<strong>Auxiliary Space :</strong> O(n)</p>
<p>Attention reader! Don’t stop learning now. Get hold of all the important DSA concepts with the <a href="https://practice.geeksforgeeks.org/courses/dsa-self-paced?utm_source=geeksforgeeks&amp;utm_medium=article&amp;utm_campaign=gfg_article_dsa_content_bottom" target="_blank"><strong>DSA Self Paced Course</strong></a> at a student-friendly price and become industry ready.</p>
<br><br><div id="AP_G4GR_6" style="min-height:280px"><div id="76621e0b-1fac-4840-ba08-8ec48d007bc6" data-section="76621e0b-1fac-4840-ba08-8ec48d007bc6" class="_ap_apex_ad" data-xpath="#AP_G4GR_6:eq(0)" data-section-id="" data-render-time="1610172800939" data-ap-network="adpTags" style="display: block; clear: both; text-align: center; margin: 10px auto;"><div id="ADP_40792_728X280_76621e0b-1fac-4840-ba08-8ec48d007bc6" style="text-align: center; margin: 0 auto;" data-google-query-id="CL6156iaju4CFcJQcgodTsEAnQ">

<div id="google_ads_iframe_/103512698/21930050695_0__container__" style="border: 0pt none;"><iframe id="google_ads_iframe_/103512698/21930050695_0" title="3rd party ad content" name="google_ads_iframe_/103512698/21930050695_0" width="751" height="194" scrolling="no" marginwidth="0" marginheight="0" frameborder="0" sandbox="allow-forms allow-popups allow-popups-to-escape-sandbox allow-same-origin allow-scripts allow-top-navigation-by-user-activation" style="border: 0px; vertical-align: bottom;" data-google-container-id="5" data-load-complete="true" src="./Most frequent element in an array - GeeksforGeeks_files/saved_resource(2).html"></iframe></div></div></div></div><br><div id="personalNoteDiv" class="clear hideIt">
    <div class="personalNoteHeader clear">
        <span class="noteHeaderText">My Personal Notes</span>
        <span class="hideNotesDivIcon"><i class="material-icons personalNotesIcon" style="opacity: 1; width: auto;">arrow_drop_up</i></span>
    </div>
    <div class="collapsableDivPersonalNotes">
        <textarea maxlength="5000" id="enteredPersonalNote" class="personalNoteStyle" placeholder="Add your personal notes here! (max 5000 chars)"></textarea>
        <div class="saveNoteDiv">
            <span class="processSaveNote"></span>
            <button class="savePersonalNoteButton" onclick="saveUserPersonalNote()">Save</button>
        </div>
    </div>
</div>                        </div>
                      </article>
                      
                                                    <div class="article--recommended">
                                <div class="article--recommended_wrapper">
                                    <div class="top-bar">
                                        <div class="def-title_wrap pl-0">
                                            <div class="title large">Recommended Articles</div>
                                        </div>
                                        <div class="page-list">
                                            <div class="page-h">Page : </div>
                                            <div class="pages"><div class="page p active" data-page="1">1</div><div class="page p " data-page="2">2</div><div class="page p " data-page="3">3</div></div>
                                        </div>
                                    </div>
                                    <div class="gfg--carousel">
                                        <div class="gfg--carousel_wrap" data-flex="2">
                                            <div class="gfg--carousel_wrap-slide initial" style="flex-basis: 50%;">
                <div class="slide-item_list">
                    <div class="slide-item">
            <div class="sno"></div>
            <a href="https://www.geeksforgeeks.org/minimum-distance-between-any-most-frequent-and-least-frequent-element-of-an-array/?ref=rp" title="Permalink to Minimum distance between any most frequent and least frequent element of an array" rel="bookmark" class="c-wrap">
                <div class="head">Minimum distance between any most frequent and least frequent element of an array</div>
                <div class="meta">13, Jul 20</div>
            </a>
        </div><div class="slide-item">
            <div class="sno"></div>
            <a href="https://www.geeksforgeeks.org/most-frequent-element-in-array-after-replacing-given-index-by-k-for-q-queries/?ref=rp" title="Permalink to Most frequent element in Array after replacing given index by K for Q queries" rel="bookmark" class="c-wrap">
                <div class="head">Most frequent element in Array after replacing given index by K for Q queries</div>
                <div class="meta">02, Jul 20</div>
            </a>
        </div><div class="slide-item">
            <div class="sno"></div>
            <a href="https://www.geeksforgeeks.org/remove-an-occurrence-of-most-frequent-array-element-exactly-k-times/?ref=rp" title="Permalink to Remove an occurrence of most frequent array element exactly K times" rel="bookmark" class="c-wrap">
                <div class="head">Remove an occurrence of most frequent array element exactly K times</div>
                <div class="meta">23, Dec 20</div>
            </a>
        </div><div class="slide-item">
            <div class="sno"></div>
            <a href="https://www.geeksforgeeks.org/smallest-subarray-with-all-occurrences-of-a-most-frequent-element/?ref=rp" title="Permalink to Smallest subarray with all occurrences of a most frequent element" rel="bookmark" class="c-wrap">
                <div class="head">Smallest subarray with all occurrences of a most frequent element</div>
                <div class="meta">17, Dec 17</div>
            </a>
        </div>
                </div>
            </div><div class="gfg--carousel_wrap-slide initial" style="flex-basis: 50%;">
                <div class="slide-item_list">
                    <div class="slide-item">
            <div class="sno"></div>
            <a href="https://www.geeksforgeeks.org/queries-to-insert-delete-one-occurrence-of-a-number-and-print-the-least-and-most-frequent-element/?ref=rp" title="Permalink to Queries to insert, delete one occurrence of a number and print the least and most frequent element" rel="bookmark" class="c-wrap">
                <div class="head">Queries to insert, delete one occurrence of a number and print the least and most frequent element</div>
                <div class="meta">30, Jul 18</div>
            </a>
        </div><div class="slide-item">
            <div class="sno"></div>
            <a href="https://www.geeksforgeeks.org/find-the-most-frequent-digit-without-using-arraystring/?ref=rp" title="Permalink to Find the most frequent digit without using array/string" rel="bookmark" class="c-wrap">
                <div class="head">Find the most frequent digit without using array/string</div>
                <div class="meta">05, Nov 15</div>
            </a>
        </div><div class="slide-item">
            <div class="sno"></div>
            <a href="https://www.geeksforgeeks.org/frequent-word-array-strings/?ref=rp" title="Permalink to Most frequent word in an array of strings" rel="bookmark" class="c-wrap">
                <div class="head">Most frequent word in an array of strings</div>
                <div class="meta">01, Oct 17</div>
            </a>
        </div><div class="slide-item">
            <div class="sno"></div>
            <a href="https://www.geeksforgeeks.org/find-the-k-most-frequent-words-from-a-file/?ref=rp" title="Permalink to Find the k most frequent words from a file" rel="bookmark" class="c-wrap">
                <div class="head">Find the k most frequent words from a file</div>
                <div class="meta">26, Sep 12</div>
            </a>
        </div>
                </div>
            </div><div class="gfg--carousel_wrap-slide next" style="flex-basis: 50%;">
                <div class="slide-item_list">
                    <div class="slide-item">
            <div class="sno"></div>
            <a href="https://www.geeksforgeeks.org/find-top-k-or-most-frequent-numbers-in-a-stream/?ref=rp" title="Permalink to Find top k (or most frequent) numbers in a stream" rel="bookmark" class="c-wrap">
                <div class="head">Find top k (or most frequent) numbers in a stream</div>
                <div class="meta">29, Jul 17</div>
            </a>
        </div><div class="slide-item">
            <div class="sno"></div>
            <a href="https://www.geeksforgeeks.org/kth-most-frequent-character-in-a-given-string/?ref=rp" title="Permalink to Kth most frequent Character in a given String" rel="bookmark" class="c-wrap">
                <div class="head">Kth most frequent Character in a given String</div>
                <div class="meta">31, May 20</div>
            </a>
        </div><div class="slide-item">
            <div class="sno"></div>
            <a href="https://www.geeksforgeeks.org/find-k-most-frequent-in-linear-time/?ref=rp" title="Permalink to Find k most frequent in linear time" rel="bookmark" class="c-wrap">
                <div class="head">Find k most frequent in linear time</div>
                <div class="meta">24, Jun 20</div>
            </a>
        </div><div class="slide-item">
            <div class="sno"></div>
            <a href="https://www.geeksforgeeks.org/count-of-substrings-having-the-most-frequent-character-in-the-string-as-first-character/?ref=rp" title="Permalink to Count of substrings having the most frequent character in the string as first character" rel="bookmark" class="c-wrap">
                <div class="head">Count of substrings having the most frequent character in the string as first character</div>
                <div class="meta">05, Nov 20</div>
            </a>
        </div>
                </div>
            </div><div class="gfg--carousel_wrap-slide next" style="flex-basis: 50%;">
                <div class="slide-item_list">
                    <div class="slide-item">
            <div class="sno"></div>
            <a href="https://www.geeksforgeeks.org/most-frequent-subtree-sum-from-a-given-binary-tree/?ref=rp" title="Permalink to Most Frequent Subtree Sum from a given Binary Tree" rel="bookmark" class="c-wrap">
                <div class="head">Most Frequent Subtree Sum from a given Binary Tree</div>
                <div class="meta">07, Jan 21</div>
            </a>
        </div><div class="slide-item">
            <div class="sno"></div>
            <a href="https://www.geeksforgeeks.org/least-frequent-element-array/?ref=rp" title="Permalink to Least frequent element in an array" rel="bookmark" class="c-wrap">
                <div class="head">Least frequent element in an array</div>
                <div class="meta">02, Mar 18</div>
            </a>
        </div><div class="slide-item">
            <div class="sno"></div>
            <a href="https://www.geeksforgeeks.org/minimum-possible-value-t-such-that-at-most-d-partitions-of-the-array-having-at-most-sum-t-is-possible/?ref=rp" title="Permalink to Minimum possible value T such that at most D Partitions of the Array having at most sum T is possible" rel="bookmark" class="c-wrap">
                <div class="head">Minimum possible value T such that at most D Partitions of the Array having at most sum T is possible</div>
                <div class="meta">21, Aug 20</div>
            </a>
        </div><div class="slide-item">
            <div class="sno"></div>
            <a href="https://www.geeksforgeeks.org/difference-between-sum-of-odd-and-even-frequent-elements-in-an-array/?ref=rp" title="Permalink to Difference between sum of odd and even frequent elements in an Array" rel="bookmark" class="c-wrap">
                <div class="head">Difference between sum of odd and even frequent elements in an Array</div>
                <div class="meta">17, Dec 20</div>
            </a>
        </div>
                </div>
            </div><div class="gfg--carousel_wrap-slide next" style="flex-basis: 50%;">
                <div class="slide-item_list">
                    <div class="slide-item">
            <div class="sno"></div>
            <a href="https://www.geeksforgeeks.org/check-if-a-string-can-be-split-into-two-strings-with-same-number-of-k-frequent-characters/?ref=rp" title="Permalink to Check if a string can be split into two strings with same number of K-frequent characters" rel="bookmark" class="c-wrap">
                <div class="head">Check if a string can be split into two strings with same number of K-frequent characters</div>
                <div class="meta">08, Jul 20</div>
            </a>
        </div><div class="slide-item">
            <div class="sno"></div>
            <a href="https://www.geeksforgeeks.org/sum-of-maximum-of-all-subarrays-by-adding-even-frequent-maximum-twice/?ref=rp" title="Permalink to Sum of maximum of all subarrays by adding even frequent maximum twice" rel="bookmark" class="c-wrap">
                <div class="head">Sum of maximum of all subarrays by adding even frequent maximum twice</div>
                <div class="meta">20, Dec 20</div>
            </a>
        </div><div class="slide-item">
            <div class="sno"></div>
            <a href="https://www.geeksforgeeks.org/check-whether-an-array-can-be-made-strictly-decreasing-by-modifying-at-most-one-element/?ref=rp" title="Permalink to Check whether an array can be made strictly decreasing by modifying at most one element" rel="bookmark" class="c-wrap">
                <div class="head">Check whether an array can be made strictly decreasing by modifying at most one element</div>
                <div class="meta">14, Jun 19</div>
            </a>
        </div><div class="slide-item">
            <div class="sno"></div>
            <a href="https://www.geeksforgeeks.org/reduce-the-array-such-that-each-element-appears-at-most-2-times/?ref=rp" title="Permalink to Reduce the array such that each element appears at most 2 times" rel="bookmark" class="c-wrap">
                <div class="head">Reduce the array such that each element appears at most 2 times</div>
                <div class="meta">05, Apr 20</div>
            </a>
        </div>
                </div>
            </div><div class="gfg--carousel_wrap-slide next" style="flex-basis: 50%;">
                <div class="slide-item_list">
                    <div class="slide-item">
            <div class="sno"></div>
            <a href="https://www.geeksforgeeks.org/find-kth-most-occurring-element-in-an-array/?ref=rp" title="Permalink to Find Kth most occurring element in an Array" rel="bookmark" class="c-wrap">
                <div class="head">Find Kth most occurring element in an Array</div>
                <div class="meta">15, Apr 20</div>
            </a>
        </div><div class="slide-item">
            <div class="sno"></div>
            <a href="https://www.geeksforgeeks.org/maximize-frequency-of-an-element-by-at-most-one-increment-or-decrement-of-all-array-elements/?ref=rp" title="Permalink to Maximize frequency of an element by at most one increment or decrement of all array elements" rel="bookmark" class="c-wrap">
                <div class="head">Maximize frequency of an element by at most one increment or decrement of all array elements</div>
                <div class="meta">08, Dec 20</div>
            </a>
        </div><div class="slide-item">
            <div class="sno"></div>
            <a href="https://www.geeksforgeeks.org/maximize-array-sum-by-swapping-at-most-k-elements-with-another-array/?ref=rp" title="Permalink to Maximize Array sum by swapping at most K elements with another array" rel="bookmark" class="c-wrap">
                <div class="head">Maximize Array sum by swapping at most K elements with another array</div>
                <div class="meta">18, May 20</div>
            </a>
        </div><div class="slide-item">
            <div class="sno"></div>
            <a href="https://www.geeksforgeeks.org/closest-greater-element-every-array-element-another-array/?ref=rp" title="Permalink to Closest greater element for every array element from another array" rel="bookmark" class="c-wrap">
                <div class="head">Closest greater element for every array element from another array</div>
                <div class="meta">22, Nov 17</div>
            </a>
        </div>
                </div>
            </div>                                        </div>
                                    </div>
                                    <div class="gfg--carousel_dots">
                                        <div class="carousel--dots"><div class="page p dots active" data-page="1"></div><div class="page p dots " data-page="2"></div><div class="page p dots " data-page="3"></div></div>
                                    </div>
                                </div>
                            </div>
                        
                      <div class="article-meta">
                          <div class="vote-wrap">
                              <button class="vote-this">
                                  <i class="material-icons favoriteIcon" style="opacity: 1; width: auto;">favorite_border</i>
                                  <span class="favoriteLike">Like</span>
                                  <figure class="favoriteText">14</figure>
                              </button>
                          </div>
                          <div class="d-row content-bw article-pgnavi v-divider-gfg">
                                                                <div class="article-pgnavi_prev">
                                      <a href="https://www.geeksforgeeks.org/program-print-happy-holi/" class="pg-head">
                                          <span class="material-icons">first_page</span>
                                          <span style="margin-left: 5px;">Previous</span>
                                      </a>
                                      <!-- <div class="pg-meta">8 Min Read&ensp;|&ensp;<a href="#">Java</a></div> -->
                                      <div class="pg-main">
                                          <a href="https://www.geeksforgeeks.org/program-print-happy-holi/">Program to print Happy Holi</a>
                                      </div>
                                  </div>
                                                                <div class="article-pgnavi_next">
                                      <a href="https://www.geeksforgeeks.org/count-n-digit-numbers-divisible-by-given-number/" class="pg-head">
                                          <span style="margin-right: 5px; margin-left: auto;">Next</span>
                                          <span class="material-icons">last_page</span>
                                      </a>
                                      <!-- <div class="pg-meta">8 Min Read&ensp;|&ensp;<a href="#">Java</a></div> -->
                                      <div class="pg-main">
                                          <a href="https://www.geeksforgeeks.org/count-n-digit-numbers-divisible-by-given-number/">Count n digit numbers divisible by given number</a>
                                      </div>
                                  </div>
                                                        </div>
                      </div>
                    <div class="article-meta">
                          <!-- article end if to be moved again - divider class: divider-gfg -->
                        <div class="bottom-wrap d-row divider-gfg" style="margin-top:0">
                            <div class="credits">
                                <div class="by">Article Contributed By :</div>
                                <div class="media">
                                    <div class="author">
                                        <div class="image-wrap">
        <img src="./Most frequent element in an array - GeeksforGeeks_files/rx58pta1hoijjjxu7p5f" class="img-fluid restrict-popup-gfg" alt="https://media.geeksforgeeks.org/auth/avatar.png">
    </div>
    <div class="info">
        <div class="name">
            <a href="https://auth.geeksforgeeks.org/user/kartik/articles">kartik</a>
        </div>
        <div class="handle">
            <a href="https://auth.geeksforgeeks.org/user/kartik">@kartik</a>
        </div>
    </div>                                    </div>
                                </div>
                            </div>
                            <div class="vote-block">
                                <div class="vote-d">Vote for difficulty</div>
                                                                            <div class="vote-s">
                                            Current difficulty : 
                                            <a href="https://www.geeksforgeeks.org/easy">Easy</a>
                                        </div>
                                                                        <div class="d-column" style="margin-top: 20px;">
                                        <div class="label-list without-bg">
                                            <button data-gfg-action="article-difficulty" data-rating="1" class="btn">Easy</button>
                                            <button data-gfg-action="article-difficulty" data-rating="2" class="btn">Normal</button>
                                            <button data-gfg-action="article-difficulty" data-rating="3" class="btn">Medium</button>
                                            <button data-gfg-action="article-difficulty" data-rating="4" class="btn">Hard</button>
                                            <button data-gfg-action="article-difficulty" data-rating="5" class="btn">Expert</button>
                                        </div>
                                        <div class="gfg-process" style="margin-top: 10px; font-size: 10pt; font-family: var(--font-din)"></div>
                                    </div>
                                </div>
                            </div>
                            <div class="bottom-wrap">
                                                                <div class="improved">
                                    <div class="t-head">Improved By : </div>
                                    <ul><li><a href="https://auth.geeksforgeeks.org/user/vt_m">vt_m</a></li><li><a href="https://auth.geeksforgeeks.org/user/nitin%20mittal">nitin mittal</a></li><li><a href="https://auth.geeksforgeeks.org/user/dipesh_jain">dipesh_jain</a></li><li><a href="https://auth.geeksforgeeks.org/user/manishshaw1">manishshaw1</a></li><li><a href="https://auth.geeksforgeeks.org/user/mohit%20kumar%2029">mohit kumar 29</a></li></ul>                                </div>
                                                                                                <div class="improved">
                                    <div class="t-head">Article Tags : </div>
                                    <ul>
                                        
            <li>
                <a href="https://www.geeksforgeeks.org/category/data-structures/hash/">Hash</a>
            </li>
            <li>
                <a href="https://www.geeksforgeeks.org/category/algorithm/searching/">Searching</a>
            </li>
            <li>
                <a href="https://www.geeksforgeeks.org/category/algorithm/sorting/">Sorting</a>
            </li>                                    </ul>
                                </div>
                                                                                                <div class="improved">
                                    <div class="t-head">Practice Tags : </div>
                                        <ul>
                                            <li><a href="https://practice.geeksforgeeks.org/topics/Searching">Searching</a></li><li><a href="https://practice.geeksforgeeks.org/topics/Hash">Hash</a></li><li><a href="https://practice.geeksforgeeks.org/topics/Sorting">Sorting</a></li>                                        </ul>
                                </div>
                                                            </div>
                            <div class="bottom-wrap">
                                <div class="improveArticleWrap">
                                    <div pid="183366" ptitle="Most frequent element in an array" id="improveArticleButtonDiv"><button class="improveArticleButton" onclick="improveArticleCall()">Improve Article</button></div>
                                    <a href="mailto:contribute@geeksforgeeks.org" class="reportButton">Report Issue</a>
                                </div>
                                <!-- <p>Please write us at <a href="mailto:contribute@geeksforgeeks.org">contribute@geeksforgeeks.org</a> to report any issue with the above content</p> -->
                            </div>
                          <!-- end -->
                        </div>

                    </div>
                </div>
            </div>
        </div>
        <div class="rightBar">
            <!-- Sidebar file comment -->
			<div id="secondary" class="widget-area" role="complementary">
			<aside id="text-15" class="widget widget_text">			<div class="textwidget"><div id="AP_G4GR_1" style="min-height:600px"><div id="0ac0c8eb-f7f8-40ed-bb33-33477b782356" data-section="0ac0c8eb-f7f8-40ed-bb33-33477b782356" class="_ap_apex_ad" data-xpath="#AP_G4GR_1" data-section-id="" data-render-time="1610172800927" data-ap-network="adpTags" data-refresh-time="1610172800928" data-timeout="40" style="display: block; clear: both; text-align: left; margin: 0px auto 0px 0px;"><div id="ADP_40792_300X600_0ac0c8eb-f7f8-40ed-bb33-33477b782356" style="text-align: left; margin: 0px auto;" data-google-query-id="CLq156iaju4CFcJQcgodTsEAnQ">

<div id="google_ads_iframe_/103512698/21924966462_0__container__" style="border: 0pt none;"><iframe id="google_ads_iframe_/103512698/21924966462_0" title="3rd party ad content" name="google_ads_iframe_/103512698/21924966462_0" width="300" height="600" scrolling="no" marginwidth="0" marginheight="0" frameborder="0" sandbox="allow-forms allow-popups allow-popups-to-escape-sandbox allow-same-origin allow-scripts allow-top-navigation-by-user-activation" style="border: 0px; vertical-align: bottom;" data-google-container-id="1" data-load-complete="true" src="./Most frequent element in an array - GeeksforGeeks_files/saved_resource(3).html"></iframe></div></div></div></div>
</div>
		</aside>
		<div class="side--container mb-30">
			<div class="card-layout">
				<div class="heading">
					<div class="def-title_wrap">
						<div class="title">Courses</div>
					</div>
				</div>
				<div class="content-wrapper">
<div class="side--container_wscard">
                            <a href="https://practice.geeksforgeeks.org/courses/dsa-self-paced?utm_source=geeksforgeeks&amp;utm_medium=article&amp;utm_campaign=gfg_article_dsa_content_bottom"><p></p>
<div class="card-content">
<div class="thumbnail"><img src="./Most frequent element in an array - GeeksforGeeks_files/dsa-self-paced-thumbnail.png" class="img-fluid" alt="Data structures and algorithms - self placed">
                                </div>
<div class="content">
<div class="head">Data Structures and Algorithms – Self Paced Course</div>
<div class="ref">View Details</div>
<p></p></div>
<p></p></div>
</a><p><a href="https://practice.geeksforgeeks.org/courses/dsa-self-paced?utm_source=geeksforgeeks&amp;utm_medium=article&amp;utm_campaign=gfg_article_dsa_content_bottom">                            </a><br>
                            <a href="https://practice.geeksforgeeks.org/courses/coding-round-contests?utm_source=geeksforgeeks&amp;utm_medium=banner&amp;utm_campaign=GFG_RT_CRC"></a></p><a href="https://practice.geeksforgeeks.org/courses/coding-round-contests?utm_source=geeksforgeeks&amp;utm_medium=banner&amp;utm_campaign=GFG_RT_CRC">
<div class="card-content">
<div class="thumbnail">
                                    <img src="./Most frequent element in an array - GeeksforGeeks_files/coding-round-contests-thumbnail.png" class="img-fluid" alt="Coding Round Contests - Test Series"></div>
<div class="content">
<div class="head">Free Coding Round Contests – Test Series </div>
<div class="ref">View Details</div>
<p></p></div>
<p></p></div>
</a><p><a href="https://practice.geeksforgeeks.org/courses/coding-round-contests?utm_source=geeksforgeeks&amp;utm_medium=banner&amp;utm_campaign=GFG_RT_CRC">                            </a>
                        </p></div>
<p></p></div>

			</div>
		</div><aside id="text-16" class="widget widget_text">			<div class="textwidget"><div id="AP_G4GR_2" style="min-height:600px"><div id="80e86804-a78d-4068-b49c-6826568e1822" data-section="80e86804-a78d-4068-b49c-6826568e1822" class="_ap_apex_ad" data-xpath="#AP_G4GR_2" data-section-id="" data-render-time="1610172800930" data-ap-network="adpTags" style="display: block; clear: both; text-align: left; margin: 0px auto 0px 0px;" data-refresh-time="1610172805414" data-timeout="209"><div id="ADP_40792_300X600_80e86804-a78d-4068-b49c-6826568e1822" style="text-align: left; margin: 0px auto;" data-google-query-id="COu95aiaju4CFcJQcgodTsEAnQ">

<div id="google_ads_iframe_/103512698/21929918118_0__container__" style="border: 0pt none;"><iframe id="google_ads_iframe_/103512698/21929918118_0" title="3rd party ad content" name="google_ads_iframe_/103512698/21929918118_0" width="300" height="250" scrolling="no" marginwidth="0" marginheight="0" frameborder="0" style="border: 0px; vertical-align: bottom;" data-google-container-id="2" data-load-complete="true" src="./Most frequent element in an array - GeeksforGeeks_files/saved_resource(4).html"></iframe></div></div></div></div>
</div>
		</aside>            <div class="side--container mb-20" style="margin-top: 40px">
        <div class="card-layout">
            <div class="heading">
                <div class="def-title_wrap">
                    <div class="title">Most popular in Hash</div>
                </div>
            </div>
            <div class="rightbar--articles_container fw-medium">
                <div class="content-wrapper">
                    <ul class="content-wrapper content-wrapper_links">
                        <li><a href="https://www.geeksforgeeks.org/sort-string-characters/?ref=leftbar-rightbar">Sort string of characters</a></li><li><a href="https://www.geeksforgeeks.org/longest-consecutive-subsequence/?ref=leftbar-rightbar">Longest Consecutive Subsequence</a></li><li><a href="https://www.geeksforgeeks.org/c-program-hashing-chaining/?ref=leftbar-rightbar">C++ program for hashing with chaining</a></li><li><a href="https://www.geeksforgeeks.org/return-maximum-occurring-character-in-the-input-string/?ref=leftbar-rightbar">Return maximum occurring character in an input string</a></li><li><a href="https://www.geeksforgeeks.org/overview-of-data-structures-set-2-binary-tree-bst-heap-and-hash/?ref=leftbar-rightbar">Overview of Data Structures | Set 2 (Binary Tree, BST, Heap and Hash)</a></li>
                    </ul>
                </div>
            </div>
        </div>
    </div><aside id="text-17" class="widget widget_text">			<div class="textwidget"><div id="AP_G4GR_3"><div id="5d3faa25-d3c7-447d-a1fc-0e8973459142" data-section="5d3faa25-d3c7-447d-a1fc-0e8973459142" class="_ap_apex_ad" data-xpath="#AP_G4GR_3" data-section-id="" data-render-time="1610172800932" data-ap-network="adpTags" style="display: block; clear: both; text-align: left; margin: 0px auto 0px 0px;" data-refresh-time="1610172806245" data-timeout="280"><div id="ADP_40792_300X600_5d3faa25-d3c7-447d-a1fc-0e8973459142" style="text-align: left; margin: 0px auto;" data-google-query-id="COy95aiaju4CFcJQcgodTsEAnQ">

<div id="google_ads_iframe_/103512698/21929918121_0__container__" style="border: 0pt none;"><iframe id="google_ads_iframe_/103512698/21929918121_0" title="3rd party ad content" name="google_ads_iframe_/103512698/21929918121_0" width="300" height="600" scrolling="no" marginwidth="0" marginheight="0" frameborder="0" data-google-container-id="3" style="border: 0px; vertical-align: bottom;" data-load-complete="true" src="./Most frequent element in an array - GeeksforGeeks_files/saved_resource(5).html"></iframe></div></div></div></div>
</div>
		</aside>                 <div class="side--container mb-20" style="margin-top: 40px">
        <div class="card-layout">
            <div class="heading">
                <div class="def-title_wrap">
                    <div class="title">Most visited in Searching</div>
                </div>
            </div>
            <div class="rightbar--articles_container fw-medium">
                <div class="content-wrapper">
                    <ul class="content-wrapper content-wrapper_links">
                        <li><a href="https://www.geeksforgeeks.org/binary-search/?ref=leftbar-rightbar">Binary Search</a></li><li><a href="https://www.geeksforgeeks.org/linear-search/?ref=leftbar-rightbar">Linear Search</a></li><li><a href="https://www.geeksforgeeks.org/kth-smallestlargest-element-unsorted-array/?ref=leftbar-rightbar">K'th Smallest/Largest Element in Unsorted Array | Set 1</a></li><li><a href="https://www.geeksforgeeks.org/c-program-find-largest-element-array/?ref=leftbar-rightbar">Program to find largest element in an array</a></li><li><a href="https://www.geeksforgeeks.org/find-the-missing-number/?ref=leftbar-rightbar">Find the Missing Number</a></li>
                    </ul>
                </div>
            </div>
        </div>
    </div><aside id="text-18" class="widget widget_text">			<div class="textwidget"><div id="AP_G4GR_4"><div class="adp_interactive_ad" style="width: 300px; height: 600px;"><div id="827e8d39-ece0-4e5d-9f98-c4a6cc5c769c" data-section="827e8d39-ece0-4e5d-9f98-c4a6cc5c769c" class="_ap_apex_ad" data-render-time="1610172800945" style="background: transparent; width: 300px; height: 600px; display: block; text-align: center; position: relative;" data-refresh-time="1610172810336" data-timeout="623"><div id="ADP_40792_300X600_827e8d39-ece0-4e5d-9f98-c4a6cc5c769c" style="text-align: center; margin: 0 auto;" data-google-query-id="CO-95aiaju4CFcJQcgodTsEAnQ">

<div id="google_ads_iframe_/103512698/21943534755_0__container__" style="border: 0pt none;"><iframe id="google_ads_iframe_/103512698/21943534755_0" title="3rd party ad content" name="google_ads_iframe_/103512698/21943534755_0" width="300" height="250" scrolling="no" marginwidth="0" marginheight="0" frameborder="0" style="border: 0px; vertical-align: bottom;" data-google-container-id="6" data-load-complete="true" src="./Most frequent element in an array - GeeksforGeeks_files/saved_resource(6).html"></iframe></div></div></div></div></div>
</div>
		</aside>		<!-- </div> -->
		</div>
		<!-- #secondary -->
	<!-- End Sidebar file comment -->        </div>
    </div>
    <section class="disqus-section">
        <div class="article-page_flex">
            <div class="leftBar">
                <div class="disqus--viewer">
                    <div id="ide_link" style="text-align:center; margin-top: 50px">
                        <p>Writing code in comment? 
                            Please use <a href="https://ide.geeksforgeeks.org/">ide.geeksforgeeks.org</a>, 
                            generate link and share the link here.
                        </p>
                    </div>
                    <br>
                    <div style="display:flex; align-items:center">
                        <button id="comment" class="action-button" style="width:45%;cursor: pointer;margin-right:10%;box-shadow: 0 2px 5px 0 rgba(0,0,0,0.4), 0 6px 20px 0 rgba(0,0,0,0);border-color: #4cb96b;border-radius: 4px;">
                            Load Comments
                        </button>
                    </div>
                    <div id="disqus_thread"></div>
                </div>
            </div>
        </div>
    </section>
</div>
  
	</div><!-- #main .wrapper -->

<!-- <div id="gfg-side-sticky-tab">
  <div class="gfg-textwidget">
    <div class="sticky-container">
      <div class="slideout">
        <div class="inner">
          <div class="inner-item" style="font-size: 20px; margin-top: 20%;"> <a href="https://auth.geeksforgeeks.org/testimonial/?ref=gfg"><span class="hand-write-icon">&#x270D;</span><br />Write a Testimonial</a></div>
        </div>
      </div>
      <div class="gfg-callout">
        <button class="slide-out-btn"><span>⇣</span></button>
      </div>
    </div>
  </div>
</div> -->
  <!-- Footer start -->
  <footer class="gfg-footer" id="gfg-footer">
      <div class="footer-wrapper">
          <div class="footer-wrapper_branding">
              <a class="footer-wrapper_branding-anchor" href="https://www.geeksforgeeks.org/">
                <img class="footer-wrapper_branding-nlogo" src="./Most frequent element in an array - GeeksforGeeks_files/logo-new-2.svg" alt="GeeksforGeeks">
              </a>
              <div class="footer-wrapper_branding-address">
                  <i class="gfg-icon gfg-icon_pin"></i>
                  <span>
                      5th Floor, A-118,<br>
                      Sector-136, Noida, Uttar Pradesh - 201305
                  </span>
              </div>
              <div class="footer-wrapper_branding-email">
                  <i class="gfg-icon gfg-icon_mail"></i>
                  <a href="mailto:feedback@geeksforgeeks.org">feedback@geeksforgeeks.org</a>
              </div>
              <div class="footer-wrapper_branding-social">
                  <a href="https://www.facebook.com/geeksforgeeks.org/" rel="noopener noreferrer" aria-label="GeeksforGeeks Facebook" target="_blank">
                      <div class="facebook"></div>
                  </a>
                  <a href="https://www.instagram.com/geeks_for_geeks/" rel="noopener noreferrer" aria-label="GeeksforGeeks Instagram" target="_blank">
                      <div class="instagram"></div>
                  </a>
                  <a href="https://in.linkedin.com/company/geeksforgeeks" rel="noopener noreferrer" aria-label="GeeksforGeeks LinkedIn" target="_blank">
                      <div class="linkedin"></div>
                  </a>
                  <a href="https://twitter.com/geeksforgeeks" rel="noopener noreferrer" aria-label="GeeksforGeeks Twitter" target="_blank">
                      <div class="twitter"></div>
                  </a>
                  <a href="https://www.youtube.com/geeksforgeeksvideos" rel="noopener noreferrer" aria-label="GeeksforGeeks YouTube" target="_blank">
                      <div class="youtube"></div>
                  </a>
              </div>
          </div>
          <div class="footer-wrapper_links">
              <ul class="footer-wrapper_links-list">
                  <li>Company</li>
                  <li><a href="https://www.geeksforgeeks.org/about/">About Us</a></li>
                  <li><a href="https://www.geeksforgeeks.org/careers/">Careers</a></li>
                  <li><a href="https://www.geeksforgeeks.org/privacy-policy/">Privacy Policy</a></li>
                  <li><a href="https://www.geeksforgeeks.org/about/contact-us/">Contact Us</a></li>
              </ul>
              <ul class="footer-wrapper_links-list">
                  <li>Learn</li>
                  <li><a href="https://www.geeksforgeeks.org/fundamentals-of-algorithms/">Algorithms</a></li>
                  <li><a href="https://www.geeksforgeeks.org/data-structures/">Data Structures</a></li>
                  <li><a href="https://www.geeksforgeeks.org/category/program-output/">Languages</a></li>
                  <li><a href="https://www.geeksforgeeks.org/articles-on-computer-science-subjects-gq/">CS
                          Subjects</a></li>
                  <li><a href="https://www.youtube.com/geeksforgeeksvideos/">Video Tutorials</a></li>
              </ul>
              <ul class="footer-wrapper_links-list">
                  <li>Practice</li>
                  <li><a href="https://practice.geeksforgeeks.org/courses/">Courses</a></li>
                  <li><a href="https://practice.geeksforgeeks.org/company-tags/">Company-wise</a></li>
                  <li><a href="https://practice.geeksforgeeks.org/topic-tags/">Topic-wise</a></li>
                  <li><a href="https://practice.geeksforgeeks.org/faq.php">How to begin?</a></li>
              </ul>
              <ul class="footer-wrapper_links-list">
                  <li>Contribute</li>
                  
                  <li><a href="https://www.geeksforgeeks.org/contribute/">Write an Article</a></li>
                  <li><a href="https://www.geeksforgeeks.org/write-interview-experience/">Write Interview
                          Experience</a></li>
                  <li><a href="https://www.geeksforgeeks.org/internship/">Internships</a></li>
                  <li><a href="https://www.geeksforgeeks.org/how-to-contribute-videos-to-geeksforgeeks/">Videos</a>
                  </li>
              </ul>
          </div>
      </div>
      <div class="footer-strip">
          <div class="copyright">
              <a href="https://in.linkedin.com/company/geeksforgeeks" rel="noopener noreferrer" target="_blank">@geeksforgeeks</a>
              <span>, <a href="https://www.geeksforgeeks.org//copyright-information/">Some rights reserved</a></span>
          </div>
          <div class="social-links">

          </div>
      </div>
  </footer>
  <!-- End of footer -->
<!-- #page -->
<script type="text/javascript" src="./Most frequent element in an array - GeeksforGeeks_files/wp-embed.min.js.download"></script>

<script>jQuery(document).ready(function($) { RESPONSIVEUI.responsiveTabs(); })</script>

<!-- Cookie Consent Div-->
<div class="cookie-consent hide-consent show-consent">
    <span class="cookie-text">
        We use cookies to ensure you have the best browsing experience on our website. By using our site, you
        acknowledge that you have read and understood our
        <a href="https://www.geeksforgeeks.org/cookie-policy/" target="_blank"><u>Cookie Policy</u></a> &amp;
        <a href="https://www.geeksforgeeks.org/privacy-policy/" target="_blank"><u>Privacy Policy</u></a>
    </span>
    <button class="consent-btn">
        Got It !
    </button>
</div>
<!-- Cookie Consent Div ends -->

<!--Light Box Div starts-->
<div class="lightbox-target">
   <img id="lightbox-image" src="https://www.geeksforgeeks.org/frequent-element-array/" alt="Lightbox">
   <span class="lightbox-close"></span>
</div>
<!--Light Box Div ends-->
<script type="text/javascript">
  var _gaq = _gaq || [];
  _gaq.push(['_setAccount', 'UA-12148232-1']);
  _gaq.push(['_trackPageview']);

  (function() {
    var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
    ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
  })();
</script>
<script type="text/javascript">
    try {
        var isAdblockEnabled = t =>
            fetch(
                new Request('https://pagead2.googlesyndication.com/pagead/js/adsbygoogle.js', {
                    method: 'HEAD',
                    mode: 'no-cors'
                })
            ).catch(t);
        isAdblockEnabled(() => {
            var scr = window.document.createElement('script'),
                siteId = 41782;
            scr.setAttribute('src', 'https://delivery.adrecover.com/'.concat(siteId, '/adRecover.js'));
            scr.setAttribute('type', 'text/javascript');
            scr.setAttribute('async', !0);
            window.document.head.append(scr);
        });
    } catch (err) {console.log(err);}
</script>

<script type="text/javascript" src="./Most frequent element in an array - GeeksforGeeks_files/monetization.js.download"></script>
<script>
(function(){
    if(typeof _bsa !== 'undefined' && _bsa) {
        _bsa.init('fancybar', 'C6ADVKE', 'placement:geeksforgeeks');
    }
})();
</script>


  
<!-- Dynamic page generated in 1.219 seconds. -->
<!-- Cached page generated by WP-Super-Cache on 2021-01-09 11:05:07 -->

<!-- Compression = gzip -->
<!-- super cache --><table cellspacing="0" cellpadding="0" class="gstl_50 gssb_c" style="width: 225px; display: none; top: 2482px; position: absolute; left: 1017px;"><tbody><tr><td class="gssb_f"></td><td class="gssb_e" style="width: 100%;"></td></tr></tbody></table><iframe id="google_osd_static_frame_5065074827165" name="google_osd_static_frame" style="display: none; width: 0px; height: 0px;" src="./Most frequent element in an array - GeeksforGeeks_files/saved_resource(7).html"></iframe></body><iframe sandbox="allow-scripts allow-same-origin" id="2142e9a702edd5a2" frameborder="0" allowtransparency="true" marginheight="0" marginwidth="0" width="0" hspace="0" vspace="0" height="0" style="height:0px;width:0px;display:none;" scrolling="no" src="./Most frequent element in an array - GeeksforGeeks_files/showad(1).html">
    </iframe><iframe sandbox="allow-scripts allow-same-origin" id="215adcef4e0a7f93" frameborder="0" allowtransparency="true" marginheight="0" marginwidth="0" width="0" hspace="0" vspace="0" height="0" style="height:0px;width:0px;display:none;" scrolling="no" src="./Most frequent element in an array - GeeksforGeeks_files/sync.html">
    </iframe><iframe sandbox="allow-scripts allow-same-origin" id="21640bf9987d6b99" frameborder="0" allowtransparency="true" marginheight="0" marginwidth="0" width="0" hspace="0" vspace="0" height="0" style="height:0px;width:0px;display:none;" scrolling="no" src="./Most frequent element in an array - GeeksforGeeks_files/ixmatch.html">
    </iframe><iframe sandbox="allow-scripts allow-same-origin" id="2174201fb5ee1c12" frameborder="0" allowtransparency="true" marginheight="0" marginwidth="0" width="0" hspace="0" vspace="0" height="0" style="height:0px;width:0px;display:none;" scrolling="no" src="./Most frequent element in an array - GeeksforGeeks_files/pd.html">
    </iframe><iframe sandbox="allow-scripts allow-same-origin" id="218800d4505664d2" frameborder="0" allowtransparency="true" marginheight="0" marginwidth="0" width="0" hspace="0" vspace="0" height="0" style="height:0px;width:0px;display:none;" scrolling="no" src="./Most frequent element in an array - GeeksforGeeks_files/async_usersync.html">
    </iframe><iframe sandbox="allow-scripts allow-same-origin" id="21990aa6ea54d63b" frameborder="0" allowtransparency="true" marginheight="0" marginwidth="0" width="0" hspace="0" vspace="0" height="0" style="height:0px;width:0px;display:none;" scrolling="no" src="./Most frequent element in an array - GeeksforGeeks_files/index.html">
    </iframe><iframe sandbox="allow-scripts allow-same-origin" id="22046934cac68def" frameborder="0" allowtransparency="true" marginheight="0" marginwidth="0" width="0" hspace="0" vspace="0" height="0" style="height:0px;width:0px;display:none;" scrolling="no" src="./Most frequent element in an array - GeeksforGeeks_files/usync.html">
    </iframe><iframe sandbox="allow-scripts allow-same-origin" id="2214bffff3b8d6c7" frameborder="0" allowtransparency="true" marginheight="0" marginwidth="0" width="0" hspace="0" vspace="0" height="0" style="height:0px;width:0px;display:none;" scrolling="no" src="./Most frequent element in an array - GeeksforGeeks_files/saved_resource(8).html">
    </iframe></html>