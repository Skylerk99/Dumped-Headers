/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:15 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class NSDictionary, CUIPSDGradient;

@interface CUIThemeSchemaRendition : CUIThemeRendition {

	NSDictionary* cuiInfo;
	unsigned long long _nimages;
	CGImage* _image[9];
	CGRect _layoutRects[9];
	CGSize _intrinsicSize;
	CGRect _elementRect;
	long long _columnSlices;
	long long _rowSlices;
	psdGradientColor _contentInsets;
	CUIPSDGradient* _gradient;

}

@property (nonatomic,readonly) unsigned long long numberOfSlices; 
@property (nonatomic,readonly) CGRect* sliceRects; 
@property (nonatomic,readonly) CUIPSDGradient * gradient; 
-(unsigned short)previousValue;
-(unsigned short)size;
-(unsigned short)layer;
-(void)dealloc;
-(id)description;
-(unsigned short)state;
-(unsigned short)identifier;
-(double)scale;
-(unsigned short)value;
-(psdGradientColor)contentInsets;
-(unsigned short)direction;
-(id)stringForState:(unsigned short)arg1 ;
-(CUIPSDGradient *)gradient;
-(id)slices;
-(unsigned long long)numberOfSlices;
-(id)initWithCoreUIOptions:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(id)referenceImage;
-(unsigned short)dimension1;
-(unsigned short)dimension2;
-(unsigned short)drawingLayer;
-(unsigned short)keyScale;
-(CGRect*)sliceRects;
-(id)initWithCoreUIOptions:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(CGRect)alignmentRectangle;
-(CGRect)edgeInsets:(BOOL)arg1 ;
-(id)coreUIOptions;
-(id)defaultTemplateName;
-(long long)columnSlices;
-(long long)rowSlices;
-(CGPoint)renditionCoordinatesForPartFeatures:(long long)arg1 ;
-(id)typeLocalizedString;
-(id)stateLocalizedString;
-(id)previousStateLocalizedString;
-(id)directionLocalizedString;
-(id)valueLocalizedString;
-(id)previousValueLocalizedString;
-(id)sizeLocalizedString;
-(id)presentationStateLocalizedString;
-(id)dimension1LocalizedString;
-(id)dimension2LocalizedString;
-(id)drawingLayerLocalizedString;
-(id)lookLocalizedString;
-(id)scaleLocalizedString;
-(id)stringForValue:(unsigned short)arg1 ;
-(unsigned short)look;
-(unsigned short)presentationState;
-(unsigned short)previousState;
@end

