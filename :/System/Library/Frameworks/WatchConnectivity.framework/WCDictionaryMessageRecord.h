/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:19 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchConnectivity/WCMessageRecord.h>

@interface WCDictionaryMessageRecord : WCMessageRecord {

	/*^block*/id _responseHandler;

}

@property (copy,readonly) id responseHandler;              //@synthesize responseHandler=_responseHandler - In the implementation block
-(id)description;
-(id)initWithIdentifier:(id)arg1 responseHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(id)responseHandler;
-(BOOL)expectsResponse;
@end

