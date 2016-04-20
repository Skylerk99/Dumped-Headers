/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:29 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNAction.h>

@interface SCNActionFade : SCNAction {

	SCNCActionFade* _mycaction;

}
+(id)fadeOpacityBy:(double)arg1 duration:(double)arg2 ;
+(id)fadeOpacityTo:(double)arg1 duration:(double)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)fadeOutWithDuration:(double)arg1 ;
+(id)fadeInWithDuration:(double)arg1 ;
-(id)reversedAction;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)parameters;
@end

