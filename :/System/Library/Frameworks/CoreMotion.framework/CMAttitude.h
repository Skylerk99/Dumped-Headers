/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CMAttitude : NSObject <NSCopying, NSSecureCoding> {

	id _internal;

}

@property (nonatomic,readonly) double roll; 
@property (nonatomic,readonly) double pitch; 
@property (nonatomic,readonly) double yaw; 
@property (nonatomic,readonly) SCD_Struct_CM8 rotationMatrix; 
@property (nonatomic,readonly) SCD_Struct_CM7 quaternion; 
+(BOOL)supportsSecureCoding;
-(_GLKQuaternion)GLKQuaternion;
-(id)fig_newAttitudeRelativeTo:(id)arg1 ;
-(double)fig_magnitude;
-(double)fig_rotationAxisDotProductMagnitude:(id)arg1 ;
-(id)initWithQuaternion:(SCD_Struct_CM7)arg1 ;
-(SCD_Struct_CM8)rotationMatrix;
-(double)yaw;
-(void)setQuaternion:(SCD_Struct_CM7)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_CM7)quaternion;
-(double)roll;
-(double)pitch;
-(void)multiplyByInverseOfAttitude:(id)arg1 ;
@end

