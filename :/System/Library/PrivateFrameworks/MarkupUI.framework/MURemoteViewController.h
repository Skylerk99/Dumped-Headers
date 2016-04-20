/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:04 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <libobjc.A.dylib/MURemoteViewProtocol.h>

@class NSString;

@interface MURemoteViewController : _UIRemoteViewController <MURemoteViewProtocol> {

	/*^block*/id _finishedWithResultsCompletionBlock;
	long long _sandboxExtensionHandle;

}

@property (nonatomic,copy) id finishedWithResultsCompletionBlock;              //@synthesize finishedWithResultsCompletionBlock=_finishedWithResultsCompletionBlock - In the implementation block
@property (assign) long long sandboxExtensionHandle;                           //@synthesize sandboxExtensionHandle=_sandboxExtensionHandle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)serviceDidFinishwithResults:(id)arg1 andSandboxExtension:(id)arg2 ;
-(void)setSandboxExtensionHandle:(long long)arg1 ;
-(id)finishedWithResultsCompletionBlock;
-(long long)sandboxExtensionHandle;
-(void)beginDismissWithInfo:(id)arg1 ;
-(void)setFinishedWithResultsCompletionBlock:(id)arg1 ;
@end

