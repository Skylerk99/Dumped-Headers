/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:05 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIWebRotationDelegate
@optional
-(double)scaleForProposedNewScale:(double)arg1 andOldScale:(double)arg2;
-(CGSize*)contentSizeForScrollView:(id)arg1;

@required
-(id)contentView;
-(double)minimumScaleForSize:(CGSize)arg1;
-(id)enclosingScrollView;
-(double)zoomedDocumentScale;
-(double)currentDocumentScale;
-(SCD_Struct_UI45*)scalesForContainerSize:(CGSize)arg1;
-(void)updateBoundariesOfScrollView:(id)arg1 withScales:(SCD_Struct_UI45)arg2;
-(CGRect*)rectOfInterestForRotation;
-(double)minimumVerticalContentOffset;
-(double)heightToKeepVisible;
-(CGRect*)activeRectForRectOfInterest:(CGRect)arg1;
-(BOOL)considerHeightOfRectOfInterestForRotation;

@end

