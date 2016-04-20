/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:13 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitIncident.h>

@class NSString, NSDate, NSArray, GEOPBTransitIncident;

@interface _GEOTransitIncident : NSObject <GEOTransitIncident> {

	GEOPBTransitIncident* _incident;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * summary; 
@property (nonatomic,readonly) NSString * fullDescription; 
@property (nonatomic,readonly) NSString * messageForRoutePlanning; 
@property (nonatomic,readonly) NSString * messageForRouteStepping; 
@property (nonatomic,readonly) NSString * messageForNonRoutable; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) long long iconType; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * lastUpdated; 
@property (getter=isBlockingIncident,nonatomic,readonly) BOOL blockingIncident; 
@property (nonatomic,readonly) NSArray * affectedEntities; 
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSDate *)creationDate;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)title;
-(NSDate *)lastUpdated;
-(NSString *)messageForRoutePlanning;
-(id)initWithIncident:(id)arg1 ;
-(BOOL)isBlockingIncident;
-(NSArray *)affectedEntities;
-(long long)iconType;
-(NSString *)messageForNonRoutable;
-(NSString *)messageForRouteStepping;
-(NSString *)fullDescription;
-(NSString *)summary;
@end

