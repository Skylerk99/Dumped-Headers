/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:39 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OCDDelayedMedia.h>

@class NSData, NSString;

@interface OADSound : OCDDelayedMedia {

	NSData* mSoundData;
	NSString* mName;
	int mSizeInBytes;

}
-(void)dealloc;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(BOOL)isLoaded;
-(void)setSizeInBytes:(int)arg1 ;
-(void)setSoundData:(id)arg1 ;
-(int)sizeInBytes;
-(id)soundData;
@end

