/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:16 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <libobjc.A.dylib/PKRemoteAddPassViewControllerProtocol.h>

@class PKWeakReference, NSString;

@interface PKRemoteAddPaymentPassViewController : _UIRemoteViewController <PKRemoteAddPassViewControllerProtocol> {

	PKWeakReference* _delegate;
	BOOL _finished;

}

@property (assign,nonatomic) id<PKAddPaymentPassViewControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
+(BOOL)shouldPropagateAppearanceCustomizations;
-(void)generateRequestWithCertificateChain:(id)arg1 nonce:(id)arg2 nonceSignature:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)didFinishWithPass:(id)arg1 error:(id)arg2 ;
-(id)_addPaymentPassVC;
-(void)setDelegate:(id<PKAddPaymentPassViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<PKAddPaymentPassViewControllerDelegate>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end

