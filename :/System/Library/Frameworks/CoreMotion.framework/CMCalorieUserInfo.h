/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@interface CMCalorieUserInfo : CMLogItem {

	double fAge;
	long long fGender;
	double fHeight;
	double fWeight;

}

@property (nonatomic,readonly) long long gender; 
@property (nonatomic,readonly) double age; 
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) double weight; 
+(id)genderString:(long long)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)height;
-(double)weight;
-(id)initWithAge:(double)arg1 gender:(long long)arg2 height:(double)arg3 weight:(double)arg4 ;
-(long long)gender;
-(double)age;
@end

