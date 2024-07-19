function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.var["IRSensor.c:IRSensor_M_"] = {file: "D:\\mahmodzidancourse\\IRSensor_ert_rtw\\IRSensor.c",
	size: 8};
	 this.metricsArray.var["IRSensor_DW"] = {file: "D:\\mahmodzidancourse\\IRSensor_ert_rtw\\IRSensor.c",
	size: 3};
	 this.metricsArray.var["IRSensor_U"] = {file: "D:\\mahmodzidancourse\\IRSensor_ert_rtw\\IRSensor.c",
	size: 1};
	 this.metricsArray.var["IRSensor_Y"] = {file: "D:\\mahmodzidancourse\\IRSensor_ert_rtw\\IRSensor.c",
	size: 1};
	 this.metricsArray.fcn["IRSensor_initialize"] = {file: "D:\\mahmodzidancourse\\IRSensor_ert_rtw\\IRSensor.c",
	stack: 0,
	stackTotal: 8};
	 this.metricsArray.fcn["IRSensor_objectDetection"] = {file: "D:\\mahmodzidancourse\\IRSensor_ert_rtw\\objectDetection.c",
	stack: 17,
	stackTotal: 17};
	 this.metricsArray.fcn["IRSensor_objectDetection_Init"] = {file: "D:\\mahmodzidancourse\\IRSensor_ert_rtw\\objectDetection.c",
	stack: 8,
	stackTotal: 8};
	 this.metricsArray.fcn["IRSensor_step"] = {file: "D:\\mahmodzidancourse\\IRSensor_ert_rtw\\IRSensor.c",
	stack: 0,
	stackTotal: 17};
	 this.metricsArray.fcn["IRSensor_terminate"] = {file: "D:\\mahmodzidancourse\\IRSensor_ert_rtw\\IRSensor.c",
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
	 this.codeMetricsSummary = '<a href="javascript:void(0)" onclick="return postParentWindowMessage({message:\'gotoReportPage\', pageName:\'IRSensor_metrics\'});">Global Memory: 13(bytes) Maximum Stack: 17(bytes)</a>';
	}
CodeMetrics.instance = new CodeMetrics();
