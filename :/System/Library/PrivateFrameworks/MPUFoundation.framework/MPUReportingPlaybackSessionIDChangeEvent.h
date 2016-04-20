/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:59 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUReportingEvent.h>

@class SSVPlayActivityEvent, NSString;

@interface MPUReportingPlaybackSessionIDChangeEvent : NSObject <MPUReportingEvent> {

	SSVPlayActivityEvent* _playActivityEvent;
	NSString* _playbackSessionID;

}

@property (nonatomic,copy) SSVPlayActivityEvent * playActivityEvent;              //@synthesize playActivityEvent=_playActivityEvent - In the implementation block
@property (nonatomic,copy) NSString * playbackSessionID;                          //@synthesize playbackSessionID=_playbackSessionID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)playbackSessionID;
-(NSString *)description;
-(BOOL)isValidReportingEvent;
-(unsigned long long)reportingEventType;
-(SSVPlayActivityEvent *)playActivityEvent;
-(void)setPlayActivityEvent:(SSVPlayActivityEvent *)arg1 ;
-(void)setPlaybackSessionID:(NSString *)arg1 ;
@end

