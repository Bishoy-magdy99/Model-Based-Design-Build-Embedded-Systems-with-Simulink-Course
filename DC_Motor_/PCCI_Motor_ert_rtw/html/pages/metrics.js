function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.var["PCCI_Motor.c:PCCI_Motor_M_"] = {file: "D:\\mahmodzidancourse\\PCCI_Motor_ert_rtw\\PCCI_Motor.c",
	size: 8};
	 this.metricsArray.var["PCCI_Motor_DW"] = {file: "D:\\mahmodzidancourse\\PCCI_Motor_ert_rtw\\PCCI_Motor.c",
	size: 2};
	 this.metricsArray.var["PCCI_Motor_PrevZCX"] = {file: "D:\\mahmodzidancourse\\PCCI_Motor_ert_rtw\\PCCI_Motor.c",
	size: 1};
	 this.metricsArray.var["PCCI_Motor_U"] = {file: "D:\\mahmodzidancourse\\PCCI_Motor_ert_rtw\\PCCI_Motor.c",
	size: 4};
	 this.metricsArray.var["PCCI_Motor_Y"] = {file: "D:\\mahmodzidancourse\\PCCI_Motor_ert_rtw\\PCCI_Motor.c",
	size: 3};
	 this.metricsArray.fcn["PCCI_Motor_calculatePercentFunc"] = {file: "D:\\mahmodzidancourse\\PCCI_Motor_ert_rtw\\calculatePercentFunc.c",
	stack: 47,
	stackTotal: 47};
	 this.metricsArray.fcn["PCCI_Motor_initialize"] = {file: "D:\\mahmodzidancourse\\PCCI_Motor_ert_rtw\\PCCI_Motor.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["PCCI_Motor_step"] = {file: "D:\\mahmodzidancourse\\PCCI_Motor_ert_rtw\\PCCI_Motor.c",
	stack: 0,
	stackTotal: 47};
	 this.metricsArray.fcn["PCCI_Motor_terminate"] = {file: "D:\\mahmodzidancourse\\PCCI_Motor_ert_rtw\\PCCI_Motor.c",
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
	 this.codeMetricsSummary = '<a href="javascript:void(0)" onclick="return postParentWindowMessage({message:\'gotoReportPage\', pageName:\'PCCI_Motor_metrics\'});">Global Memory: 18(bytes) Maximum Stack: 47(bytes)</a>';
	}
CodeMetrics.instance = new CodeMetrics();
