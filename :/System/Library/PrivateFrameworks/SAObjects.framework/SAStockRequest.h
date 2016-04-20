/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSDate, NSString;

@interface SAStockRequest : SADomainObject

@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) NSString * requestType; 
@property (nonatomic,copy) NSDate * startDate; 
+(id)request;
+(id)requestWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)requestType;
-(void)setRequestType:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
@end

