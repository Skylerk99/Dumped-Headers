/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:34 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSData, NSNumber;

@interface SACreateSessionInfoResponse : SABaseClientBoundCommand

@property (nonatomic,copy) NSData * sessionInfo; 
@property (nonatomic,copy) NSNumber * validityDuration; 
+(id)createSessionInfoResponse;
+(id)createSessionInfoResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSData *)sessionInfo;
-(void)setSessionInfo:(NSData *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSNumber *)validityDuration;
-(void)setValidityDuration:(NSNumber *)arg1 ;
@end

