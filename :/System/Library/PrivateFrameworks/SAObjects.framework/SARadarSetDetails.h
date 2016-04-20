/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:33 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SARadarSetDetails : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * classification; 
@property (nonatomic,copy) NSString * description; 
@property (nonatomic,copy) NSString * title; 
+(id)setDetails;
+(id)setDetailsWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)description;
-(NSString *)title;
-(void)setClassification:(NSString *)arg1 ;
-(NSString *)classification;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setDescription:(NSString *)arg1 ;
@end

