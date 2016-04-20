/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:16 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSString, NSData;

@interface CUIThemeRendition : NSObject {

	renditionkeytoken _stackKey[16];
	renditionkeytoken* _key;
	long long _type;
	unsigned _subtype;
	unsigned _scale;
	struct {
		unsigned isHeaderFlaggedFPO : 1;
		unsigned isExcludedFromContrastFilter : 1;
		unsigned isVectorBased : 1;
		unsigned isOpaque : 1;
		unsigned bitmapEncoding : 4;
		unsigned reserved : 24;
	}  _renditionFlags;
	long long _templateRenderingMode;
	long long _artworkStatus;
	unsigned long long _colorSpaceID;
	NSString* _name;
	NSData* _srcData;
	long long _validLookGradation;
	double _opacity;
	int _blendMode;
	NSString* _utiType;
	int _exifOrientation;

}

@property (assign,nonatomic) double opacity;                   //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) int blendMode;                    //@synthesize blendMode=_blendMode - In the implementation block
@property (assign,nonatomic) int exifOrientation;              //@synthesize exifOrientation=_exifOrientation - In the implementation block
+(id)displayNameForRenditionType:(long long)arg1 ;
+(id)filteredCSIDataFromBaseCSIData:(id)arg1 ;
+(Class)renditionClassForRenditionType:(long long)arg1 andPixelFormat:(unsigned)arg2 ;
-(void)dealloc;
-(id)description;
-(id)name;
-(const renditionkeytoken*)key;
-(long long)type;
-(unsigned)subtype;
-(double)scale;
-(id)data;
-(int)exifOrientation;
-(long long)templateRenderingMode;
-(BOOL)isOpaque;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(id)metrics;
-(id)utiType;
-(id)gradient;
-(void)setExifOrientation:(int)arg1 ;
-(CGPDFDocumentRef)pdfDocument;
-(int)pixelFormat;
-(id)packedContents;
-(id)layerReferences;
-(CGImageRef)unslicedImage;
-(id)linkingToRendition;
-(unsigned)gradientStyle;
-(BOOL)isVectorBased;
-(unsigned long long)colorSpaceID;
-(id)effectPreset;
-(CGSize)originalUncroppedSize;
-(void)_initializeRenditionKey:(const renditionkeytoken*)arg1 ;
-(unsigned short)valueForTokenIdentifier:(unsigned short)arg1 ;
-(BOOL)isTiled;
-(id)imageForSliceIndex:(long long)arg1 ;
-(BOOL)isScaled;
-(id)maskForSliceIndex:(long long)arg1 ;
-(BOOL)edgesOnly;
-(id)sliceInformation;
-(double)gradientDrawingAngle;
-(id)externalTags;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(void)_setStructuredThemeStore:(id)arg1 ;
-(BOOL)isHeaderFlaggedFPO;
-(long long)artworkStatus;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(id)_initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(CGImageRef)createImageFromPDFRenditionWithScale:(double)arg1 ;
-(id)assetPackIdentifier;
-(void)_initializeTypeIdentifiersWithLayout:(unsigned short)arg1 ;
-(BOOL)isInternalLink;
-(CGRect)alphaCroppedRect;
-(void)_initializeCompositingOptionsFromCSIData:(const csiheader*)arg1 ;
-(void)_initalizeMetadataFromCSIData:(const csiheader*)arg1 ;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(int)bitmapEncoding;
-(BOOL)isValidForLookGradation:(long long)arg1 ;
-(void)setBlendMode:(int)arg1 ;
-(int)blendMode;
@end

