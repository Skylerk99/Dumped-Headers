/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:43 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface VKGuidanceStepInfo : NSObject {

	NSString* _roadName;
	int _routePoint;

}

@property (nonatomic,retain,readonly) NSString * roadName;              //@synthesize roadName=_roadName - In the implementation block
@property (nonatomic,readonly) int routePoint;                          //@synthesize routePoint=_routePoint - In the implementation block
-(void)dealloc;
-(NSString *)roadName;
-(int)routePoint;
-(id)initWithRoadName:(id)arg1 point:(int)arg2 ;
@end

