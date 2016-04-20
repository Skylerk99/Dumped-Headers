/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:35 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSNumber;

@interface SAABMultiPersonSearch : SADomainCommand

@property (nonatomic,copy) NSArray * personSearches; 
@property (nonatomic,copy) NSNumber * resultsLimit; 
+(id)multiPersonSearch;
+(id)multiPersonSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)resultsLimit;
-(void)setResultsLimit:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)personSearches;
-(void)setPersonSearches:(NSArray *)arg1 ;
@end

