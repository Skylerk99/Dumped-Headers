/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:56 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKTableViewCell.h>

@interface MKCustomSeparatorTableViewCell : MKTableViewCell {

	BOOL _separatorHidden;
	double _leftSeparatorInset;
	double _rightSeparatorInset;

}

@property (assign,getter=isSeparatorHidden,nonatomic) BOOL separatorHidden;              //@synthesize separatorHidden=_separatorHidden - In the implementation block
@property (assign,nonatomic) double leftSeparatorInset;                                  //@synthesize leftSeparatorInset=_leftSeparatorInset - In the implementation block
@property (assign,nonatomic) double rightSeparatorInset;                                 //@synthesize rightSeparatorInset=_rightSeparatorInset - In the implementation block
@property (assign,nonatomic) double leadingSeparatorInset; 
@property (assign,nonatomic) double trailingSeparatorInset; 
-(void)setLeftSeparatorInset:(double)arg1 ;
-(void)setLeadingSeparatorInset:(double)arg1 ;
-(void)_updateSeparatorInset;
-(void)setSeparatorHidden:(BOOL)arg1 ;
-(void)setRightSeparatorInset:(double)arg1 ;
-(double)trailingSeparatorInset;
-(double)leadingSeparatorInset;
-(double)leftSeparatorInset;
-(double)rightSeparatorInset;
-(BOOL)isSeparatorHidden;
-(void)setTrailingSeparatorInset:(double)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGRect)_separatorFrame;
@end

