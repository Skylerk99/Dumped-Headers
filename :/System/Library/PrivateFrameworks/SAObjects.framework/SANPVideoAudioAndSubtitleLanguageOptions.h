/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:31 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, SANPVideoLanguageOption, NSString;

@interface SANPVideoAudioAndSubtitleLanguageOptions : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * availableSubtitles; 
@property (nonatomic,copy) NSArray * availableTracks; 
@property (nonatomic,retain) SANPVideoLanguageOption * currentAudioTrack; 
@property (nonatomic,retain) SANPVideoLanguageOption * currentSubtitles; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)audioAndSubtitleLanguageOptions;
+(id)audioAndSubtitleLanguageOptionsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)availableSubtitles;
-(void)setAvailableSubtitles:(NSArray *)arg1 ;
-(NSArray *)availableTracks;
-(void)setAvailableTracks:(NSArray *)arg1 ;
-(SANPVideoLanguageOption *)currentAudioTrack;
-(void)setCurrentAudioTrack:(SANPVideoLanguageOption *)arg1 ;
-(SANPVideoLanguageOption *)currentSubtitles;
-(void)setCurrentSubtitles:(SANPVideoLanguageOption *)arg1 ;
@end

