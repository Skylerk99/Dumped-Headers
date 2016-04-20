/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:16 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CUIPSDLayerEffectComponent : NSObject {

	BOOL _visible;
	NSString* _name;

}

@property (assign) BOOL visible;                 //@synthesize visible=_visible - In the implementation block
@property (retain) NSString * name;              //@synthesize name=_name - In the implementation block
-(BOOL)updateLayerEffectPreset:(id)arg1 error:(id*)arg2 ;
-(id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)_colorFromShapeEffectValue:(/*function pointer*/void*)arg1 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(unsigned)effectType;
@end

