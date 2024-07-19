function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.var["PCCI.c:PCCI_M_"] = {file: "D:\\mahmodzidancourse\\PCCI_ert_rtw\\PCCI.c",
	size: 8};
	 this.metricsArray.var["PCCI_U"] = {file: "D:\\mahmodzidancourse\\PCCI_ert_rtw\\PCCI.c",
	size: 2};
	 this.metricsArray.var["PCCI_Y"] = {file: "D:\\mahmodzidancourse\\PCCI_ert_rtw\\PCCI.c",
	size: 1};
	 this.metricsArray.fcn["PCCI_calculatePercentFunc"] = {file: "D:\\mahmodzidancourse\\PCCI_ert_rtw\\calculatePercentFunc.c",
	stack: 3,
	stackTotal: 3};
	 this.metricsArray.fcn["PCCI_initialize"] = {file: "D:\\mahmodzidancourse\\PCCI_ert_rtw\\PCCI.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["PCCI_step"] = {file: "D:\\mahmodzidancourse\\PCCI_ert_rtw\\PCCI.c",
	stack: 0,
	stackTotal: 3};
	 this.metricsArray.fcn["PCCI_terminate"] = {file: "D:\\mahmodzidancourse\\PCCI_ert_rtw\\PCCI.c",
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
	 this.codeMetricsSummary = '<a href="javascript:void(0)" onclick="return postParentWindowMessage({message:\'gotoReportPage\', pageName:\'PCCI_metrics\'});">Global Memory: 11(bytes) Maximum Stack: 3(bytes)</a>';
	}
CodeMetrics.instance = new CodeMetrics();
