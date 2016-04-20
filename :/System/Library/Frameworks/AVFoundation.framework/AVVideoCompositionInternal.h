/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:43 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSString, NSArray, AVVideoCompositionCoreAnimationTool;

@interface AVVideoCompositionInternal : NSObject {

	unsigned long long changeSeed;
	NSString* builtInCompositorName;
	Class customCompositorClass;
	SCD_Struct_CM5 frameDuration;
	CGSize renderSize;
	float renderScale;
	NSArray* instructions;
	BOOL auxiliaryTrackLayerSetLast;
	AVVideoCompositionCoreAnimationTool* animationTool;

}
@end

