/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:32 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSURL, NSData;

@interface SALocalSearchSendToProtobufConduit : SADomainCommand

@property (nonatomic,copy) NSArray * attributes; 
@property (nonatomic,copy) NSURL * endpoint; 
@property (nonatomic,copy) NSData * rawRequest; 
@property (assign,nonatomic) long long timeoutInSeconds; 
+(id)sendToProtobufConduit;
+(id)sendToProtobufConduitWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)attributes;
-(void)setAttributes:(NSArray *)arg1 ;
-(NSURL *)endpoint;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setEndpoint:(NSURL *)arg1 ;
-(NSData *)rawRequest;
-(void)setRawRequest:(NSData *)arg1 ;
-(long long)timeoutInSeconds;
-(void)setTimeoutInSeconds:(long long)arg1 ;
@end

