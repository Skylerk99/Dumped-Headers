/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:07 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSVPushNotificationParameters, SSURLConnectionResponse, NSString;

@interface PushNotificationRequestOperation : ISOperation {

	SSVPushNotificationParameters* _parameters;
	SSURLConnectionResponse* _response;
	NSString* _userAgent;

}

@property (copy) NSString * userAgent; 
@property (readonly) SSURLConnectionResponse * URLResponse; 
-(BOOL)_loadResponseWithAccountIdentifier:(id)arg1 URL:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(void)run;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userAgent;
-(SSURLConnectionResponse *)URLResponse;
-(id)initWithPushNotificationParameters:(id)arg1 ;
@end

