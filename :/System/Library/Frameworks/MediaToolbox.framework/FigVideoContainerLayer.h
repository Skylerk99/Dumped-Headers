/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaToolbox/FigBaseCALayer.h>

@class CALayer;

@interface FigVideoContainerLayer : FigBaseCALayer {

	CALayer* _videoLayer;
	BOOL _shouldResizeVideoLayer;

}

@property (nonatomic,retain) CALayer * videoLayer;                     //@synthesize videoLayer=_videoLayer - In the implementation block
@property (assign,nonatomic) BOOL shouldResizeVideoLayer;              //@synthesize shouldResizeVideoLayer=_shouldResizeVideoLayer - In the implementation block
+(id)defaultActionForKey:(id)arg1 ;
-(void)setShouldResizeVideoLayer:(BOOL)arg1 ;
-(CALayer *)videoLayer;
-(BOOL)shouldResizeVideoLayer;
-(void)dealloc;
-(id)actionForKey:(id)arg1 ;
-(void)layoutSublayers;
-(void)setVideoLayer:(CALayer *)arg1 ;
@end

