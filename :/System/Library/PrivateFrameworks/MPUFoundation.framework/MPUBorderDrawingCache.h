/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:00 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPUBorderView, NSCache;

@interface MPUBorderDrawingCache : NSObject {

	MPUBorderView* _borderView;
	NSCache* _images;
	double _displayScale;

}

@property (assign,nonatomic) double displayScale;              //@synthesize displayScale=_displayScale - In the implementation block
-(void)dealloc;
-(id)init;
-(double)displayScale;
-(void)_invalidate;
-(id)imageForBorderConfiguration:(id)arg1 ;
-(void)_applicationDidReceiveMemoryWarning:(id)arg1 ;
-(id)_borderView;
-(void)setDisplayScale:(double)arg1 ;
@end

