/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPassLibraryDataProvider <NSObject>
@property (nonatomic,readonly) BOOL canAddPaymentPass; 
@required
-(void)removePass:(id)arg1;
-(id)passWithUniqueID:(id)arg1;
-(BOOL)canAddPaymentPass;
-(id)paymentPasses;
-(id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;

@end

