/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:40 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ChatKit/ChatKit-Structs.h>
@class CKTiledLayoutGeneratorScanState;

@interface CKTiledLayoutGenerator : NSObject {

	long long _cacheTailLocation;
	long long _cacheHeadLocation;
	SCD_Struct_CK8 _cachedTileInfo[20];
	id _cachedBatchID[20];
	BOOL _scannedBatchHasCaption;
	BOOL _shouldStop;
	long long _tileCount;
	/*^block*/id _tileImageSizeBlock;
	/*^block*/id _tileMinimumSizeBlock;
	/*^block*/id _tileHasCaptionBlock;
	/*^block*/id _tileCaptionSizeBlock;
	/*^block*/id _tileBatchIDBlock;
	long long _numberOfMagneticGuidelines;
	double _roundingScale;
	/*^block*/id _parsedFrameBlock;
	long long _scanLocation;
	id _scannedBatchID;
	long long _scanSpecialSequenceCount;
	CGSize _interTileSpacing;
	CGSize _noCaptionSpacing;
	UIEdgeInsets _captionPadding;

}

@property (assign,nonatomic) long long tileCount;                                      //@synthesize tileCount=_tileCount - In the implementation block
@property (assign,nonatomic) CGSize interTileSpacing;                                  //@synthesize interTileSpacing=_interTileSpacing - In the implementation block
@property (nonatomic,copy) id tileImageSizeBlock;                                      //@synthesize tileImageSizeBlock=_tileImageSizeBlock - In the implementation block
@property (nonatomic,copy) id tileMinimumSizeBlock;                                    //@synthesize tileMinimumSizeBlock=_tileMinimumSizeBlock - In the implementation block
@property (assign,nonatomic) UIEdgeInsets captionPadding;                              //@synthesize captionPadding=_captionPadding - In the implementation block
@property (assign,nonatomic) CGSize noCaptionSpacing;                                  //@synthesize noCaptionSpacing=_noCaptionSpacing - In the implementation block
@property (nonatomic,copy) id tileHasCaptionBlock;                                     //@synthesize tileHasCaptionBlock=_tileHasCaptionBlock - In the implementation block
@property (nonatomic,copy) id tileCaptionSizeBlock;                                    //@synthesize tileCaptionSizeBlock=_tileCaptionSizeBlock - In the implementation block
@property (nonatomic,copy) id tileBatchIDBlock;                                        //@synthesize tileBatchIDBlock=_tileBatchIDBlock - In the implementation block
@property (assign,nonatomic) long long numberOfMagneticGuidelines;                     //@synthesize numberOfMagneticGuidelines=_numberOfMagneticGuidelines - In the implementation block
@property (assign,nonatomic) double roundingScale;                                     //@synthesize roundingScale=_roundingScale - In the implementation block
@property (assign,nonatomic) id parsedFrameBlock;                                      //@synthesize parsedFrameBlock=_parsedFrameBlock - In the implementation block
@property (assign,nonatomic) CKTiledLayoutGeneratorScanState * scanState; 
@property (assign,nonatomic) long long scanLocation;                                   //@synthesize scanLocation=_scanLocation - In the implementation block
@property (nonatomic,retain) id scannedBatchID;                                        //@synthesize scannedBatchID=_scannedBatchID - In the implementation block
@property (assign,nonatomic) BOOL scannedBatchHasCaption;                              //@synthesize scannedBatchHasCaption=_scannedBatchHasCaption - In the implementation block
@property (assign,nonatomic) long long scanSpecialSequenceCount;                       //@synthesize scanSpecialSequenceCount=_scanSpecialSequenceCount - In the implementation block
@property (nonatomic,readonly) BOOL isAtEnd; 
@property (assign,nonatomic) BOOL shouldStop;                                          //@synthesize shouldStop=_shouldStop - In the implementation block
-(void)setInterTileSpacing:(CGSize)arg1 ;
-(void)setCaptionPadding:(UIEdgeInsets)arg1 ;
-(void)setNoCaptionSpacing:(CGSize)arg1 ;
-(long long)scanLocation;
-(void)setTileCount:(long long)arg1 ;
-(void)setTileImageSizeBlock:(id)arg1 ;
-(void)setTileMinimumSizeBlock:(id)arg1 ;
-(void)setTileHasCaptionBlock:(id)arg1 ;
-(void)setTileCaptionSizeBlock:(id)arg1 ;
-(void)setTileBatchIDBlock:(id)arg1 ;
-(CGSize)interTileSpacing;
-(UIEdgeInsets)captionPadding;
-(CGSize)noCaptionSpacing;
-(void)setNumberOfMagneticGuidelines:(long long)arg1 ;
-(void)setRoundingScale:(double)arg1 ;
-(void)enumerateFramesWithBlock:(/*^block*/id)arg1 ;
-(void)setParsedFrameBlock:(id)arg1 ;
-(void)willParseTiles;
-(void)parseTiles;
-(void)didParseTiles;
-(BOOL)parseNextTiles;
-(BOOL)shouldStop;
-(void)setScannedBatchID:(id)arg1 ;
-(void)setScannedBatchHasCaption:(BOOL)arg1 ;
-(id)scannedBatchID;
-(BOOL)scannedBatchHasCaption;
-(long long)scanSpecialSequenceCount;
-(void)setScanSpecialSequenceCount:(long long)arg1 ;
-(long long)tileCount;
-(id)tileImageSizeBlock;
-(id)tileMinimumSizeBlock;
-(id)tileHasCaptionBlock;
-(id)tileBatchIDBlock;
-(BOOL)scanTile:(SCD_Struct_CK9*)arg1 passingTest:(/*^block*/id)arg2 ;
-(BOOL)scanTile:(SCD_Struct_CK9*)arg1 ofType:(long long)arg2 ;
-(id)tileCaptionSizeBlock;
-(id)parsedFrameBlock;
-(void)setShouldStop:(BOOL)arg1 ;
-(long long)numberOfMagneticGuidelines;
-(double)roundingScale;
-(CKTiledLayoutGeneratorScanState *)scanState;
-(void)setScanState:(CKTiledLayoutGeneratorScanState *)arg1 ;
-(BOOL)scanAnyTile:(SCD_Struct_CK9*)arg1 ;
-(BOOL)scanTileWithPortraitImage:(SCD_Struct_CK9*)arg1 ;
-(BOOL)scanTileWithLandscapeImage:(SCD_Struct_CK9*)arg1 ;
-(BOOL)scanTileWithHorizontalPanorama:(SCD_Struct_CK9*)arg1 ;
-(BOOL)scanTileWithSquareImage:(SCD_Struct_CK9*)arg1 ;
-(BOOL)scanTile:(SCD_Struct_CK9*)arg1 type:(long long*)arg2 ;
-(CGSize)captionSizeForTileAtIndex:(long long)arg1 proposedSize:(CGSize)arg2 ;
-(void)parsedFrame:(CGRect)arg1 type:(long long)arg2 forTileAtIndex:(long long)arg3 ;
-(double)valueByRounding:(double)arg1 usingMagneticGuidelines:(BOOL)arg2 ;
-(id)init;
-(BOOL)isAtEnd;
-(void)setScanLocation:(long long)arg1 ;
@end

