function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.var["DOIO.c:DOIO_M_"] = {file: "D:\\mahmodzidancourse\\DOIO_ert_rtw\\DOIO.c",
	size: 8};
	 this.metricsArray.var["DOIO_U"] = {file: "D:\\mahmodzidancourse\\DOIO_ert_rtw\\DOIO.c",
	size: 1};
	 this.metricsArray.var["DOIO_Y"] = {file: "D:\\mahmodzidancourse\\DOIO_ert_rtw\\DOIO.c",
	size: 1};
	 this.metricsArray.fcn["DOIO_indicatorLampFunc"] = {file: "D:\\mahmodzidancourse\\DOIO_ert_rtw\\indicatorLampFunc.c",
	stack: 2,
	stackTotal: 2};
	 this.metricsArray.fcn["DOIO_initialize"] = {file: "D:\\mahmodzidancourse\\DOIO_ert_rtw\\DOIO.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["DOIO_step"] = {file: "D:\\mahmodzidancourse\\DOIO_ert_rtw\\DOIO.c",
	stack: 0,
	stackTotal: 2};
	 this.metricsArray.fcn["DOIO_terminate"] = {file: "D:\\mahmodzidancourse\\DOIO_ert_rtw\\DOIO.c",
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
	 this.codeMetricsSummary = '<a href="javascript:void(0)" onclick="return postParentWindowMessage({message:\'gotoReportPage\', pageName:\'DOIO_metrics\'});">Global Memory: 10(bytes) Maximum Stack: 2(bytes)</a>';
	}
CodeMetrics.instance = new CodeMetrics();
