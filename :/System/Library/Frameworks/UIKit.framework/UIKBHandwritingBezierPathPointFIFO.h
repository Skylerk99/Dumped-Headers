/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:13 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBHandwritingPointFIFO.h>

@class UIBezierPath, NSMutableArray;

@interface UIKBHandwritingBezierPathPointFIFO : UIKBHandwritingPointFIFO {

	UIBezierPath* _path;
	/*^block*/id _emissionHandler;
	NSMutableArray* _prevPoints;

}

@property (nonatomic,retain) UIBezierPath * path;                      //@synthesize path=_path - In the implementation block
@property (copy) id emissionHandler;                                   //@synthesize emissionHandler=_emissionHandler - In the implementation block
@property (nonatomic,retain) NSMutableArray * prevPoints;              //@synthesize prevPoints=_prevPoints - In the implementation block
-(void)dealloc;
-(void)flush;
-(UIBezierPath *)path;
-(void)setPath:(UIBezierPath *)arg1 ;
-(void)addPoint:(SCD_Struct_UI68)arg1 ;
-(void)clear;
-(void)setEmissionHandler:(id)arg1 ;
-(id)initWithFIFO:(id)arg1 ;
-(void)setPrevPoints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)prevPoints;
-(id)emissionHandler;
@end

