/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface CalSimpleStack : NSObject {

	BOOL _objectsProbablyAvailable;
	NSMutableArray* _objects;

}

@property (assign) BOOL objectsProbablyAvailable;              //@synthesize objectsProbablyAvailable=_objectsProbablyAvailable - In the implementation block
@property (readonly) NSMutableArray * objects;                 //@synthesize objects=_objects - In the implementation block
-(NSMutableArray *)objects;
-(id)init;
-(void)addObject:(id)arg1 ;
-(BOOL)objectsProbablyAvailable;
-(void)setObjectsProbablyAvailable:(BOOL)arg1 ;
-(id)popObject;
@end

