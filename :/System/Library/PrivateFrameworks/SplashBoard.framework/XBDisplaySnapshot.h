/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:59 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SplashBoard/SplashBoard-Structs.h>
@class FBSDisplay, NSOrderedSet, UIImage;

@interface XBDisplaySnapshot : NSObject {

	FBSDisplay* _display;
	NSOrderedSet* _layers;
	BOOL _opaque;
	CGSize _snapshotSize;
	double _scale;
	UIImage* _image;
	CGImageRef _imageRef;
	IOSurfaceRef _surfaceRef;

}

@property (nonatomic,retain,readonly) FBSDisplay * display;                      //@synthesize display=_display - In the implementation block
@property (nonatomic,copy,readonly) NSOrderedSet * layers;                       //@synthesize layers=_layers - In the implementation block
@property (assign,getter=isOpaque,nonatomic) BOOL opaque;                        //@synthesize opaque=_opaque - In the implementation block
@property (assign,nonatomic) double scale;                                       //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) CGSize snapshotSize;                                //@synthesize snapshotSize=_snapshotSize - In the implementation block
@property (nonatomic,readonly) IOSurfaceRef IOSurface; 
@property (getter=isDataLoaded,nonatomic,readonly) BOOL dataLoaded; 
@property (nonatomic,readonly) CGImageRef CGImage; 
@property (nonatomic,retain,readonly) UIImage * UIImage; 
-(void)setOpaque:(BOOL)arg1 ;
-(void)dealloc;
-(FBSDisplay *)display;
-(double)_scale;
-(void)setScale:(double)arg1 ;
-(double)scale;
-(CGImageRef)CGImage;
-(UIImage *)UIImage;
-(NSOrderedSet *)layers;
-(BOOL)isOpaque;
-(IOSurfaceRef)IOSurface;
-(id)initWithDisplay:(id)arg1 layers:(id)arg2 ;
-(void)setSnapshotSize:(CGSize)arg1 ;
-(BOOL)isDataLoaded;
-(void)capture;
-(void)_synchronizedCaptureWithCompletion:(/*^block*/id)arg1 ;
-(CGSize)_scaledSnapshotSize;
-(id)_IOSurfacePropertyDictionaryForSize:(CGSize)arg1 ;
-(id)initWithDisplay:(id)arg1 layer:(id)arg2 ;
-(CGSize)snapshotSize;
@end

