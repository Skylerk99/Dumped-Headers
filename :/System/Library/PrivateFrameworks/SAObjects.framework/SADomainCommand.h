/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:34 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSURL, NSNumber;

@interface SADomainCommand : SABaseClientBoundCommand

@property (nonatomic,copy) NSURL * targetAppId; 
@property (nonatomic,copy) NSURL * targetPluginId; 
@property (nonatomic,copy) NSNumber * timeout; 
+(id)domainCommand;
+(id)domainCommandWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)timeout;
-(void)setTimeout:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSURL *)targetAppId;
-(void)setTargetAppId:(NSURL *)arg1 ;
-(NSURL *)targetPluginId;
-(void)setTargetPluginId:(NSURL *)arg1 ;
@end

