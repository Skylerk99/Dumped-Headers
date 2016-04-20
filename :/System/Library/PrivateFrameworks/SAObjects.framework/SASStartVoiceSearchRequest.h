/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:32 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASStartSpeechDictation.h>

@class NSDictionary, NSArray;

@interface SASStartVoiceSearchRequest : SASStartSpeechDictation

@property (nonatomic,copy) NSDictionary * headers; 
@property (nonatomic,copy) NSDictionary * queryParameters; 
@property (nonatomic,copy) NSArray * searchTypes; 
+(id)startVoiceSearchRequest;
+(id)startVoiceSearchRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSDictionary *)headers;
-(void)setSearchTypes:(NSArray *)arg1 ;
-(NSDictionary *)queryParameters;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)searchTypes;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(void)setQueryParameters:(NSDictionary *)arg1 ;
@end

