/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:19 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface EKPersistentChangeStoreRowInfo : NSObject {

	int _consumedSequenceNumber;
	NSString* _clientIdentifier;

}

@property (nonatomic,retain) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic) int consumedSequenceNumber;               //@synthesize consumedSequenceNumber=_consumedSequenceNumber - In the implementation block
-(void)dealloc;
-(id)description;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(int)consumedSequenceNumber;
-(void)setConsumedSequenceNumber:(int)arg1 ;
-(NSString *)clientIdentifier;
@end

