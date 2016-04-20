/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:38 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDMediaRep.h>

@protocol TSDAudioHUDController;
@class TSKAVPlayerController, CALayer, TSDMovieInfo;

@interface TSDAudioRep : TSDMediaRep {

	TSKAVPlayerController* mPlayerController;
	CALayer* mPlayPauseButtonLayer;
	CALayer* mAudioImageLayer;
	CALayer* mSpinnerLayer;
	float mDynamicVolume;
	BOOL mIsChangingDynamicVolume;
	id<TSDAudioHUDController> mAudioHUDController;

}

@property (nonatomic,readonly) TSDMovieInfo * movieInfo; 
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(BOOL)directlyManagesLayerContent;
-(void)drawInContextWithoutEffects:(CGContextRef)arg1 withContent:(BOOL)arg2 withStroke:(BOOL)arg3 withOpacity:(BOOL)arg4 forAlphaOnly:(BOOL)arg5 drawChildren:(BOOL)arg6 ;
-(BOOL)canResetMediaSize;
-(BOOL)shouldShowMediaReplaceUI;
-(BOOL)shouldAllowReplacementFromPaste;
-(BOOL)shouldAllowReplacementFromDrop;
-(void)dealloc;
-(Class)layerClass;
-(void)drawInContext:(CGContextRef)arg1 ;
-(TSDMovieInfo *)movieInfo;
@end

