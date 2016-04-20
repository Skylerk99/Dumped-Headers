/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAMicroblogGetSocialCredential : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * explicitUserPermission; 
@property (nonatomic,copy) NSString * socialNetwork; 
+(id)getSocialCredential;
+(id)getSocialCredentialWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)explicitUserPermission;
-(void)setExplicitUserPermission:(NSString *)arg1 ;
-(NSString *)socialNetwork;
-(void)setSocialNetwork:(NSString *)arg1 ;
@end

