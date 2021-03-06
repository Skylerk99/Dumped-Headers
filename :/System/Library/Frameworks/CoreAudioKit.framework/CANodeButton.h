/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:10 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@class NSURL;

@interface CANodeButton : UIButton {

	BOOL hasLabel;
	NSURL* _url;

}

@property (retain) NSURL * url;                //@synthesize url=_url - In the implementation block
@property (assign) BOOL hasLabel; 
-(void)setHasLabel:(BOOL)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(BOOL)hasLabel;
@end

