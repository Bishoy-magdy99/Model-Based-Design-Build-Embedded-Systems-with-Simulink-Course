function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.var["encoder.c:encoder_M_"] = {file: "D:\\mahmodzidancourse\\encoder_ert_rtw\\encoder.c",
	size: 8};
	 this.metricsArray.var["encoder_DW"] = {file: "D:\\mahmodzidancourse\\encoder_ert_rtw\\encoder.c",
	size: 6};
	 this.metricsArray.var["encoder_PrevZCX"] = {file: "D:\\mahmodzidancourse\\encoder_ert_rtw\\encoder.c",
	size: 1};
	 this.metricsArray.var["encoder_U"] = {file: "D:\\mahmodzidancourse\\encoder_ert_rtw\\encoder.c",
	size: 2};
	 this.metricsArray.var["encoder_Y"] = {file: "D:\\mahmodzidancourse\\encoder_ert_rtw\\encoder.c",
	size: 8};
	 this.metricsArray.fcn["encoder_initialize"] = {file: "D:\\mahmodzidancourse\\encoder_ert_rtw\\encoder.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["encoder_rotaryEncoder"] = {file: "D:\\mahmodzidancourse\\encoder_ert_rtw\\rotaryEncoder.c",
	stack: 35,
	stackTotal: 35};
	 this.metricsArray.fcn["encoder_step"] = {file: "D:\\mahmodzidancourse\\encoder_ert_rtw\\encoder.c",
	stack: 0,
	stackTotal: 35};
	 this.metricsArray.fcn["encoder_terminate"] = {file: "D:\\mahmodzidancourse\\encoder_ert_rtw\\encoder.c",
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
	 this.codeMetricsSummary = '<a href="javascript:void(0)" onclick="return postParentWindowMessage({message:\'gotoReportPage\', pageName:\'encoder_metrics\'});">Global Memory: 25(bytes) Maximum Stack: 35(bytes)</a>';
	}
CodeMetrics.instance = new CodeMetrics();
