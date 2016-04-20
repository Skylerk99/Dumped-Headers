/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, NSDate, WiFiData, Peer, EventScene, NSSet;

@interface Event : NSManagedObject

@property (nonatomic,retain) NSString * failureImpact; 
@property (nonatomic,retain) NSString * failureString; 
@property (nonatomic,retain) NSNumber * rfu1; 
@property (nonatomic,retain) NSNumber * rfu2; 
@property (nonatomic,retain) NSNumber * rfu3; 
@property (nonatomic,retain) NSNumber * rfu4; 
@property (nonatomic,retain) NSNumber * rfu5; 
@property (nonatomic,retain) NSDate * timeStamp; 
@property (nonatomic,retain) NSString * syndromeID; 
@property (nonatomic,retain) WiFiData * happenedOnNet; 
@property (nonatomic,retain) Peer * hasPeer; 
@property (nonatomic,retain) EventScene * hasScene; 
@property (nonatomic,retain) NSSet * hasTshootingData; 
@end

