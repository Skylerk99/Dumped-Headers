/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:11 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIWebBrowserLoadingControllerDelegate <NSObject>
@optional
-(void)browserLoadingControllerDidUpdateBackForward:(id)arg1;
-(void)browserLoadingControllerDidUpdateLoadingState:(id)arg1;
-(void)browserLoadingControllerDidUpdateEstimatedProgress:(id)arg1;
-(void)browserLoadingControllerWillStartUserDrivenLoad:(id)arg1;
-(id)browserLoadingController:(id)arg1 userVisibleStringForURL:(id)arg2;
-(void)browserLoadingControllerDidUpdateURLString:(id)arg1;
-(void)browserLoadingControllerDidUpdateTitle:(id)arg1;
-(void)browserLoadingControllerDidUpdateURL:(id)arg1;
-(BOOL)browserLoadingControllerShouldShowProvisionalURLs:(id)arg1;
-(void)browserLoadingControllerDidStartLoading:(id)arg1;
-(void)browserLoadingController:(id)arg1 didFinishLoadingWithError:(id)arg2 dataSource:(id)arg3;
-(void)browserLoadingController:(id)arg1 willLoadRequest:(id)arg2 userDriven:(BOOL)arg3;
-(void)browserLoadingControllerDidUpdateSecurity:(id)arg1;
-(void)browserLoadingController:(id)arg1 failedToStartLoadingRequest:(id)arg2 error:(id)arg3;

@end

