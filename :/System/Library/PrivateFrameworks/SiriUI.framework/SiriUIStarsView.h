/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:47 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImage;

@interface SiriUIStarsView : UIView {

	double _rating;
	double _maxRating;
	UIImage* _starsImage;
	BOOL _snapsToHalfStar;
	long long _style;
	long long _maxNumberOfStars;

}

@property (assign,nonatomic) long long style;                         //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL snapsToHalfStar;                    //@synthesize snapsToHalfStar=_snapsToHalfStar - In the implementation block
@property (assign,nonatomic) long long maxNumberOfStars;              //@synthesize maxNumberOfStars=_maxNumberOfStars - In the implementation block
+(id)_starsImageCache;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)_starMaskSmall;
-(id)_starMaskMedium;
-(id)_starMaskLarge;
-(void)_updateStarsForStyleAndTotalNumber;
-(id)_cacheKeyForStyle:(long long)arg1 numberOfStars:(long long)arg2 ;
-(id)_starMaskForStyle:(long long)arg1 ;
-(double)_starSpacingForStyle:(long long)arg1 ;
-(CGSize)_sizeForStar:(id)arg1 spacing:(double)arg2 ;
-(double)_xForFractionalPartOfStars:(double)arg1 inWidth:(double)arg2 ;
-(void)setRating:(double)arg1 maxRating:(double)arg2 ;
-(BOOL)snapsToHalfStar;
-(void)setSnapsToHalfStar:(BOOL)arg1 ;
-(long long)maxNumberOfStars;
-(void)setMaxNumberOfStars:(long long)arg1 ;
@end

