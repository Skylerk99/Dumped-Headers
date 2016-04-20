/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:52 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKMaterial.h>

@class SCNMaterial, NSMutableArray, OKWidgetNode;

@interface OKWidgetSceneKitMaterial : OKMaterial {

	SCNMaterial* _nativeMaterial;
	NSMutableArray* _materialProperties;

}

@property (assign,nonatomic) OKWidgetNode * parentNode; 
@property (nonatomic,retain,readonly) SCNMaterial * nativeMaterial;              //@synthesize nativeMaterial=_nativeMaterial - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)proxyForMaterial:(id)arg1 ;
-(void)dealloc;
-(OKWidgetNode *)parentNode;
-(void)load;
-(void)unload;
-(void)applySettingsIfNeeded;
-(id)settingName;
-(void)setSettingName:(id)arg1 ;
-(SCNMaterial *)nativeMaterial;
-(void)setParentNode:(OKWidgetNode *)arg1 ;
-(id)initWithMaterial:(id)arg1 ;
-(id)initWithNativeMaterial:(id)arg1 ;
-(id)settingAmbient;
-(void)setSettingAmbient:(id)arg1 ;
-(id)settingDiffuse;
-(void)setSettingDiffuse:(id)arg1 ;
-(BOOL)settingDoubleSided;
-(void)setSettingDoubleSided:(BOOL)arg1 ;
-(id)settingEmission;
-(void)setSettingEmission:(id)arg1 ;
-(id)settingLightingModelName;
-(void)setSettingLightingModelName:(id)arg1 ;
-(BOOL)settingLitPerPixel;
-(void)setSettingLitPerPixel:(BOOL)arg1 ;
-(BOOL)settingLocksAmbientWithDiffuse;
-(void)setSettingLocksAmbientWithDiffuse:(BOOL)arg1 ;
-(id)settingMultiply;
-(void)setSettingMultiply:(id)arg1 ;
-(id)settingNormal;
-(void)setSettingNormal:(id)arg1 ;
-(id)settingReflective;
-(void)setSettingReflective:(id)arg1 ;
-(double)settingShininess;
-(void)setSettingShininess:(double)arg1 ;
-(id)settingSpecular;
-(void)setSettingSpecular:(id)arg1 ;
-(double)settingTransparency;
-(void)setSettingTransparency:(double)arg1 ;
-(long long)settingTransparencyMode;
-(void)setSettingTransparencyMode:(long long)arg1 ;
-(id)settingTransparent;
-(void)setSettingTransparent:(id)arg1 ;
-(BOOL)settingWritesToDepthBuffer;
-(void)setSettingWritesToDepthBuffer:(BOOL)arg1 ;
@end

