/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:17 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@interface UIKeyboardCandidateGridSecondaryCandidatesLayout : UICollectionViewFlowLayout {

	int _candidatesVisualStyle;
	SCD_Struct_UI38 _visualStyling;

}

@property (assign,nonatomic) SCD_Struct_UI38 visualStyling;              //@synthesize visualStyling=_visualStyling - In the implementation block
@property (assign,nonatomic) int candidatesVisualStyle;                  //@synthesize candidatesVisualStyle=_candidatesVisualStyle - In the implementation block
+(Class)layoutAttributesClass;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)setVisualStyling:(SCD_Struct_UI38)arg1 ;
-(SCD_Struct_UI38)visualStyling;
-(void)setCandidatesVisualStyle:(int)arg1 ;
-(int)candidatesVisualStyle;
-(void)updateAttributes:(id)arg1 ;
@end

