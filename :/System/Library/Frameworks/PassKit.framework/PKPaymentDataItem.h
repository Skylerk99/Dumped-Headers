/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:18 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentValidating.h>

@class PKPaymentAuthorizationDataModel, NSString;

@interface PKPaymentDataItem : NSObject <PKPaymentValidating> {

	long long _type;
	long long _status;
	PKPaymentAuthorizationDataModel* _model;

}

@property (assign,nonatomic) long long type;                                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long status;                                     //@synthesize status=_status - In the implementation block
@property (getter=isRejected,nonatomic,readonly) BOOL rejected; 
@property (assign,nonatomic) PKPaymentAuthorizationDataModel * model;              //@synthesize model=_model - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)dataType;
-(BOOL)isValidWithError:(id*)arg1 ;
-(BOOL)isRejected;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(PKPaymentAuthorizationDataModel *)model;
-(id)initWithModel:(id)arg1 ;
-(void)setModel:(PKPaymentAuthorizationDataModel *)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
@end

