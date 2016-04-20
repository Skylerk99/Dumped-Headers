/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:33 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/NCContentServiceInterface.h>

@class NSDictionary;

@interface NCContentViewController : UIViewController <NCContentServiceInterface> {

	NSDictionary* _context;

}

@property (nonatomic,copy) NSDictionary * context;              //@synthesize context=_context - In the implementation block
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)dealloc;
-(NSDictionary *)context;
-(void)setContext:(NSDictionary *)arg1 ;
-(void)_setContext:(id)arg1 ;
-(void)_getPreferredContentSizeWithCompletion:(/*^block*/id)arg1 ;
@end

