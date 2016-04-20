/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:35 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CALayer, NSArray;

@interface TSCHMultiDataChartRepMultiDataBuildAnimatedLayers : NSObject {

	CALayer* legendLayer;
	CALayer* backgroundLayer;
	CALayer* dataSetNameLayer;
	NSArray* elementLayers;
	NSArray* referenceLineLayers;

}

@property (nonatomic,retain) CALayer * legendLayer; 
@property (nonatomic,retain) CALayer * backgroundLayer; 
@property (nonatomic,copy) NSArray * referenceLineLayers; 
@property (nonatomic,retain) CALayer * dataSetNameLayer; 
@property (nonatomic,copy) NSArray * elementLayers; 
+(id)animatedLayers;
-(CALayer *)backgroundLayer;
-(CALayer *)legendLayer;
-(NSArray *)elementLayers;
-(CALayer *)dataSetNameLayer;
-(NSArray *)referenceLineLayers;
-(id)allBackgroundFadingLayers;
-(id)elementFadingLayers;
-(id)layersRequiringGeometryTransformsBackgroundOnly:(BOOL)arg1 ;
-(id)layersAlreadyHaveProperTransforms;
-(void)setLegendLayer:(CALayer *)arg1 ;
-(void)setBackgroundLayer:(CALayer *)arg1 ;
-(void)setDataSetNameLayer:(CALayer *)arg1 ;
-(void)setElementLayers:(NSArray *)arg1 ;
-(void)setReferenceLineLayers:(NSArray *)arg1 ;
-(void)dealloc;
@end

