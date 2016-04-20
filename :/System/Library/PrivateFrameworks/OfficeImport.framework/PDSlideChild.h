/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:50 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/PDSlideBase.h>

@class OADThemeOverrides, OADColorMap;

@interface PDSlideChild : PDSlideBase {

	BOOL mShowMasterPlaceholderAnimations;
	BOOL mShowMasterShapes;
	OADThemeOverrides* mThemeOverrides;
	OADColorMap* mColorMapOverride;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(id)colorScheme;
-(id)styleMatrix;
-(id)colorMap;
-(id)fontScheme;
-(BOOL)showMasterShapes;
-(id)drawingTheme;
-(void)doneWithContent;
-(id)themeOverrides;
-(void)setColorMapOverride:(id)arg1 ;
-(void)setShowMasterShapes:(BOOL)arg1 ;
-(id)defaultTextListStyle;
-(void)setShowMasterPlaceholderAnimations:(BOOL)arg1 ;
-(id)colorMapOverride;
-(BOOL)showMasterPlaceholderAnimations;
@end

