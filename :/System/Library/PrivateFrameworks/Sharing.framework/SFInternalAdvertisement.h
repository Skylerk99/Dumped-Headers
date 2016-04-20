/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:46 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSDictionary;

@interface SFInternalAdvertisement : NSObject {

	NSData* _advertisementPayload;
	NSDictionary* _options;

}

@property (copy) NSData * advertisementPayload;              //@synthesize advertisementPayload=_advertisementPayload - In the implementation block
@property (copy) NSDictionary * options;                     //@synthesize options=_options - In the implementation block
-(void)dealloc;
-(id)description;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(id)initWithAdvertisementPayload:(id)arg1 options:(id)arg2 ;
-(NSData *)advertisementPayload;
-(void)setAdvertisementPayload:(NSData *)arg1 ;
@end

