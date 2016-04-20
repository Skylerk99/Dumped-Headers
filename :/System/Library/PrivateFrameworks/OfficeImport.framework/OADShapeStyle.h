/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:39 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OADStyleMatrixReference, OADFontReference;

@interface OADShapeStyle : NSObject <NSCopying> {

	OADStyleMatrixReference* mLineReference;
	OADStyleMatrixReference* mFillReference;
	OADStyleMatrixReference* mEffectReference;
	OADFontReference* mFontReference;

}
+(id)defaultShapeStyle;
+(id)defaultOfficeShapeStyle;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)applyToGraphicProperties:(id)arg1 styleMatrix:(id)arg2 ;
-(void)applyToTextBody:(id)arg1 ;
-(void)setLineReference:(id)arg1 ;
-(void)setFillReference:(id)arg1 ;
-(void)setEffectReference:(id)arg1 ;
-(void)setFontReference:(id)arg1 ;
-(void)applyToTextListStyle:(id)arg1 ;
-(void)applyToParagraphProperties:(id)arg1 ;
-(void)setLineMatrixIndex:(unsigned)arg1 color:(id)arg2 ;
-(void)setFillMatrixIndex:(unsigned)arg1 color:(id)arg2 ;
-(void)setEffectMatrixIndex:(unsigned)arg1 color:(id)arg2 ;
-(void)applyToGraphicProperties:(id)arg1 styleMatrix:(id)arg2 useNull:(BOOL)arg3 strokeWidthMultiplier:(float)arg4 ;
-(id)lineReference;
-(id)fillReference;
-(id)effectReference;
-(id)fontReference;
@end

