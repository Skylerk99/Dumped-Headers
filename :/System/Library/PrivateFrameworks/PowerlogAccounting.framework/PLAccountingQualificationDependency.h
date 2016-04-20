/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogAccounting/PLAccountingDependency.h>

@class PLAccountingQualificationEventEntry;

@interface PLAccountingQualificationDependency : PLAccountingDependency {

	PLAccountingQualificationEventEntry* _qualificationEvent;

}

@property (retain) PLAccountingQualificationEventEntry * qualificationEvent;              //@synthesize qualificationEvent=_qualificationEvent - In the implementation block
-(id)range;
-(void)setRange:(id)arg1 ;
-(id)ID;
-(id)activationDate;
-(id)initWithQualificationEvent:(id)arg1 ;
-(PLAccountingQualificationEventEntry *)qualificationEvent;
-(void)setQualificationEvent:(PLAccountingQualificationEventEntry *)arg1 ;
@end

