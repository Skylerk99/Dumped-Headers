/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:48 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDRep.h>
#import <iWorkImport/TSDMagicMoveMatching.h>

@class CALayer, KNSlideBackgroundInfo;

@interface KNSlideBackgroundRep : TSDRep <TSDMagicMoveMatching> {

	CALayer* mBlackBackgroundLayer;
	BOOL mLayerNeedsUpdate;
	BOOL mFillCanApplyToCALayer;

}

@property (readonly) KNSlideBackgroundInfo * slideBackgroundInfo; 
+(id)magicMoveMatchesBetweenOutgoingObjects:(id)arg1 andIncomingObjects:(id)arg2 textureContext:(id)arg3 ;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(id)textureForContext:(id)arg1 ;
-(BOOL)directlyManagesLayerContent;
-(BOOL)wantsToDistortWithImagerContext;
-(KNSlideBackgroundInfo *)slideBackgroundInfo;
-(void)didUpdateLayer:(id)arg1 ;
-(id)additionalLayersUnderLayer;
-(void)dealloc;
-(BOOL)isOpaque;
-(void)drawInContext:(CGContextRef)arg1 ;
@end

