/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:47 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDContainerRep.h>

@interface TSWPPageRep : TSDContainerRep
+(id)p_overflowKnobImage;
-(void)updateFromLayout;
-(void)addAdditionalChildLayersToArray:(id)arg1 ;
-(void)p_updateLayoutBordersVisibility;
-(void)p_updateBorderLayers;
-(BOOL)p_hasValidHeaderFooterForType:(int)arg1 ;
-(BOOL)p_headerFooterIsVisibleAndInteractive:(int)arg1 ;
-(int)p_hitHeaderFooterFragment:(int)arg1 atPoint:(CGPoint)arg2 ;
-(id)p_hitRep:(CGPoint)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)p_createHeaderFooterBorderLayerIfNecessaryForType:(int)arg1 ;
-(void)p_createHeaderFooterOverflowIndicatorLayerIfNecessaryForType:(int)arg1 fragment:(int)arg2 ;
-(BOOL)p_headerFooterBorderVisibleForType:(int)arg1 ;
-(void)dealloc;
@end

