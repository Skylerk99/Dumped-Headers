/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:35 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceComparable.h>

@class NSNumber, NSString;

@interface SAPhone : AceObject <SAAceComparable>

@property (nonatomic,copy) NSNumber * favoriteFacetime; 
@property (nonatomic,copy) NSNumber * favoriteFacetimeAudio; 
@property (nonatomic,copy) NSNumber * favoriteVoice; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * number; 
@property (nonatomic,copy) NSNumber * pseudo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)phone;
+(id)phoneWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)number;
-(void)setNumber:(NSString *)arg1 ;
-(NSNumber *)favoriteFacetime;
-(void)setFavoriteFacetime:(NSNumber *)arg1 ;
-(NSNumber *)favoriteFacetimeAudio;
-(void)setFavoriteFacetimeAudio:(NSNumber *)arg1 ;
-(NSNumber *)pseudo;
-(void)setPseudo:(NSNumber *)arg1 ;
-(NSNumber *)favoriteVoice;
-(void)setFavoriteVoice:(NSNumber *)arg1 ;
@end

