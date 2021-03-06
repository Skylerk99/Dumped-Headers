/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:06 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSData;


@protocol GEOResourceLoadOperation <NSObject>
@property (nonatomic,readonly) NSData * data; 
@required
-(void)cancel;
-(NSData *)data;
-(id)initWithResource:(id)arg1 existingPartialData:(id)arg2 auditToken:(id)arg3 baseURLString:(id)arg4;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2;

@end

