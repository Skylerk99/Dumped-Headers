/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:26 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSURL, NSString;

@interface SAPhoneCallStarted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSURL * phoneLogId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)callStarted;
+(id)callStartedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSURL *)phoneLogId;
-(void)setPhoneLogId:(NSURL *)arg1 ;
@end

