/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:52 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CNFRegSecureAccountWebViewController.h>

@protocol CNFRegViewAccountControllerDelegate;
@interface CNFRegViewAccountController : CNFRegSecureAccountWebViewController {

	id<CNFRegViewAccountControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<CNFRegViewAccountControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<CNFRegViewAccountControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<CNFRegViewAccountControllerDelegate>)delegate;
-(id)logName;
-(void)cancelTapped;
-(void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
-(id)bagKey;
@end

