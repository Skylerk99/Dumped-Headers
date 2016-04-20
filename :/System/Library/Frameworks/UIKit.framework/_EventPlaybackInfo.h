/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:37 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSInvocation, NSTimer;

@interface _EventPlaybackInfo : NSObject {

	BOOL isPlaying;
	NSMutableArray* playbackEvents;
	int eventIndex;
	NSInvocation* doneCallback;
	NSTimer* playbackTimer;
	double startTimestampRecorded;
	double startTimestampActual;
	float playbackRate;
	NSMutableArray* eventDeliveryTimes;

}
-(id)init;
@end

