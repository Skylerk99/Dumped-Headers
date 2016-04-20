/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:02 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/VectorKit.axbundle/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKFeatureAccessibilityElement.h>

@interface VKPointFeatureAccessibilityElement : VKFeatureAccessibilityElement {

	SCD_Struct_VK4 _location;

}

@property (assign,nonatomic) SCD_Struct_VK4 location;              //@synthesize location=_location - In the implementation block
-(id)accessibilityPaths;
-(id)_poiTypeSuffix;
-(double)_radius;
-(id)_distanceAwayString;
-(id)trueLabel;
-(BOOL)_accessibilitySupportsActivateAction;
-(id)accessibilityLabel;
-(SCD_Struct_VK4)location;
-(CGRect)accessibilityFrame;
-(BOOL)isAccessibilityElement;
-(id)accessibilityPath;
-(BOOL)accessibilityActivate;
-(void)setLocation:(SCD_Struct_VK4)arg1 ;
-(int)_accessibilityMapFeatureType;
@end

