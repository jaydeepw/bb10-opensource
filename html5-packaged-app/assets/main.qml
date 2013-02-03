// Default empty project template
import bb.cascades 1.0

Page {
    ScrollView {
        Container {
            layout: DockLayout {}
            WebView {
    		    id: webView
    		    url: "local:///assets/www/index.html"
    		    onLoadingChanged: {
    		        if (loadRequest.status == WebLoadStatus.Started) {
    		            progressSpinner.visible = true;
    		            progressSpinner.running = true;
    		            console.log("Load started.")
    		        }
    		        else if (loadRequest.status == WebLoadStatus.Succeeded) {
    		            progressSpinner.visible = false;
    		            progressSpinner.running = false;
    		            console.log("Load finished.")
    		        }
    		        else if (loadRequest.status == WebLoadStatus.Failed) {
    		            progressSpinner.visible = false;
    		            progressSpinner.running = false;
    		        }
    		    }
    		}
	        ActivityIndicator {
	            id: progressSpinner
	            preferredWidth: 400
	            preferredHeight: 400
	            visible: true
	            running: true
	            verticalAlignment: VerticalAlignment.Center
	            horizontalAlignment: HorizontalAlignment.Center
	        }
        }    // end Container
    }    // end ScrollView
}