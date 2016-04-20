/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:30 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSURL, NSString, NSDate, NSDictionary, SALocation, NSNumber, NSArray, SAPersonAttribute;

@interface SAMicroblogObject : SADomainObject

@property (nonatomic,copy) NSURL * attachment; 
@property (nonatomic,copy) NSString * content; 
@property (nonatomic,copy) NSDate * dateSent; 
@property (nonatomic,copy) NSDictionary * hashtagAlternatives; 
@property (nonatomic,retain) SALocation * location; 
@property (nonatomic,copy) NSNumber * outgoing; 
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,copy) NSURL * refereceId; 
@property (nonatomic,retain) SAPersonAttribute * sender; 
@property (nonatomic,copy) NSString * serviceType; 
@property (nonatomic,copy) NSDictionary * socialProfileReferences; 
@property (nonatomic,copy) NSNumber * useLocation; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSDate *)dateSent;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(SAPersonAttribute *)sender;
-(NSString *)content;
-(SALocation *)location;
-(void)setLocation:(SALocation *)arg1 ;
-(void)setSender:(SAPersonAttribute *)arg1 ;
-(void)setAttachment:(NSURL *)arg1 ;
-(NSURL *)attachment;
-(void)setDateSent:(NSDate *)arg1 ;
-(void)setOutgoing:(NSNumber *)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(NSString *)serviceType;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setContent:(NSString *)arg1 ;
-(NSNumber *)outgoing;
-(NSDictionary *)hashtagAlternatives;
-(void)setHashtagAlternatives:(NSDictionary *)arg1 ;
-(NSURL *)refereceId;
-(void)setRefereceId:(NSURL *)arg1 ;
-(NSDictionary *)socialProfileReferences;
-(void)setSocialProfileReferences:(NSDictionary *)arg1 ;
-(NSNumber *)useLocation;
-(void)setUseLocation:(NSNumber *)arg1 ;
@end

