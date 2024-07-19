function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.var["LDR.c:LDR_M_"] = {file: "D:\\mahmodzidancourse\\LDR_ert_rtw\\LDR.c",
	size: 8};
	 this.metricsArray.var["LDR_U"] = {file: "D:\\mahmodzidancourse\\LDR_ert_rtw\\LDR.c",
	size: 2};
	 this.metricsArray.var["LDR_Y"] = {file: "D:\\mahmodzidancourse\\LDR_ert_rtw\\LDR.c",
	size: 3};
	 this.metricsArray.fcn["LDR_initialize"] = {file: "D:\\mahmodzidancourse\\LDR_ert_rtw\\LDR.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["LDR_lightControl"] = {file: "D:\\mahmodzidancourse\\LDR_ert_rtw\\lightControl.c",
	stack: 30,
	stackTotal: 30};
	 this.metricsArray.fcn["LDR_step"] = {file: "D:\\mahmodzidancourse\\LDR_ert_rtw\\LDR.c",
	stack: 0,
	stackTotal: 30};
	 this.metricsArray.fcn["LDR_terminate"] = {file: "D:\\mahmodzidancourse\\LDR_ert_rtw\\LDR.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["floorf"] = {file: "C:\\Program Files\\MATLAB\\R2023b\\polyspace\\verifier\\cxx\\include\\include-libc\\bits\\mathcalls.h",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["fmodf"] = {file: "C:\\Program Files\\MATLAB\\R2023b\\polyspace\\verifier\\cxx\\include\\include-libc\\bits\\mathcalls.h",
	stack: 0,
	stackTotal: 0};
	 this.getMetrics = function(token) { 
		 var data;
		 data = this.metricsArray.var[token];
		 if (!data) {
			 data = this.metricsArray.fcn[token];
			 if (data) data.type = "fcn";
		 } else { 
			 data.type = "var";
		 }
	 return data; }; 
	 this.codeMetricsSummary = '<a href="javascript:void(0)" onclick="return postParentWindowMessage({message:\'gotoReportPage\', pageName:\'LDR_metrics\'});">Global Memory: 13(bytes) Maximum Stack: 30(bytes)</a>';
	}
CodeMetrics.instance = new CodeMetrics();
