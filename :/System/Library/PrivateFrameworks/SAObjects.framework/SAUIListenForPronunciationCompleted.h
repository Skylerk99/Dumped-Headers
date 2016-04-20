/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:34 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSNumber, NSString, SASPronunciationData;

@interface SAUIListenForPronunciationCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSNumber * errorCode; 
@property (nonatomic,copy) NSString * interactionId; 
@property (nonatomic,retain) SASPronunciationData * pronunciationData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)listenForPronunciationCompleted;
+(id)listenForPronunciationCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setErrorCode:(NSNumber *)arg1 ;
-(NSNumber *)errorCode;
-(id)encodedClassName;
-(SASPronunciationData *)pronunciationData;
-(NSString *)interactionId;
-(void)setInteractionId:(NSString *)arg1 ;
-(void)setPronunciationData:(SASPronunciationData *)arg1 ;
@end

