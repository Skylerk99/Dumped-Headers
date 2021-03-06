/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNManipulableItem.h>

@interface SCNNodeManipulableItem : SCNManipulableItem
+(void)removeItemsFromScene:(id)arg1 ;
+(void)addItems:(id)arg1 toScene:(id)arg2 ;
+(id)nodeManipulatorItemWithNode:(id)arg1 screenSize:(double)arg2 ;
-(id)parentItem;
-(void)validateClone;
-(id)cloneForManipulators;
-(BOOL)isNodeManipulator;
-(SCNVector3)scale;
-(void)setTransform:(SCNMatrix4)arg1 ;
-(void)setPosition:(SCNVector3)arg1 ;
-(SCNMatrix4)transform;
-(SCNMatrix4)worldTransform;
@end

