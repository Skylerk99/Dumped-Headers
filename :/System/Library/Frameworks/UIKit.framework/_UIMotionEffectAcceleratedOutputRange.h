/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:18 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _UIMotionEffectAcceleratedOutputRange : NSObject <NSCoding, NSCopying> {

	UIOffset _referenceOffset;
	CGPoint _referenceAcceleration;
	CGPoint _acceleration;

}

@property (nonatomic,readonly) CGPoint acceleration;              //@synthesize acceleration=_acceleration - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAcceleration:(CGPoint)arg1 fixingOutputForViewerOffset:(UIOffset)arg2 ;
-(UIOffset)acceleratedOutputForViewerOffset:(UIOffset)arg1 accelerationBoostFactor:(CGPoint)arg2 ;
-(CGPoint)acceleration;
@end

