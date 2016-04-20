/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:14 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libextension.dylib/NSExtensionContext.h>

@class _NCWidgetViewController;

@interface _NCWidgetExtensionContext : NSExtensionContext {

	_NCWidgetViewController* _hostViewController;

}

@property (assign,nonatomic) _NCWidgetViewController * hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
-(void)openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setHostViewController:(_NCWidgetViewController *)arg1 ;
-(_NCWidgetViewController *)hostViewController;
@end

