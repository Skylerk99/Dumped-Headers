/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:01 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _DKCachedLocationVisit : NSObject {

	double _entryTime;
	double _exitTime;
	NSString* _locationId;

}

@property (assign,nonatomic) double entryTime;                   //@synthesize entryTime=_entryTime - In the implementation block
@property (assign,nonatomic) double exitTime;                    //@synthesize exitTime=_exitTime - In the implementation block
@property (nonatomic,retain) NSString * locationId;              //@synthesize locationId=_locationId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqualToVisit:(id)arg1 ;
-(void)setEntryTime:(double)arg1 ;
-(void)setExitTime:(double)arg1 ;
-(NSString *)locationId;
-(void)setLocationId:(NSString *)arg1 ;
-(double)entryTime;
-(double)exitTime;
@end

