/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:39 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADEmbeddedMediaFile.h>

@interface OADWavAudioFile : OADEmbeddedMediaFile {

	float mDuration;
	BOOL mHasDuration;

}

@property (assign,nonatomic) float duration; 
@property (assign,nonatomic) BOOL hasDuration; 
-(float)duration;
-(void)setDuration:(float)arg1 ;
-(BOOL)isAudioOnly;
-(void)setIsAudioOnly:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
@end

