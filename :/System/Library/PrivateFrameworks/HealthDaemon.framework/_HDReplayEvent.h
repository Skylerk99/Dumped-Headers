/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKObject;

@interface _HDReplayEvent : NSObject <NSSecureCoding> {

	double _relativeFireDate;
	HKObject* _dataObject;

}

@property (assign,nonatomic) double relativeFireDate;              //@synthesize relativeFireDate=_relativeFireDate - In the implementation block
@property (nonatomic,retain) HKObject * dataObject;                //@synthesize dataObject=_dataObject - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(HKObject *)dataObject;
-(double)relativeFireDate;
-(void)setRelativeFireDate:(double)arg1 ;
-(void)setDataObject:(HKObject *)arg1 ;
@end

