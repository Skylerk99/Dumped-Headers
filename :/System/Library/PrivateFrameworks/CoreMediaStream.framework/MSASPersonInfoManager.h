/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:06 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreMediaStream/CoreMediaStream-Structs.h>
@class NSMutableDictionary, NSString;

@interface MSASPersonInfoManager : NSObject {

	NSMutableDictionary* _personIDToPersonInfoDictionary;
	NSString* _pathForPersonInfoDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * personIDToPersonInfoDictionary;              //@synthesize personIDToPersonInfoDictionary=_personIDToPersonInfoDictionary - In the implementation block
@property (nonatomic,retain) NSString * pathForPersonInfoDictionary;                            //@synthesize pathForPersonInfoDictionary=_pathForPersonInfoDictionary - In the implementation block
+(id)sharedManager;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)initWithPath:(id)arg1 ;
-(BOOL)updateWithSharingRelationship:(id)arg1 ;
-(NSMutableDictionary *)personIDToPersonInfoDictionary;
-(void)setPersonIDToPersonInfoDictionary:(NSMutableDictionary *)arg1 ;
-(NSString *)pathForPersonInfoDictionary;
-(void)setPathForPersonInfoDictionary:(NSString *)arg1 ;
-(id)firstNameForPersonID:(id)arg1 ;
-(id)lastNameForPersonID:(id)arg1 ;
-(id)fullNameForPersonID:(id)arg1 ;
-(id)emailForPersonID:(id)arg1 ;
@end

