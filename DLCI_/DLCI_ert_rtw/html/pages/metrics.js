function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.var["DLCI.c:DLCI_M_"] = {file: "D:\\mahmodzidancourse\\DLCI_ert_rtw\\DLCI.c",
	size: 8};
	 this.metricsArray.var["DLCI_U"] = {file: "D:\\mahmodzidancourse\\DLCI_ert_rtw\\DLCI.c",
	size: 2};
	 this.metricsArray.var["DLCI_Y"] = {file: "D:\\mahmodzidancourse\\DLCI_ert_rtw\\DLCI.c",
	size: 2};
	 this.metricsArray.fcn["DLCI_directionalLightingFunc"] = {file: "D:\\mahmodzidancourse\\DLCI_ert_rtw\\directionalLightingFunc.c",
	stack: 18,
	stackTotal: 18};
	 this.metricsArray.fcn["DLCI_initialize"] = {file: "D:\\mahmodzidancourse\\DLCI_ert_rtw\\DLCI.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["DLCI_step"] = {file: "D:\\mahmodzidancourse\\DLCI_ert_rtw\\DLCI.c",
	stack: 0,
	stackTotal: 18};
	 this.metricsArray.fcn["DLCI_terminate"] = {file: "D:\\mahmodzidancourse\\DLCI_ert_rtw\\DLCI.c",
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
	 this.codeMetricsSummary = '<a href="javascript:void(0)" onclick="return postParentWindowMessage({message:\'gotoReportPage\', pageName:\'DLCI_metrics\'});">Global Memory: 12(bytes) Maximum Stack: 18(bytes)</a>';
	}
CodeMetrics.instance = new CodeMetrics();
