/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:21 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Library/MobileSubstrate/DynamicLibraries/JODebox.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <JODebox.dylib/GCDWebServerDataResponse.h>

@interface GCDWebServerErrorResponse : GCDWebServerDataResponse
+(id)responseWithClientError:(long long)arg1 message:(id)arg2 ;
+(id)responseWithServerError:(long long)arg1 message:(id)arg2 ;
+(id)responseWithClientError:(long long)arg1 underlyingError:(id)arg2 message:(id)arg3 ;
+(id)responseWithServerError:(long long)arg1 underlyingError:(id)arg2 message:(id)arg3 ;
-(id)initWithStatusCode:(long long)arg1 underlyingError:(id)arg2 messageFormat:(id)arg3 arguments:(char*)arg4 ;
-(id)initWithClientError:(long long)arg1 message:(id)arg2 ;
-(id)initWithServerError:(long long)arg1 message:(id)arg2 ;
-(id)initWithClientError:(long long)arg1 underlyingError:(id)arg2 message:(id)arg3 ;
-(id)initWithServerError:(long long)arg1 underlyingError:(id)arg2 message:(id)arg3 ;
@end

