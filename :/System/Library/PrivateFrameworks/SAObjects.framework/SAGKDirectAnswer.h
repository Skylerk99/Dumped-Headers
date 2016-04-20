/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:37 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SAGKSpeakableAnswer;

@interface SAGKDirectAnswer : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * answer; 
@property (nonatomic,retain) SAGKSpeakableAnswer * speakableAnswer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)directAnswer;
+(id)directAnswerWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)answer;
-(void)setAnswer:(NSString *)arg1 ;
-(SAGKSpeakableAnswer *)speakableAnswer;
-(void)setSpeakableAnswer:(SAGKSpeakableAnswer *)arg1 ;
-(id)confidenceLevel;
-(void)setConfidenceLevel:(id)arg1 ;
@end

