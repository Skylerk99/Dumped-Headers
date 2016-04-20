/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:31 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSError;

@interface SLGoogleUserInfoResponse : NSObject {

	long long _statusCode;
	NSDictionary* _userInfo;
	NSString* _displayName;
	NSString* _emailAddress;
	NSError* _error;
	NSString* _errorMessage;

}

@property (readonly) long long statusCode;                 //@synthesize statusCode=_statusCode - In the implementation block
@property (readonly) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) NSString * displayName;               //@synthesize displayName=_displayName - In the implementation block
@property (readonly) NSString * emailAddress;              //@synthesize emailAddress=_emailAddress - In the implementation block
@property (readonly) NSError * error;                      //@synthesize error=_error - In the implementation block
@property (readonly) NSString * errorMessage;              //@synthesize errorMessage=_errorMessage - In the implementation block
-(NSError *)error;
-(id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 ;
-(NSDictionary *)userInfo;
-(long long)statusCode;
-(NSString *)displayName;
-(NSString *)errorMessage;
-(NSString *)emailAddress;
@end

