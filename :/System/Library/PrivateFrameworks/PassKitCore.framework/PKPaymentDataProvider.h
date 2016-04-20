/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:53 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol PKPaymentDataProvider <NSObject>
@property (nonatomic,readonly) BOOL isDeviceInRestrictedMode; 
@property (nonatomic,readonly) NSString * secureElementIdentifier; 
@property (nonatomic,retain) NSString * defaultPaymentPassIdentifier; 
@property (assign,nonatomic) id<PKPaymentDataProviderDelegate> delegate; 
@optional
-(void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 includingSources:(unsigned long long)arg2 limit:(long long)arg3 completion:(/*^block*/id)arg4;
-(id)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1;

@required
-(id)defaultPaymentApplicationForPassUniqueIdentifier:(id)arg1;
-(void)setDefaultPaymentApplication:(id)arg1 forPassUniqueIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(NSString *)defaultPaymentPassIdentifier;
-(void)setDefaultPaymentPassIdentifier:(id)arg1;
-(BOOL)isDeviceInRestrictedMode;
-(NSString *)secureElementIdentifier;
-(void)setDelegate:(id)arg1;
-(id<PKPaymentDataProviderDelegate>)delegate;

@end

