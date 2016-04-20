/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:58 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <UIKit/UIDynamicItem.h>

@class UIBezierPath, NSString;

@interface _MPUFallAnimatorDynamicItem : NSObject <UIDynamicItem> {

	CGPoint _center;
	CGRect _bounds;
	CGAffineTransform _transform;

}

@property (assign,nonatomic) CGRect bounds;                                         //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) CGPoint center;                                        //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;                           //@synthesize transform=_transform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long collisionBoundsType; 
@property (nonatomic,readonly) UIBezierPath * collisionBoundingPath; 
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(CGPoint)center;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transform;
-(void)setCenter:(CGPoint)arg1 ;
@end

