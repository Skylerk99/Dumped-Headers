/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface UIStatusBarItem : NSObject {

	long long _idiom;
	int _type;

}

@property (nonatomic,readonly) int type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) Class viewClass; 
@property (nonatomic,readonly) int priority; 
@property (nonatomic,readonly) int leftOrder; 
@property (nonatomic,readonly) int rightOrder; 
@property (nonatomic,readonly) NSString * indicatorName; 
+(id)itemWithType:(int)arg1 idiom:(long long)arg2 ;
+(BOOL)isItemWithTypeExclusive:(int)arg1 ;
+(BOOL)typeIsValid:(int)arg1 ;
+(BOOL)itemType:(int)arg1 idiom:(long long)arg2 canBeEnabledForData:(id)arg3 style:(id)arg4 ;
+(BOOL)itemType:(int)arg1 idiom:(long long)arg2 appearsInRegion:(int)arg3 ;
-(id)description;
-(int)type;
-(id)initWithType:(int)arg1 ;
-(int)priority;
-(BOOL)appearsOnLeft;
-(BOOL)appearsOnRight;
-(BOOL)appearsInRegion:(int)arg1 ;
-(long long)comparePriority:(id)arg1 ;
-(NSString *)indicatorName;
-(int)leftOrder;
-(int)rightOrder;
-(int)centerOrder;
-(Class)viewClass;
-(long long)compareLeftOrder:(id)arg1 ;
-(long long)compareRightOrder:(id)arg1 ;
-(long long)compareCenterOrder:(id)arg1 ;
@end

