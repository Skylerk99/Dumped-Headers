/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:40 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKIconArtwork.h>

@class VKIconArtwork;

@interface _VKScaledFallbackIconArtwork : VKIconArtwork {

	VKIconArtwork* _artwork;
	CGSize _size;

}
-(CGSize)size;
-(void)dealloc;
-(id)initWithArtwork:(id)arg1 contentScale:(double)arg2 ;
-(void)_cleanUpAfterDrawing;
-(id)_newImage;
@end

