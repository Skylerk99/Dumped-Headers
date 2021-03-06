/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:47 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AXHearingSupport/AXHearingSupport-Structs.h>
@class NSMutableData;

@interface AXHAPacket : NSObject {

	unsigned long long _totalLength;
	NSMutableData* _data;

}

@property (nonatomic,retain) NSMutableData * data;              //@synthesize data=_data - In the implementation block
+(id)packetDataWithPayload:(id)arg1 ;
+(SCD_Struct_AX2)headerFromData:(id)arg1 ;
+(id)packetWithHeader:(SCD_Struct_AX2)arg1 ;
-(void)dealloc;
-(NSMutableData *)data;
-(void)setData:(NSMutableData *)arg1 ;
-(id)appendData:(id)arg1 ;
-(id)objectPayload;
-(unsigned long long)missingLength;
-(id)initWithHeader:(SCD_Struct_AX2)arg1 ;
-(id)dataPayload;
@end

