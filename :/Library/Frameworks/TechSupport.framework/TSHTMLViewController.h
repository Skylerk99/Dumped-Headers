/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:19 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Library/Frameworks/TechSupport.framework/TechSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIWebView, NSString, NSURL;

@interface TSHTMLViewController : UIViewController {

	UIWebView* webView_;
	NSString* content_;
	NSURL* url_;
	unsigned long long dataDetectors_;

}

@property (nonatomic,readonly) UIWebView * webView; 
-(id)initWithHTMLContent:(id)arg1 ;
-(id)initWithHTMLContent:(id)arg1 dataDetector:(unsigned long long)arg2 ;
-(id)initWithURL:(id)arg1 dataDetector:(unsigned long long)arg2 ;
-(void)copyTextContent;
-(void)dealloc;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(UIWebView *)webView;
-(void)setURL:(id)arg1 ;
-(void)setContent:(id)arg1 ;
@end

