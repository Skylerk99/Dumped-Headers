/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:04 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAFamilyRequest.h>

@class NSString;

@interface AAUIAcceptChildTransferRequest : AAFamilyRequest {

	NSString* _requestCode;

}

@property (nonatomic,copy) NSString * requestCode;              //@synthesize requestCode=_requestCode - In the implementation block
-(id)urlString;
-(BOOL)isUserInitiated;
-(NSString *)requestCode;
-(void)setRequestCode:(NSString *)arg1 ;
-(id)urlRequest;
@end

