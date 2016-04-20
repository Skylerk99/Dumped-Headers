/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:44 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSUColor;

@interface TSTTableBadge : NSObject {

	int _badgeType;
	TSUColor* _color;
	double _viewScale;
	CGRect _frame;

}

@property (assign,nonatomic) int badgeType;                 //@synthesize badgeType=_badgeType - In the implementation block
@property (nonatomic,retain) TSUColor * color;              //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double viewScale;              //@synthesize viewScale=_viewScale - In the implementation block
@property (assign,nonatomic) CGRect frame;                  //@synthesize frame=_frame - In the implementation block
+(id)badgeWithType:(int)arg1 color:(id)arg2 viewScale:(double)arg3 frame:(CGRect)arg4 ;
-(double)viewScale;
-(int)badgeType;
-(void)setBadgeType:(int)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(TSUColor *)color;
-(void)setColor:(TSUColor *)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setViewScale:(double)arg1 ;
@end

