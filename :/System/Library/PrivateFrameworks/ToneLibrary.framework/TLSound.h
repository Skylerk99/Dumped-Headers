/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:33 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TLSound : NSObject {

	BOOL _shouldDisposeOfSoundID;
	unsigned _soundID;
	NSString* _filePath;

}

@property (nonatomic,copy) NSString * filePath;                                                            //@synthesize filePath=_filePath - In the implementation block
@property (assign,nonatomic) unsigned soundID;                                                             //@synthesize soundID=_soundID - In the implementation block
@property (assign,setter=_setShouldDisposeOfSoundID:,nonatomic) BOOL _shouldDisposeOfSoundID;              //@synthesize shouldDisposeOfSoundID=_shouldDisposeOfSoundID - In the implementation block
-(void)dealloc;
-(NSString *)filePath;
-(unsigned)soundID;
-(id)initWithFilePath:(id)arg1 soundID:(unsigned)arg2 ;
-(void)_setFilePath:(id)arg1 ;
-(void)_setSoundID:(unsigned)arg1 ;
-(BOOL)_shouldDisposeOfSoundID;
-(void)_setShouldDisposeOfSoundID:(BOOL)arg1 ;
@end

