function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.var["ultrasonic.c:ultrasonic_M_"] = {file: "D:\\mahmodzidancourse\\ultrasonic_ert_rtw\\ultrasonic.c",
	size: 8};
	 this.metricsArray.var["ultrasonic_DW"] = {file: "D:\\mahmodzidancourse\\ultrasonic_ert_rtw\\ultrasonic.c",
	size: 16};
	 this.metricsArray.var["ultrasonic_U"] = {file: "D:\\mahmodzidancourse\\ultrasonic_ert_rtw\\ultrasonic.c",
	size: 1};
	 this.metricsArray.var["ultrasonic_Y"] = {file: "D:\\mahmodzidancourse\\ultrasonic_ert_rtw\\ultrasonic.c",
	size: 8};
	 this.metricsArray.fcn["ultrasonic_ULTRASONIC_Bishoy"] = {file: "D:\\mahmodzidancourse\\ultrasonic_ert_rtw\\ULTRASONIC_Bishoy.c",
	stack: 19,
	stackTotal: 19};
	 this.metricsArray.fcn["ultrasonic_initialize"] = {file: "D:\\mahmodzidancourse\\ultrasonic_ert_rtw\\ultrasonic.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["ultrasonic_step"] = {file: "D:\\mahmodzidancourse\\ultrasonic_ert_rtw\\ultrasonic.c",
	stack: 0,
	stackTotal: 19};
	 this.metricsArray.fcn["ultrasonic_terminate"] = {file: "D:\\mahmodzidancourse\\ultrasonic_ert_rtw\\ultrasonic.c",
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
	 this.codeMetricsSummary = '<a href="javascript:void(0)" onclick="return postParentWindowMessage({message:\'gotoReportPage\', pageName:\'ultrasonic_metrics\'});">Global Memory: 33(bytes) Maximum Stack: 19(bytes)</a>';
	}
CodeMetrics.instance = new CodeMetrics();
