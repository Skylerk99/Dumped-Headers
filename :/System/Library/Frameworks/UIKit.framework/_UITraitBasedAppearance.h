/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:06 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIAppearance.h>

@class UITraitCollection;

@interface _UITraitBasedAppearance : _UIAppearance {

	UITraitCollection* _traitCollection;

}
+(id)_appearanceForTraitCollection:(id)arg1 forClass:(Class)arg2 withContainerList:(id)arg3 ;
+(BOOL)_hasAnyCustomizations;
+(BOOL)_hasCustomizationsForTraitCollection:(id)arg1 class:(Class)arg2 guideClass:(Class)arg3 ;
+(void)_setHasAnyCustomizations;
-(void)dealloc;
-(id)_traitCollection;
-(BOOL)_isValidAppearanceForCustomizableObject:(id)arg1 ;
-(void)_invalidateAppearanceInWindow:(id)arg1 ;
@end

